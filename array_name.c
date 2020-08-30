#include<stdio.h>
int main()
{
    char *name[5][15]={};
    int i;
    printf("Enter your friend name\n");
    for(i=0;i<5;i++){
        gets((name+i));
    }
    printf("your name is \n");
    for(i=0;i<5;i++){
        printf("\n%s",*(name+i));
    }

    return 0;
}
