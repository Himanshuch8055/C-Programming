#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);

    int b = 45;
    int *ptr1 = &b;
    printf("%d\n", b);
    printf("%d\n", *ptr1);
    printf("%d\n", &b);
    printf("%d\n", ptr1);
    printf("%d\n", &ptr1);
    printf("%x\n", ptr1);
    printf("%x\n", *ptr1);
    return 0;
}