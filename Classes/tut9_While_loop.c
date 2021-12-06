#include <stdio.h>

int main()
{
    int a = 0;
    while (a < 20)
    {
        printf("%d\n", a);
        a++;
    }

    // By user input

    int num, index = 0;
    printf("Enter the value: ");
    scanf("%d", &num);
    while (index < num)
    {
        printf("%d\n", index);
        index++;
    }

    return 0;
}