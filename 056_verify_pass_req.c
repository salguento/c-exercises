#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool verify_password(char *p);

// at least 8 characters long
// at least 1 uppercase letter
// at least 1 lowercase letter
// at least 1 digit
// at least 1 symbol

int main()
{
    char p[] = "Ax5@abcdefgh";

    bool result = verify_password(p);
    if (result)
        printf("Valid password!\n");
    else
        printf("Invalid password!\n");
    return 0;
}

bool verify_password(char *p)
{
    int length = strlen(p);
    if (length < 8)
        return false;

    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_symbol = false;

    for (int i = 0; i < length; i++)
    {
        if (isupper(p[i]))
            has_upper = true;
        if (islower(p[i]))
            has_lower = true;
        if (isdigit(p[i]))
            has_digit = true;
        if (ispunct(p[i]))
            has_symbol = true;
    }

    if (!has_upper)
        return false;
    if (!has_lower)
        return false;
    if (!has_digit)
        return false;
    if (!has_symbol)
        return false;
    return true;
}