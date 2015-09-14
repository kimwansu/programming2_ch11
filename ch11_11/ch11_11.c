#include <stdio.h>

void merge(int *A, int *B, int*C, int size);
void print_array(int *arr, int size);

int main()
{
    int a[4] = { 2, 5, 7, 8 };
    int b[4] = { 1, 3, 4, 6 };
    int c[8];

    merge(a, b, c, 4);

    printf("배열 A의 내용:");
    print_array(a, 4);
    
    printf("배열 B의 내용:");
    print_array(b, 4);

    printf("합쳐진 배열 C의 내용:");
    print_array(c, 8);

    return 0;
}

void merge(int *A, int *B, int* C, int size)
{
    int i = 0;
    int j = 0;

    while (i < size && j < size) {
        if (A[i] < B[j]) {
            C[i + j] = A[i];
            i++;
        }
        else {
            C[i + j] = B[j];
            j++;
        }
    }

    while (i < size) {
        C[i + j] = A[i];
        i++;
    }

    while (j < size) {
        C[i + j] = B[j];
        j++;
    }
}

void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}