#include <stdio.h>
#include <math.h>

void main()
{
    int a,b,c;
    float area,s;

    printf("enter the values ");
    scanf("\n %d, %d ,%d",&a, &b ,&c);

    s=(a+b+c)/2;
    s=s*(s-a)*(s-b)*(s-c);

    area=sqrt(s);

    printf("area of the given triangle is:%f",area);
}

