//Write a program to print fibonacci series up to the nth term using call by value without return.
#include<stdio.h>
void fibonacci(int x)
{
    int a,b;
    a=b=1;
    printf("%d %d",a,b);
    for(int i=1;i<x/2;i++)
    {
        b=b+a;
        a=a+b;
        printf(" %d %d",b,a);
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
}