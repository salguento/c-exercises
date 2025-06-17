#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{
    int myarray[] = {5, 9, 10, 11, 4, 3, 8, 6, 7};
    int min1 = find_min(myarray, 9);
    printf("Minimum: %d\n", min1);

    return 0;
}

int find_min(int array[], int length)
{
    int min;
    min = array[0];

    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
};