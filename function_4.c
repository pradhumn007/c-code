#include<stdio.h>
void main()
{
 int x,y,z=1,i;
 printf("enter the number and power\n");
 scanf("%d %d",&x,&y);
 for(i=1;i<=y;i++)
    z=z*x;
 printf("result is %d \n",z);
}


