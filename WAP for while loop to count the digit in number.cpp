//WAP for while loop to count the digit in number
//Author : Abhimanyu Neupane
//Date : 4 june 2018

#include <stdio.h>
#include <conio.h>
int main()
{
    int num,i=0;
    printf("Enter a number to count : ");
    scanf("%d",&num);
    while(num>0)
    {
       i++;
       num = num/10;
    }
    printf("Count is %d",i);
}
