#include <stdio.h>

int main()
{
    //     // One dimensional array
    int marks[10], sum = 0;
    printf("Enter marks of 10 students : \n\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("Marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    int average = sum / 10;
    printf("\nThe average marks of 10 students are %d\n\n", average);

    // Two dimensional array
    int Matrice[3][3];
    printf("This Program will print no. from 1-9 in matrice form : \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrice[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n So that's the matrice form of no from 1-9");

    return 0;
}
