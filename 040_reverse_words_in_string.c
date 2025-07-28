#include <stdio.h>
#include <string.h>

void reverse_words(char *s);

int main()
{
    char s[] = "This is the way.";
    printf("%s\n", s);

    reverse_words(s);

    printf("%s\n", s);
    return 0;
}

void reverse_words(char *s)
{
    int len = strlen(s);
    int i = 0, j = 0;
    char temp[100];

    for (i = 0; i < len; i++)
    {
        for (j = 0; i < len; j++, i++)
        {
            if (s[i] == ' ' || s[i] == '.')
                break;
            temp[j] = s[i];
        }

        while (j > 0)
        {
            j--;
            s[i - j - 1] = temp[j];
        }
    }
}