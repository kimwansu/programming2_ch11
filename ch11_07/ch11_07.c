#include <stdio.h>

void array_add(int* A, int* B, int* C, int size);

int main()
{
    int A[5] = { 1000000, 1100000, 1050000, 1200000, 950000 };
    int B[5] = { 12000, 54000, 400000, 300000, 10000 };
    int C[5];
    int i;

    array_add(A, B, C, 5);

    printf("\t기본급\t보너스\t총월급\n");
    for (i = 0; i < 5; i++) {
        printf("%d:\t%d\t%d\t%d\n", i + 1, A[i], B[i], C[i]);
    }

    return 0;
}

void array_add(int* A, int* B, int* C, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}

// 11-7
// 직원 기본급: A[]에 저장
// 직원 보너스: B[]에 저장
// 기본급+보너스 --> 월급 총액 계산 --> C[]에 저장