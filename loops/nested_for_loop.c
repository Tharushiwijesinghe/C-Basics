#include <stdio.h>
void main()
{
    int arr[10][10];
    int i,j;

    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
          printf(" ");
        }
         for(j=0; j<6; j++) {
            printf("*");
         }
        printf("\n");
    }
    for(int i=0; i<5; i++)
    {
        for (int j=4; j>i; j--){
            printf(" ");
        }
        for (j=0; j<6; j++){
            printf("*");
        }
        printf("\n");
    }
}
