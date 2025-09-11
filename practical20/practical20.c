#include <stdio.h>
int main ()
{
    int N,i,id;
    int sumGiven = 0, expectedSum, missingID;

    printf("Enter the total number of participants (N):");
    scanf("%d",&N);

    printf("Enter the %d participants IDs: \n",N-1);
    for(i=0; i<N-1; i++)
    {
        scanf("%d",&id);
        sumGiven += id ;
    }
    //Formula For sum of first N total numbers
    expectedSum = N* (N-1)/2 ;

    //Missing ID
    missingID = expectedSum - sumGiven;

    printf("the missing participant ID is %d\n", missingID);
    return 0;
}
