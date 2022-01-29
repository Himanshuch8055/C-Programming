#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'H', 'i', 'm', 'a', 'n', 's', 'h', 'u', '\0'};
    // char str[] = "Himanshu chauhan"; // NULL character
    char str[50];
    printf("Enter the String: ");
    // scanf("%s", &str); // Whene using scanf as input its can't input space character.
    gets(str);
    printf("-----------Print String Using Function.----------------\n");
    printstr(str);
    printf("-----------Print String Using Puts.--------------------\n");
    puts(str);
    printf("-----------Print String Using Simple Printf.-----------\n");
    printf("%s", str);
    return 0;
}