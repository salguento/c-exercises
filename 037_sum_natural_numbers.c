#include <stdio.h>

int sum(int n);

int main(void)
{
    printf("Sum of %d: %d\n", 10, sum(10));
    return 0;
}

int sum(int n)
{
    if (n > 0)
        return n + sum(n - 1);
    else
        return 0;
}
