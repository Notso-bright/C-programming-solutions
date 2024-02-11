//Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) or not using for loop.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=n;i>0;i/=10)
    {
        int digit=i%10;
        int fact=1;
        for(int j=2;j<=digit;j++)
        {
            fact*=j;
        }
        sum+=fact;
    }
    printf("%d\n",sum);
    sum==n?printf("Yes\n"):printf("No\n");
    return 0;
}
