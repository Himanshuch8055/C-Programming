#include <stdio.h>

int main()
{
    int conversion, restart;
    float kilometers, miles, pound, inches, feet, centimeters, meters, kilogram;
restart:
    printf("1. Kilometers To Miles\n");
    printf("2. Inches To Feet\n");
    printf("3. Centimeters To Inches\n");
    printf("4. Pound To Kilogram\n");
    printf("5. Inches To Meters\n");
    printf("0. To exit\n");
    printf("Which type of Conversion do you want to do:- ");
    scanf("%d", &conversion);

    switch (conversion)
    {
    case 1:
        printf("Do you want to Kilometers into Miles:-\n so,\n Enter Kilometers:- ");
        scanf("%f", &kilometers);
        printf("Your Answer is:- \n");
        miles = (0.62137119 * kilometers);
        printf("%f Miles in %f Kilometers.\n", miles, kilometers);
        break;

    case 2:
        printf("Do you want to Inches into Feet:-\n so,\n Enter Inches:- ");
        scanf("%f", &inches);
        printf("Your Answer is:- \n");
        feet = (0.08333333 * inches);
        printf("%f Feet in %f Inches.\n", feet, inches);
        break;

    case 3:
        printf("Do you want to Centimeters into Inches:-\n so,\n Enter centimeters:- ");
        scanf("%f", &centimeters);
        printf("Your Answer is:- \n");
        inches = (0.39370079 * centimeters);
        printf("%f Inches in %f Centimeters.\n", inches, centimeters);
        break;

    case 4:
        printf("Do you want to Pound into Kilogram:-\n so,\n Enter Pound:- ");
        scanf("%f", &pound);
        printf("Your Answer is:- \n");
        kilogram = (0.45359237 * pound);
        printf("%f Kilogram in %f Pound.\n", kilogram, pound);
        break;

    case 5:
        printf("Do you want to Inches into Meters:-\n so,\n Enter Inches:- ");
        scanf("%f", &inches);
        printf("Your Answer is:- \n");
        meters = (0.0254 * inches);
        printf("%f Meters in %f Inches.\n", meters, inches);
        break;

    case 0:
        goto exit;

    default:
        printf("NO CASE MATCH ENTER RIGHT OPTION.\n");
        break;
    }
    int i;
    printf("Enter Any Number To Continue:-");
    scanf("%d", &i);
    goto restart;

exit:
    return 0;
}