/********************************************************************************************
Write a program that reads an integer entered by the user and displays it in octal (base 8).
The output should be displayed using five digits, even if fewer digits are sufficient
*********************************************************************************************/

#include <stdio.h>

int main()
{
    int decimal, digit_one, digit_two, digit_three, digit_four, digit_five;
    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &decimal);

    digit_five = decimal % 8;
    digit_four = (decimal / 8) % 8;
    digit_three = ((decimal / 8) / 8) % 8;                                  //1ST METHOD
    digit_two = (((decimal / 8) / 8) / 8) % 8;
    digit_one = ((((decimal / 8) / 8) / 8) / 8) % 8;

    printf("In octal, your number is %1d%1d%1d%1d%1d\n",
           digit_one, digit_two, digit_three, digit_four, digit_five);

   /* digit_five = decimal % 8; decimal /= 8;
    digit_four = decimal % 8; decimal /= 8;
    digit_three = decimal % 8; decimal /= 8;                                   //2ND METHOD
    digit_two = decimal % 8; decimal /= 8;
    digit_one = decimal % 8; decimal /= 8;
    printf("In octal, your number is %1d%1d%1d%1d%1d\n",
           digit_one, digit_two, digit_three, digit_four, digit_five);*/

    return 0;
}
