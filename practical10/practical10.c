#include<stdio.h>
int main()
{   int items,total;
    printf("Welcome to foodies restaurant");
     printf("our menu includes following items");
     printf("1.Burger=150/-\n");
     printf("2.Pizza=200/-\n");
     printf("3.Pasta=120/-\n");
     printf("4.Sandwich=100/-\n");
     printf("5.Frenchfries=80/-\n");

     for(int i=1;;i++)
     {printf("please select your order\n");

     printf("enter 0 if your order is completed");
     scanf("%d",&items);

     if(items<0||items>5)
     {
         printf("invalid input\n");
     }
     if(items==0)
     {
         break;
     }



     switch(items)
     {
   case 1:
    printf("\nBurger added - 150/-");
    total+=150;
    break;

   case 2:
    printf("\npizza added -200/-");
    total+=200;
    break;

   case 3:
    printf("\npasta added -120/-");
    total+=120;
    break;

     case 4:
    printf("\nsandwich added -100/-");
    total+=100;
    break;

     case 5:
    printf("\nfrenchfries added -80/-");
    total+=80;
    break;


     }
     }
     printf("\ntotal bill=%d",total);
     printf("\nThank you visit again");
     return 0;



}



