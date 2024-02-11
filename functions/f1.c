//Write a program to input two numbers and print the sum, difference, multiplication, division of those numbers using call by value with return. (use different functions for different operation)
#include<stdio.h>
int sum(int x,int y)
{
    return x+y;
}

int difference(int x,int y)
{
    return x-y;
}
int product(int x,int y)
{
    return x*y;
}
int division(int x,int y)
{
    return x/y;
}
int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is %d\n",a,b,sum(a,b)); 
    printf("difference of %d and %d is %d\n",a,b,difference(a,b));
    printf("product of %d and %d is %d\n",a,b,product(a,b));
    printf("division of %d and %d is %d\n",a,b,division(a,b));                                                                                                                                                                                                                                
    return 0;
}
