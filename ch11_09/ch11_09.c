#include <stdio.h>

int search(int *A, int size, int search_value);

int main()
{
    int salary[] = { 1200000, 1400000, 4900000, 3700000, 2000000, 4800000 };
    int idx = search(salary, 6, 2000000);

    printf("������ 2,000,000���� ����� %d���Դϴ�.\n", idx);
    return 0;
}

int search(int *A, int size, int search_value)
{
    int i;
    for (i = 0; i < size; i++) {
        if (A[i] == search_value) {
            return i;
        }
    }

    return -1;
}
