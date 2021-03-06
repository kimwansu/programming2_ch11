﻿#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int get_gcd(int x, int y);
int get_lcm(int x, int y);

int main()
{
    int a = 20;
    int b = 16;
    int gcd;
    int lcm;

    get_lcm_gcd(a, b, &lcm, &gcd);

    printf("%d와 %d의 최소공배수: %d\n", a, b, lcm);
    printf("%d와 %d의 최대공약수: %d\n", a, b, gcd);

    return 0;
}

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
    *p_gcd = get_gcd(x, y);
    *p_lcm = get_lcm(x, y);
}

int get_gcd(int x, int y)
{
    if (y == 0) {
        return x;
    }
    else {
        return get_gcd(y, x % y);
    }
}

int get_lcm(int x, int y)
{
    return (x * y) / get_gcd(x, y);
}