#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_digits(char *s);

int main()
{
    char s[] = "rsitensietnrsitn 123456789 (#*&$(#*$&#@&@#))";
    int result = count_digits(s);
    printf("Digit count: %d\n", result);

    return 0;
}

int count_digits(char *s)
{
    int length = strlen(s);
    int count = 0;

    for (int i = 0; i < length; i++)
        if (isdigit(s[i]))
            count++;

    return count;
}