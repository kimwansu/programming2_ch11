#include <stdio.h>

void array_copy(int* A, int* B, int size);

int main()
{
    int A[5] = { 1, 2, 3, 4, 5 };
    int B[5];
    int i;

    array_copy(A, B, 5);
    for (i = 0; i < 5; i++) {
        printf("A[%d] = %d, B[%d] = %d\n", i, A[i], i, B[i]);
    }

    return 0;
}

void array_copy(int* A, int* B, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        B[i] = A[i];
    }
}

// 11-6
// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수 작성 테스트