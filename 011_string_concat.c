#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(void)
{
    char first[10] = "First";
    char second[10] = "Second";

    char *s = string_append(first, second);
    printf("s: %s\n", s);
    free(s);

    return 0;
}

char *string_append(char *s1, char *s2)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;

    char *s = calloc(size, sizeof(char));

    for (int i = 0; i < s1_length; i++)
    {
        s[i] = s1[i];
    }
    for (int i = 0; i < s2_length; i++)
    {
        s[s1_length + i] = s2[i];
    }
    s[size - 1] = '\0';

    return s;
}