#include <stdio.h>

int array_sum(int* A, int size);

int main()
{
    int sum;
    int A[5] = { 1000000, 1100000, 1050000, 1200000, 950000 };

    sum = array_sum(A, 5);
    printf("이번 달 직원 월급의 합은 %d입니다.\n", sum);

    return 0;
}

int array_sum(int* A, int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++) {
        sum += A[i];
    }

    return sum;
}


// 11-8
// 직원 월급 A[]에 저장되어 있음
// 월급 총액 계산
// 정수형 배열 원소의 합 구해서 반환하는 함수