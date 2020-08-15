#include<stdio.h>
void main()
{
    int get_marks();
    int marks = get_marks();
    printf("marks=%d\n",marks);
}

int get_marks()
{
    int marks=0;
    printf("enter your marks\n");
    scanf("%d",&marks);
    return marks;

}
