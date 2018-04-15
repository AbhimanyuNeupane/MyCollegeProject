/*WAP to find the ASCII value of a character*/


#include <stdio.h>
#include <conio.h>
int main()
{
    char letter;
    printf("\nEnter a letter to know its ASCII value : ");
    scanf("%c",&letter);
    printf("ASCII value of %c is %d",letter,letter);
    getch();
    return 0;
}
