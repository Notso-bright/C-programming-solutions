//Write a program to print fibonacci series up to n using call by value without return. 
#include<stdio.h>
void fibonacci(int x)
{
    int a,b;
    a=b=1;
    printf("%d %d ",a,b);
    for(int i=1;i<x;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        if(c==x)
    break; 
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
}