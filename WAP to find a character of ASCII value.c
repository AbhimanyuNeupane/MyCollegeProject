/*WAP to find a character of ASCII value*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter a number to know its ASCII character :" );
    scanf("%d",&number);
    printf("ASCII character of %d is %c",number,number);
    getch();
    return 0;
}
