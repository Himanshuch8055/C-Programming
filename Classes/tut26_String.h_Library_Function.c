#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Himanshu";
    char str2[] = "Chauhna";
    char str3[50];

    // strcpy & strcat
    // strcpy(str3, strcat(str1, str2));
    strcpy(str3, str1);
    puts(str3);
    strcpy(str3, str2);
    puts(str3);

    // strlen
    printf("The length of str1 is: %d\n", strlen(str1));
    printf("The length of str2 is: %d\n", strlen(str2));

    // strrev
    printf("The reversed string of str1 is: ");
    puts(strrev(str1));
    printf("The reversed string of str2 is: ");
    puts(strrev(str2));

    // strcat
    strcat(str1, str2);
    puts(str1);
    strcat(str2, str1);
    puts(str2);

    // strcmp
    printf("The strcmp for str1 and str2 returend: %d\n ", strcmp(str1, str2));
    // Other Negitve value returend
    char str4[] = "Himanshu"; // ASCII Value of 'H' is lower than 'a' SO its return negitive value
    char str5[] = "abhishek"; // ASCII Value
    printf("The strcmp for str4 and str5 returend: %d\n ", strcmp(str4, str5));

    return 0;
}