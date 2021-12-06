#include <stdio.h>

int main()
{
    // label:
    //     printf("We are inside label:\n");
    //     goto end;

    //     printf("Hello world\n");
    //     goto label;

    // end:
    //     printf("We are at end:");

    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);

        for (int j = 0; j < 10; j++)
        {
            printf("Enter the num:\n Enter 0 to exit: ");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
        }
    }

end:
    return 0;
}