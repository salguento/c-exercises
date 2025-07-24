#include <stdio.h>

int non_repeating(int a[], int length);

int main(void)
{
    int array[] = {1, 3, 5, 7, 3, 7, 6, 6, 4, 2, 9};

    int count = non_repeating(array, 11);

    printf("count: %d\n", count);
    return 0;
}

int non_repeating(int a[], int length)
{
    int i = 0, j = 0, count = 0;

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
            if (a[i] == a[j] && i != j)
                break;
        if (j == length)
            count++;
    }
    return count;
}