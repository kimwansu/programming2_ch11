#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
    int a = 10;
    int b = 5;
    int sum;
    int diff;

    get_sum_diff(a, b, &sum, &diff);
    printf("%d+%d=%d\n", a, b, sum);
    printf("%d-%d=%d\n", a, b, diff);

    return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
}

// 11-3
// 2개의 정수의 합과 차를 동시에 반환하는 함수 작성
// 포인터 매개변수 사용