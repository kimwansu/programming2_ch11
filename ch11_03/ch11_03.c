#include <stdio.h>
#include <time.h>

void array_fill(int* A, int size);

int main()
{
    int arr[10];
    int i;

    srand(time(NULL));
    array_fill(arr, 10);

    for (i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

void array_fill(int* A, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        A[i] = rand() % 100;
    }
}

// 11-2
// 정수 배열을 받아서 원소를 난수로 채우는 함수 작성
