#include <stdio.h>
#define PI 3.14
/* this is a multiline comment


this is ignored by my compiler

*/
int main()
{
    // PI = 7.33; //cannot do this since PI is a constant
    int a = 8;
    const float b = 7.333;
    // b = 7.22; //cannot do this since b is a constant

    int d = 45;
    float f = 1.22;
    char c = d;

    printf("\n The value of integer is %d", d);
    printf("The value of float is %f", f);
    printf("\n The value of character is %c", c);
    // printf("\n The value of string is %s", s); 

    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
    // printf("%18.4f this",b);


    // printf("\n C programming \m/ ");
    printf("\n This is my C program\n");
    printf("\n Welcome to \"The C Programming tutorial\"");
    printf("\n Welcome to \'C programming series \'") ;
    printf("Hello \t Viewers");
    printf("Hello Viewers\n");
    printf("\v Welcome to C Programming\n");
    printf("\v Welcome to C Programming\n");
    printf("\v Welcome to C Programming\n");
    printf("\v Welcome to C Programming\n");


    return 0;
}
