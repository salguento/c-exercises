#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_occ(char *s);

int main()
{
    char s[] = "abcdefghijklmnopabcdefabcab";
    print_occ(s);
    return 0;
}

void print_occ(char *s)
{
    int length = strlen(s);
    // char unique[length];   VLA - Not supported in all C compilers (e.g., MSVC)
    char unique[256];

    int counted = 0;
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

        printf("%c - %d\n", s[i], count);
        unique[counted] = s[i];
        counted++;
    }
}