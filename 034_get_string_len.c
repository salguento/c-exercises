#include <stdio.h>

int strlen(char *string);

int main(void)
{
    char *s1 = "This is the way.";
    int length = strlen(s1);
    printf("length: %d\n", length);

    return 0;
}

int strlen(char *string)
{
    int length = 0;

    while (string[length] != '\0')
        length++;
    return length + 1;
}