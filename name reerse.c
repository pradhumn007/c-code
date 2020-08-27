#include<stdio.h>
int main()
{
    char a[10],temp;
    int i=0,j=0;
    printf("Enter your name");
    gets(a);
    for(i=0;a[i+1]!='\0';i++){
        j++;
    }
    i=0;
    for(;i<j;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }
    printf("%s\n",a);



    return 0;
}
