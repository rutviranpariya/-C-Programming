#include<stdio.h>
void main()
{
    int arr[25];
    int pc=0;
    int nc=0;
    int ec=0;
    int oc=0;
    printf("enter 25 interger\n");
    for(int i=0;i<25;i++)
    {
        printf("number %d:",i+1);
        scanf("%d",&arr[i]);
         if(arr[i] > 0) {
            pc++;
        } else if(arr[i] < 0) {
            nc++;
        }
         if(arr[i] % 2 == 0) {
            ec++;
        } else {
            oc++;
        }
    }printf("\n--- Analysis Result ---\n");
    printf("Total positive numbers: %d\n", pc);
    printf("Total negative numbers: %d\n", nc);
    printf("Total even numbers: %d\n", ec);
    printf("Total odd numbers: %d\n", oc);

}
