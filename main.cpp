/*WAP to input amount from user and print minimum number of note required from the amount
Date:May 17 2018
Author : Abhimanyu Neupane
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int amount,amount1000,amount500;
    printf("Enter a amount to find the required note : ");
    scanf("%d",&amount);

    if(amount>=1000)
    {
        amount=amount/1000;
        amount= amount%1000;
    }
    if (amount>=500)
    {
        amount = amount/500;
        amount500 = amount%500;
    }
    if (amount>=100)
    {
        amount = amount/100;
        amount = amount%100;
    }
    if (amount>=50)
    {
        amount = amount/50;
        amount = amount%50;
    }
    if (amount>=20)
    {
        amount = amount/20;
        amount = amount%20;
    }
    if (amount>=10)
    {
        amount = amount/10;
        amount = amount%10;
    }
    if (amount>=5)
    {
        amount = amount/5;
        amount = amount%5;
    }
    printf("The amount required is %d ",amount);
getch();
}
