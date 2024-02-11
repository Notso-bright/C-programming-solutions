//Write a program to input any number and check whether it is positive or negative or zero using function call by value with return.
#include<stdio.h>
int check_int(int n)
{
    int a;
    if(a==0)
    {
        return 0;
    }
    else if(a>0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if( check_int(a)>0)
    {
        printf("%d is positive ",a);
    }
    else if( check_int(a)==0)
    {
        printf("%d is zero ",a);
    }
    else
    {
        printf("%d is negative ",a);
    }
    return 0;
}
