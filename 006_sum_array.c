#include <stdio.h>

int sum(int array[], int length);

int main(void)
{
    int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length1 = sizeof(myarray) / sizeof(myarray[0]);

    sum(myarray, length1);

    return 0;
}

int sum(int array[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    printf("Sum is equal to: %d.\n", sum);
    return 0;
}