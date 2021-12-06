#include <stdio.h>

int main()
{
    // int a, b, line;
    // printf("Enter the Number: ");
    // scanf("%d", &line);

    // for (int a = 1; a < line; a++)
    // {
    //     for (int b = a; b < line; b++)
    //     {
    //         printf(" ");
    //     }

    //     for (int b = 1; b <= (2 * a - 1); b++)
    //     {
    //         printf("+");
    //     }
    //     printf("\n");
    // }

    int a, b;

    for (a = 1, b = 1; a < 10; a++, b++)
    {
        printf("%d%d\n", a, b);
    }

    return 0;
}