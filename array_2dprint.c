#include<stdio.h>
int main()
{
    int a[2][5];
    int i,j;
    printf("Enter fibe element");
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
