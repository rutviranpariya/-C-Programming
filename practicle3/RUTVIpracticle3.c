#include<stdio.h>
int main()
{
float w,h,BMI;
printf("enter your height in meters");
scanf("%f",&h);
printf("enter your weight in kilograms");
scanf("%f",&w);
if(w>0&&h>0)
{
BMI=w/(h*h);
printf("your bmi is=%f",BMI);
if(BMI <18.5)
{
    printf("you are underweight");
}
else if(BMI >18.5&& BMI<24.5)
{
    printf("you are fit");
}
else
{
    printf("you are overweight");
}
}
else
{
    printf("your input is invalid");
    return 0;
}



}
