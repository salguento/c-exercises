#include <stdio.h>

void print_reverse(char *s);

int main()
{
    char s[] = "This is the way.";
    print_reverse(s);
    return 0;
}

void print_reverse(char *s)
{
    if (*s != '\0')
    {
        print_reverse(s + 1);
        printf("%c", *s);
    }
}