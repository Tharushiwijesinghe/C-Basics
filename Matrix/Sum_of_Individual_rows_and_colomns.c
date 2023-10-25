#include <stdio.h>
void main()
{
    int a[3][3],i,j,sr,sc;

    printf("Enter the your inputs:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
     printf("matrix is:\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {

        sr=sc=0;
        for(j=0; j<3; j++)
        {
            sr = sr + a[i][j];
            sc = sc + a[i][j];
        }
        printf("\n");


        printf("SR = %d, SC = %d\n",sr,sc);
    }
}
