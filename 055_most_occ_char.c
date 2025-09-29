#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_max_char(char *s);

int main()
{
    char s[] = "abcdefghabcdefghabccccdefgh";
    print_max_char(s);

    return 0;
}

void print_max_char(char *s)
{
    int length = strlen(s);
    char *unique = (char *)malloc(length + 1);
    int counted = 0;
    int max_count;
    char max_char;

    for (int i = 0; i < length; i++)
    {
        bool already_counted = false;
        for (int j = 0; j < counted; j++)
            if (s[i] == unique[j])
                already_counted = true;
        if (already_counted)
            continue;

        int count = 0;
        for (int j = 0; j < length; j++)
            if (s[i] == s[j])
                count++;
        unique[counted] = s[i];
        counted++;

        if (counted == 1)
        {
            max_count = count;
            max_char = s[i];
        }
        else if (count > max_count)
        {
            max_count = count;
            max_char = s[i];
        }
    }
    if (length > 0)
        printf("%c:%d\n", max_char, max_count);
    else
        printf("error: string has 0 length\n");
    free(unique);
}
