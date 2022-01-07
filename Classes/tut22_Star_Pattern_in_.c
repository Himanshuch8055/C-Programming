// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("How many line of triangle do you print:- ");
//     scanf("%d", &a);
//     printf("Choose '0' for triangular star pattern:-\nChoose '1' for Reversed triangular star pattern:-\n");
//     int b;
//     printf("Enter what you choose:");
//     scanf("%d", &b);

//     switch (b)
//     {
//     case 0:

//         for (int i = 0; i < a + 1; i++)
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }

//         break;

//     case 1:

//         for (int i = 0; i < a; i++)
//         {
//             for (int j = a; j > i; j--)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         break;

//     default:
//         printf("NO CASE MATCH:");
//         break;
//     }

//     return 0;
// }

#include <stdio.h>
int printstar(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
int reverseprintstar(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
int main()
{
    int rows, num;
    printf("Choose '0' for triangular star pattern:-\nChoose '1' for Reversed triangular star pattern:-\n");
    scanf("%d", &num);
    printf("How many rows do you want: ");
    scanf("%d", &rows);
    switch (num)
    {
    case 0:
        printstar(rows);
        break;

    case 1:
        reverseprintstar(rows);
        break;
    default:
        printf("NO CASE MATCH.");
        break;
    }

    return 0;
}