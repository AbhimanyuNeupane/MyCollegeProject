#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c,A,s;
    printf("Enter three no : ");
    scanf("%d %d %d",&a,&b,&c);

    s=(a+b+c)/2;
    A=sqrt (s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is %d",A);
    getch();
