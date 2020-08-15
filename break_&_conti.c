#include<stdio.h>
main()
{
    int i,n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("before of %d\n",i);
        if(i==5)
            break;
        printf("%d\n",i);
    }


}
