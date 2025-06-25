#include <stdio.h>
#include <string.h>
#include <ctype.h>

int flip_capslock(char *s);

int main(void)
{
    char s[] = "abcdeABCDE";

    int length = strlen(s);

    flip_capslock(s);
    printf("Flipped: %s\n", s);
    return 0;
}

int flip_capslock(char *s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    };

    return 0;
}