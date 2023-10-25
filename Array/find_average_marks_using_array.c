#include <stdio.h>
void main()
{
     int marks[5],i;
     int sum = 0;
     int avg;

    for (i=0; i<5; i++)
    {
        scanf("%d",&marks[i]);

    }
      for (i=0; i<5; i++)
    {
          sum += marks[i];


    }
        avg = sum/5;

        printf("\n");
        printf("The average is %d", avg);
}
