//Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) using function call by value with return.
#include<stdio.h>
int check_strong(int x)
{
    int sum=0;
    for(int i=x;i>0;i/=10)
    {
        int digit=i%10;
        int fact=1;
        for(int j=2;j<=digit;j++)
        {
            fact*=j;
        }
        sum+=fact;
    }
    return sum;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(check_strong(n)==n)
    {
        printf("strong number ");
    }
    else
    {
        printf("not a strong number ");
    }
    return 0;
}