#include<stdio.h>
int main()
{
    char s[20]={};
    printf("Enter a palindrom");
    gets(s);
    int i;
    int j=strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]){
            printf("string not is palindrom");
            exit(0);
        }
        i++,j--;
    }
    printf("string  are palindrom");
    return 0;
}
