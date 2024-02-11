//Write a program to input any number and check it is perfect or not(factors’ sum)(using while loop) 
#include<stdio.h>
int main()
{   int n;
    int sum=0;
    printf("enter a number :");
    scanf("%d",&n);
    int i=1;
    while(i<n)
    {
        if(n%i==0)
        {
          sum+=i;
        } 
        i++;
    }
    sum==n?printf("%d is a perfect number",n):printf("%d is not a perfect number",n);
    return 0;
}
