#include <stdio.h>

void main()
{
   int y,w,dy,Yr,We,Dy,DYS;

   scanf("%d",&dy);

   Yr=(dy/365);
   We=(dy%365)/7;
   DYS=((dy%365)%7);

   printf("Years: %d\n",Yr);
   printf("Weeks: %d\n",We);
   printf("Days : %d\n",DYS);


}
