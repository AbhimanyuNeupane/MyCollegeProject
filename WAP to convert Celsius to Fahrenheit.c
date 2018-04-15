/*WAP to convert Celsius to Fahrenheit*/


#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius;
    printf("Enter a value to convert Celsius to Fahrenheit : ");
    scanf("%g",&celsius);
    celsius=(celsius*9/5)+32;
    printf("Value in Fahrenheit is %g",celsius);
    getch();
    return 0;


}
