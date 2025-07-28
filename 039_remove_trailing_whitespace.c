#include <stdio.h>
#include <string.h>

void trim(char *s);

int main()
{
    char s[] = "This is the way. \n\n\t ";

    printf("before: %s", s);
    trim(s);
    printf("\nAfter:\n");
    printf("%s\n", s);
    printf("After trim\n");

    return 0;
}

void trim(char *s)
{
    int i = strlen(s) - 1;

    while (i > 0)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            i--;
        else
            break;
    }
    s[i + 1] = '\0';
}