#include <stdio.h>

void print_until_newline(char *s);

int main()
{
    char s[] = "This is the way. Again...";
    print_until_newline(s);
    return 0;
}

void print_until_newline(char *s)
{
    int i = 0;
    while (s[i] != '/n' && s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
}