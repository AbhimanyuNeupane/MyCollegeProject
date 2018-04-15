/*WAP to test relational operator*/


#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("\n%d>%d is %d",a,b,a>b);
    printf("\n%d==%d is %d",a,b,a==b);
    printf("\n%d>=%d is %d",a,b,a>=b);
    printf("\n%d<%d is %d",a,b,a<b);
    printf("\n%d<=%d is %d",a,b,a<=b);
    printf("\n%d!=%d is %d",a,b,a!=b);
    getch();
    return 0;


}
