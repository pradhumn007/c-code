#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];
    int i;
    printf("enter your first name");
    gets(s);

    //int length = strlen(s);
    //printf("length is = %d\n",length);

    for(i=0;s[i]!='\0';i++){}
    printf("length = %d\n",i);

    return 0;
}
