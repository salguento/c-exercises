#include <stdio.h>

int find_max(int array[], int length);

int main(void)
{
    int myarray[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};
    int max1 = find_max(myarray, 9);
    printf("Maximum: %d\n", max1);

    return 0;
}

int find_max(int array[], int length)
{
    int max;
    max = array[0];

    for (int i = 1; i < length; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}