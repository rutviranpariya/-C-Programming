#include<stdio.h>
#define ticket 100
int main()
{

    int age;
    printf("enter your age");
    scanf("%d",&age);

    if (age<12)
    {
        printf("you are eligible for free entry");
    }
    else
    {
        printf("you have to pay entry fee per person=%d\n",ticket);
        int adults,entryfee;
        printf("enter the number of adults");
        scanf("%d",&adults);
        entryfee=ticket*adults;
        printf("total amount you have to pay=%d",entryfee);



    }
    return 0;
}
