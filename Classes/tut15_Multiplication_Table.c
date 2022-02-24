#include <stdio.h>

int main()
{
    printf("-----Multiplication Table Printer-----\n");
    int num;
    printf("Enter the Number:- ");
    scanf("%d", &num);
    printf("Multiplication Table of %d is as following:- \n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}