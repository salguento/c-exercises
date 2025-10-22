#include <stdio.h>
#include <stdlib.h>

#define BSIZE 1024
int main()
{
    FILE *fh;

    char buffer[BSIZE];
    double average, sum = 0;
    int total = 0;

    fh = fopen("file.txt", "r");
    if (fh == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, BSIZE, fh) != NULL)
    {
        sum += atof(buffer);
        total++;
    }

    average = sum / total;
    printf("average: %.2f\n", average);
    return 0;
}