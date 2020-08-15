#include<stdio.h>
void main()
{
    int num=0,sum=0,temp=0;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;

    }
    printf("%d",sum);
}
