//Write a program to input any number ‘n’ and printf the sum of n natural numbers .(using while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter any natural number : ");
    scanf("%d",&n);
    printf("sum of n natural numbers is : ");
    int i=1,sum=0;
    while(i<=n)
    {  
         sum+=i;
        i++;
    }printf("%d",sum);
    return 0;
}
