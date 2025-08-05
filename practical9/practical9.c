#include<stdio.h>
#include<conio.h>
int main()
{
    int amount;
    printf("enter the total amount");
    scanf("%d",&amount);
    if(amount<1000)
    {
        printf("no discount is applied\n");
        printf("you have to pay %d\n",amount);
    }
    else if (amount>=1000 && amount<5000)
    {

        printf("discount is applied=10%\n");
        printf("total amount you have to pay is %d\n",amount*10/100);




    }
    else if (amount>5000)
    {
        printf("discount is applied=20%\n");
        printf("total amount you have to pay is %d\n",amount*20/100);
    }
    else
    {
        printf("invalid data");
    }
    getch();
    return 0;
}
