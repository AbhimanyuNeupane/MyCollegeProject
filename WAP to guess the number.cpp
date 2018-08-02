//WAP to guess the number


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i=0,num,count=0;
    srand(time(NULL));
    i = rand()%10+1;
    printf("%d",i);
    do
    {

        printf("\nEnter your guess : ");
        scanf("%d",&num);
        count++;
        if (i>num)
        {
            printf("Your guess is low");
        }
        else if(i<num)
        {
            printf("Your guess is high");
        }
    }
        while((i!=num) && (count<3));
        if(count<3)
        {
            printf("\nCongratulation your guess is correct");
        }

        else if(i>num)
            {
                printf("\nYou are out of game");
            }



}
