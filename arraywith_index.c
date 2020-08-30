#include<stdio.h>
int main()
{
    int i, a[5]={};
    printf("enter 5 number\n");
    for(i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;++i){
        printf("number of index a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
