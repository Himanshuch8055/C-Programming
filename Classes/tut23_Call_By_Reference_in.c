#include <stdio.h>

// void changevalue(int* a)
void changevalue(int *address)
{
    // *a =123;
    *address = 123;
}

int main()
{
    int a = 23;
    printf("The value of a now is:- %d\n", a);
    changevalue(&a);
    printf("The value of a now is:- %d\n", a);

    return 0;
}

// Given two numbers a and b, add them then subtract them to a and b using call by reference.

// #include <stdio.h>

// void sumsub(int *address1, int *address2)
// {
//     int temp;
//     temp = *address1;
//     *address1 = *address1 + *address2;
//     *address2 = temp - *address2;
// }

// int main()
// {
//     int a = 4;
//     int b = 3;
//     printf("The value of a now is:- %d\n", a);
//     printf("The value of b now is:- %d\n", b);
//     sumsub(&a, &b);
//     printf("The value of a now is:- %d\n", a);
//     printf("The value of b now is:- %d\n", b);

//     return 0;
// }