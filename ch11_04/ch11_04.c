#include <stdio.h>

void array_print(int* A, int size);

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    array_print(arr, 5);

    return 0;
}

void array_print(int* A, int size)
{
    int i;
    printf("A[] = { ");
    for (i = 0; i < size; i++) {
        if (i) {
            printf(", ");
        }

        printf("%d", A[i]);
    }
    printf(" }\n");
}

// 11-4
// 정수 배열의 원소를 화면에 출력하는 함수 작성
// 출력 형식: A[] = { 1, 2, 3, 4, 5 }