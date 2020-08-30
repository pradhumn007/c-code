#include<stdio.h>
int* fun(int*);
int main()
{
    int a[5]={1,2,3,4,5},j;
    int *f=fun(a);
    for(j=0;j<5;j++){
        printf("%d ",*(f+j));
    }

    return 0;
}
int* fun(int *p)
{
    int ptr[5];
    int i,j;
    for(i=0;i<5;i++)
        ptr[i]=*(p+i)+2;

    return ptr;
}
