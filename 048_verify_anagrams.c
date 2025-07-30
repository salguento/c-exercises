#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool check_anagram(char *w1, char *w2);

int main()
{
    char w1[] = "Listen";
    char w2[] = "Silent";

    if (check_anagram(w1, w2))
        printf("Anagrams!\n");
    else
        printf("Not anagrams!\n");

    return 0;
}

bool check_anagram(char *w1, char *w2)
{
    int len1 = strlen(w1);
    int len2 = strlen(w2);

    int w1lc[26] = {0};
    int w2lc[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        int lower = tolower(w1[i]);
        w1lc[lower - 'a']++;
    }
    for (int i = 0; i < len2; i++)
    {
        int lower = tolower(w2[i]);
        w2lc[lower - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (w1lc[i] != w2lc[i])
            return false;
    }

    return true;
}