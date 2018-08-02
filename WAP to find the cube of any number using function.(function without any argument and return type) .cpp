#include <stdio.h>
#include <conio.h>


void cube()
{
    int num,cube;
    printf("Enter a number : ");
    scanf("%d",&num);
    cube = num*num*num;
    printf("Cube of number is %d",cube);
}
main()
{
    cube();
}
