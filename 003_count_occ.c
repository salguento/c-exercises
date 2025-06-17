#include <stdio.h>

int count_occ(int array[], int length, int to_find);

int main(void)
{
    int myarray[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};
    int count_5s = count_occ(myarray, 10, 5);

    printf("Count: %d\n", count_5s);
    return 0;
}

int count_occ(int array[], int length, int to_find)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == to_find)
            count++;
    }
    return count;
}