#include <stdio.h>
void main()
{
    int num1, num2, *ptr, *qtr;

    printf("\n\n-Maximum number between two integers-\n ");
    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);

    qtr =&num2 ;
    ptr =&num1 ;

    if(*ptr < *qtr)
    {
        printf("\nMaximum number is: %d",*qtr);
    }
    else
    {
       printf("\nMaximum number is: %d",*ptr);
    }
}
