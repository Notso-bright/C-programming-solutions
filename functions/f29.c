//Write a program to input any number and count the number of factors of that number using call by value with return.
#include<stdio.h>
int count_num(int x)
{
    int count =0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("the number of factors of %d is %d",n,count_num(n));
    return 0;
}