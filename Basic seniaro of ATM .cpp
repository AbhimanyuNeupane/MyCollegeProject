//Senario of ATM
//Input pin from user and check whether it is valid or not and give the option to check and withdraw balance.
//Author : Abhimanyu Neupane.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
        int choice,choose,balance=100000,num,deposit,count=0;
        char withdraw,back;

    do
    {


        LOOP:system("cls");
        printf("Enter a pin : ");
        scanf("%d",&num);
        count++;



    }
    while((num!=1234) && (count<3));

        if(num==1234)
        {
            system("cls");


           LOP:
               system("cls");
            printf("****Welcome to Sunrise Bank****\n");
            printf("Press 1 to check balance\n");
            printf("Press 2 to withdraw balance\n");
            printf("Press 3 to deposit balance\n");
            printf("Press 4 to exit\n");
            printf("To enter pin again then press 5 : \n");
            printf("Enter your choice : ");
            scanf("%d",&choice);

        }


        else
        {
           printf("Invalid pin\n");
            printf("***Your card has been blocked***\n");
        }



switch(choice)
        {


        case 1:
            {
                system("cls");
                printf("\nYour balance is %d",balance);
                printf("\nDo you want to withdraw(Y/N) :");
                scanf("%s",&withdraw);
                if(withdraw == 'Y' || 'y')
                {
                    goto WITH;

                }
                else if(withdraw =='N' || 'n')
                {
                    goto LOP;
                }



            }

        case 2:
            {
                system("cls");
                WITH:

                printf("\nChoose 1 for 10,00");
                printf("\nChoose 2 for 20,000");
                printf("\nChoose 3 for 30,000");
                printf("\nChoose 4 to deposit");
                printf("\nChoose 5 to go back");
                printf("\nHow much money do you want to withdraw : ");
                scanf("%d",&choose);



                switch(choose)
                {


                    case 1:
                        {

                            if(choose==1)
                            {
                                 if(balance==0)
                                    {
                                        printf("\nYou don't have sufficient balance");
                                    }
                                    else
                                    {
                                        balance = (balance-10000);
                                        printf("\nYour amount Rs.10,000 has been successfully withdraw");
                                        printf("\nNow your balance is %d",balance);

                                    }

                            }
                            break;
                        }
                    case 2:
                        {

                             if(choose==2)
                            {
                                if(balance==0)
                                    {
                                        printf("\nYou don't have sufficient balance");
                                    }
                                else
                                    {
                                        balance = (balance-20000);
                                        printf("\nYour amount Rs.20,000 has been successfully withdraw");
                                        printf("\nNow your balance is %d",balance);
                                    }

                            }
                            break;
                        }

                    case 3:
                        {
                            if(choose==3)
                            {
                                if(balance==0)
                                {
                                    printf("\nYou don't have sufficient balance");
                                }
                            else
                            {
                                balance = (balance-30000);
                                printf("\nyour amount Rs.30,000 has been successfully withdraw ");
                                printf("\nNow your balance is %d",balance);
                            }
                             break;
                            }
                        }

                    case 4:
                        {
                           printf("\nHow much money do u want to deposit: ");
                           scanf("%d",&deposit);
                           deposit = balance + deposit;
                           balance =deposit;
                           printf("Amount %d is deposit",balance);




                        }
                    case 5:
                        {
                            goto LOP;
                        }



                }
                  printf("\nDo you want to go back to withdraw option or not(Y/N) : ");
                  scanf("%s",&back);
                  if(back == 'Y' || 'y')
                    {
                        goto WITH;
                    }
                    else
                    {
                        exit(0);
                    }


                break;
            }

        case 3:
            {
                printf("How much money do u want to deposit: ");
                scanf("%d",&deposit);
                deposit = balance + deposit;
                balance =deposit;
                printf("Amount %d is deposit",balance);
                printf("Now you balance is %d",balance+deposit);


            }
        case 4:
            {
              exit(0);
            }
        case 5:
            {
                goto LOOP;
            }

        }






getch();

}
