// // With Arguments and With return value
// #include<stdio.h>
// // int sum1(int a, int b);
// // int sum(int a, int b)
// // {
// //     return a + b;
// // }
// int main()
// {
//     int a, b, c;
//     // a = 9;
//     printf("Enter the value of A:- ");
//     scanf("%d", &a);
//     // b = 87;
//     printf("Enter the value of B:- ");
//     scanf("%d", &b);
//     // c = sum1(a, b);
//     printf("The sum of A and B:- %d \n", c);
//     // c = takenumber();
//     // printf("The number entered is %d \n", c);
//     return 0;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }

// // With Arguments and Without return value
#include <stdio.h>
void printstar()
{
    int n;
    printf("Enter the number:- ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar();
    return 0;
}

// // Without Arguments and With return value
// #include <stdio.h>

// int takenumber()
// {
//     int i;
//     printf("Enter a Number:- ");
//     scanf("%d", &i);
//     return i;
// }

// int main()
// {
//     int g;
//     g = takenumber();
//     printf("Your entered number is :- %d", g);
//     return 0;
// }

// Without Arguments and Without return value
// #include <stdio.h>
// #include <conio.h>
// void sum();
// // {
// //     int k;
// //     printf("Enter the Number:- ");
// //     scanf("%d", &k);
// // }
// int main()
// {
//     // int l;
//     // l = hello();
//     // printf("Your entered Number is:- %d", l);
//     sum();
//     return 0;
// }

// void sum()
// {
//     int a, b, c;
//     printf("Enter The Number:- ");
//     scanf("%d", &a);
//     printf("Enter The Number:- ");
//     scanf("%d", &b);
//     c = a + b;
//     printf("Sum of A and B is:- %d", c);
// }

// #include <stdio.h>
// #include <conio.h>

// void sum();

// int main()
// {
//     sum();
//     return 0;
// }

// void sum()
// {
//     int a, b, c;
//     printf("enter two numbers\n");
//     scanf("%d%d", &a, &b);
//     c = a + b;
//     printf("the sum of two numbers is\n%d", c);
// }

// #include<stdio.h>

// int main()
// {
//     printf("Hello world");

//     return 0;
// }