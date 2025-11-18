#include <stdio.h>
#include <math.h>

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int isValid(float a, float b, float c)
{
    if (a + b > c && b + c > a && c + a > b)
        return 1;
    else
        return 0;
}

int main()
{
    float a, b, c;
    printf("Enter the lengths of the three sides of the garden:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (isValid(a, b, c))
    {
        printf("The given sides CAN form a valid triangular garden.\n");
        float ar = area(a, b, c);
        printf("Area of the triangular garden = %.2f square units\n", ar);
    }
    else
    {
        printf("The given side lengths CANNOT form a triangle.\n");
    }
    printf("this code is done by Rutvi Ranpariya_25ce100");

    return 0;
}
