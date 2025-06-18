#include <stdio.h>

int avg(double array[], int length);

int main(void)
{
    double arr1[] = {5.2, 9.3, 6.5, 4.1, 7.8};
    double arr2[] = {10.0};
    double arr3[] = {9.8, 9.6};
    double arr4[] = {-50, 50, -100, 100, -2, 2};

    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int length3 = sizeof(arr3) / sizeof(arr3[0]);
    int length4 = sizeof(arr4) / sizeof(arr4[0]);

    avg(arr1, length1);
    avg(arr2, length2);
    avg(arr3, length3);
    avg(arr4, length4);
    return 0;
}

int avg(double array[], int length)
{
    double avg = 0;
    for (int i = 0; i < length; i++)
    {
        avg += array[i];
    }

    avg /= length;
    printf("The average of the array is: %.2f\n", avg);
    return 0;
}