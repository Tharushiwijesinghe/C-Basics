#include <stdio.h>
void main()
{
    int a,b,c,max;

    printf("enter the values of three integers:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);


    printf("the largest value is %d",max);

}
