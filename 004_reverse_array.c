#include <stdio.h>

void reverse_array(int array[], int length);

int main(void)
{
    int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = 9;
    reverse_array(myarray, 9);

    for (int i = 0; i < length; i++)
        printf("myarray[%d]: %d\n", i, myarray[i]);

    return 0;
}

void reverse_array(int array[], int length)
{
    int temp = 0;
    for (int i = 0; i < (length / 2); i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}