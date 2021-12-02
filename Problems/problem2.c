#include <stdio.h>

int main()
{
    int a, b, line;
    printf("Enter the number: ");
    scanf("%d", &line);

    for (a = 1; a < line; a++)
    {
        for (b = a; b < line; b++)
        {
            printf(" ");
        }

        for (b = 1; b <= (2 * a - 1); b++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}