#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},j;
    fun(a);
    for(j=0;j<5;j++)
        printf("%d\n",a[j]);
    return 0;
}

int fun(int *p)
{
    int i;
    for(i=0;i<5;i++){
        *(p+i)=*(p+i)+2;
    }
    return 0;
}
