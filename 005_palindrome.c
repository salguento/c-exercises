#include <stdio.h>
#include <string.h>

int is_palindrome(char string[]);

int main(void)
{
    char string1[] = "abcdefg";
    char string2[] = "abcdcba";

    is_palindrome(string1);
    is_palindrome(string2);
        
    return 0;
}

int is_palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int length = strlen(string);
    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            printf("%s - is not a palindrome.\n", string);
            return 0;
        }
    }
    printf("%s - is a palindrome.\n", string);
    return 0;
}