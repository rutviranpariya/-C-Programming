#include<stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("enter the value of temperature in celcius");
    scanf("%f",&celcius);
    fahrenhiet=(celcius*9/5)+32;
    printf("the value of temperature in fahrenheit=%f",fahrenheit);
    return 0;
}
