#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word);

int main(void)
{
    char s[] = "It is in this string once. It's not once anymore.";
    char w[] = "It";

    int result = word_count(s, w);

    printf("Result: %d\n", result);
    return 0;
}

int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int count = 0;

    for (int i = 0; i < slen - wlen + 1; i++)
    {
        bool word_found = true;
        for (int j = 0; j < wlen; j++)
        {
            if (word[j] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found)
            count++;
    }
    return count;
}