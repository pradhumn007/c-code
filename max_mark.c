#include<stdio.h>
int main()
{   int size=0;
    int i,max=0;
    printf("How many student marks\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter student marks\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    printf("max=%d",max);

    return 0;

}
