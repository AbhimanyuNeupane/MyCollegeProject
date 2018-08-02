//WAP to find root of quadratic equation//
//Date : 8 May 2018//
//Author : Abhimanyu Neupane//

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a,b,c,d,root_1,root_2;
    printf("Enter a quadratic equation : ");
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b - 4*c);


    if (d>0)
    {
        printf("Root are real and unequal\n");
        root_1 = (-b + sqrt(d)/(2*a));
        root_2 = (-b + sqrt(d)/(2*a));
    }
    else if (d<0)
    {
        printf("Roots are imaginary");
    }
    else if(d = 0)
    {
        printf("Roots are real and equal");
    }

    printf("Roots of quadratic equation are %f",root_1,root_2);
    getch();
}
