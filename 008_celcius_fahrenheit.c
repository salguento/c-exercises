#include <stdio.h>

double c_to_f(double c);

int main(void)
{
    double temp_c = 0;
    double step_c = 0;
    double final_c = 0;
    double temp_f = 0;

    printf("Enter intial C temp: ");
    scanf("%lf", &temp_c);
    printf("Enter temperature steps: ");
    scanf("%lf", &step_c);
    printf("Enter final temperature: ");
    scanf("%lf", &final_c);

    printf("C              F\n");
    printf("****************\n");
    for (temp_c; temp_c <= final_c; temp_c += step_c)
    {
        temp_f = c_to_f(temp_c);
        printf("%-8.2f %8.2f\n", temp_c, temp_f);
    }

    return 0;
}

double c_to_f(double c)
{
    return c * 1.8 + 32;
}
