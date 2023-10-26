#include <stdio.h>

void main()
{
    int marks;

    printf("Enter your marks for paper:");
    scanf("%d",&marks);

    if(marks>=35)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }

    printf("keep it up\n");
}
