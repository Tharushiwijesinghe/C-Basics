#include <stdio.h>
void main()
{
    int firstnum, secondnum, *ptr, *qtr, sum;

    printf("\n\n pointer : add two numbers:\n");

    printf("\nInput the first number:");
    scanf("%d",&firstnum);
    printf("\nInput the second number:");
    scanf("%d",&secondnum);

    ptr = &firstnum;
    qtr = &secondnum;

    sum = *ptr + *qtr;

    printf("\nThe sum of entered numbers is: %d",sum);
}
