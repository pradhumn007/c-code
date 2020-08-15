#include<stdio.h>
void main()
{
    int a[6]={23, 45, 76, 72, 56, 84};
    int i;
    //original list
    for(i=0; i<6; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //reverse list
    for(i=5; i>=0; i--){
        printf("%d ",a[i]);
    }
}
