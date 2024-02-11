//Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=3^3+7^3+1^3) or not using for loop.
#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0;int count=0;int pro;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=n;i>=1;i=i/10)
    {
        count++;
    }
    for(int i=n;i>=1;i=i/10)
    {
        int digit;
        digit=i%10;
        pro=pow(digit,count);
        sum=sum+pro;
    }
    //printf("%d\n",sum);
    //printf("%d\n",count);
    n==sum?printf("%d is an armstrong number\n",n):printf("%d is not an armstrong number\n",n);
return 0;
}