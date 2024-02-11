//Write a program to input any number and print the factorial of that number(using while loop) 
#include<stdio.h>
 int main()
{
    int n;
    printf("enter any natural number : ");
    scanf("%d",&n);
    printf("factorial of n natural numbers is : ");
    int i=1,factorial=1;
    while(i<=n)
    {  
        factorial*=i;
        i++;
    }printf("%d\n",factorial);
    return 0;
}