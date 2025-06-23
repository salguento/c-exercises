#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice_roll(int n);

int main(void)
{
    int dice = 0;
    printf("How many dice rolls: ");
    scanf("%d", &dice);
    dice_roll(dice);
    return 0;
}

int dice_roll(int n)
{
    srand(time(NULL));

    int roll = 0;
    for (int i = 1; i <= n; i++)
    {
        roll = rand() % 6 + 1;
        printf("Dice %d: %d\n", i, roll);
    }
    return 0;
}