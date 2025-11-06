#include<stdio.h>
#include<conio.h>
int main()
{
    float marks;
    printf("enter your marks ");
    scanf("%f",&marks);
    if(marks>=90)
    {
        printf("Grade A\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade B\n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade C\n");
    }
    else if(marks>=60 && marks<70)
    {
    printf("Grade D\n");
    }
    else if(marks<60)
    {
     printf("Grade F \n");
    }

    else
    {
        printf("invalid input,enter correct input");
    }

    getch();
    printf("Done by Rutvi Ranpariya,ID-25ce100");
    return 0;
}


