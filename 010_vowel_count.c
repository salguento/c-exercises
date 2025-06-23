#include <stdio.h>
#include <string.h>

int vowel_count(char string[]);
int main(void)
{
    char s1[] = "It's a wonderful life!";
    int s1count = vowel_count(s1);

    printf("Vowel count: %d\n", s1count);
    return 0;
}

int vowel_count(char string[])
{
    int count = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        switch (toupper(string[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        };
    }
    return count;
}