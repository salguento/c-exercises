#include <stdio.h>
#include <string.h>

int convert(char *string);

int main(void)
{
    char s1[] = "10101";
    int v1 = convert(s1);
    printf("10101 to decimal = %d\n", v1);

    char s2[] = "11111";
    int v2 = convert(s2);
    printf("11111 to decimal = %d\n", v2);

    char s3[] = "10000000";
    int v3 = convert(s3);
    printf("10000000 to decimal = %d\n", v3);

    return 0;
}

int convert(char *string)
{
    int slen = strlen(string);
    int total = 0;
    int decval = 1;

    for (int i = (slen - 1); i >= 0; i--)
    {
        if (string[i] == '1')
            total += decval;
        decval *= 2;
    }
    return total;
}