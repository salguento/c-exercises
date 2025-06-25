#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int y);

int main(void)
{
    int year = 0;

    printf("Inform a year: \n");
    scanf("%d", &year);
    if (is_leap_year(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}

bool is_leap_year(int y)
{
    if (y % 4 != 0)
        return false;
    else if (y % 100 != 0)
        return true;
    else if (y % 400 != 0)
        return false;
    else
        return true;
}