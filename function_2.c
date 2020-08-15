#include<stdio.h>
void main()
{
    void bio(int,int);
    printf("enter your age and roll");
    scanf("%d %d",&age,&roll);
    bio();
}

void bio(int age,int roll)
{
    printf("%d\n%d\n",age,roll);
}

