#include <stdio.h>

void rotate_right_once(int array[], int length);
void rotate_right(int array[], int length, int n);

int main(void)
{
    int a1[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
        printf("%d ", a1[i]);
    printf("\n");

    rotate_right(a1, 6, 2);

    for (int i = 0; i < 6; i++)
        printf("%d ", a1[i]);
    return 0;
}

void rotate_right(int arrray[], int length, int n)
{
    for (int i = 0; i < n; i++)
        rotate_right_once(arrray, length);
}

void rotate_right_once(int array[], int length)
{
    int temp = array[length - 1];

    for (int i = (length - 2); i >= 0; i--)
        array[i + 1] = array[i];
    array[0] = temp;
}