#include <stdio.h>

int main()
{
    // int age;
    // for (age = 0; age <= 10; age++)
    // {
    //     printf("Enter your age: ");
    //     scanf("%d", &age);

    //     if (age > 10)
    //     {
    //         break;
    //     }
    // }

    int age;
    for (age = 0; age <= 10; age++)
    {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age > 10)
        {
            continue;
        }
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
    }

    return 0;
}