#include <stdio.h>

int fibf(int length);
int fibf_rec(int n);
int main(void)
{
    int length = 0;

    do
    {
        printf("Enter sequence length: ");
        scanf("%d", &length);
        if (length < 3)
            printf("Length must be greater than 3\n");

    } while (length < 3);

    fibf(length);

    printf("Recursive solution: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", fibf_rec(i));
        if (i != (length - 1))
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}

int fibf_rec(int n)
{
    if (n > 1)
        return fibf_rec(n - 1) + fibf_rec(n - 2);
    else if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
    {
        printf("Error: n must be greater than 0\n");
        return -1;
    }
}

int fibf(int length)
{
    int term1 = 0;
    int term2 = 1;
    int fib = 0;

    printf("\nIterative solution:\n");
    printf("%d, %d, ", term1, term2);
    for (int i = 2; i < length; i++)
    {
        fib = term1 + term2;
        printf("%d", fib);

        term1 = term2;
        term2 = fib;
        if (i != (length - 1))
            printf(", ");
        else
            printf("\n");
    }
    return 0;
}