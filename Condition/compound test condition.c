#include <stdio.h>

void main()
{
    int i ;
    int sum;

    sum=0;
    for (i=1;i<20&&sum<100;++i)
    {
        sum=sum+1;
        printf("%d %d\n",i,sum);
    }
}
