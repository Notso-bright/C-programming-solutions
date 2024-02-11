//Write a program to input any number and check it is prime or not.(using while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=1;
    int j=0;
    while(i<=n)
    {
       if(n%i==0)
        {
        j=j+1;
        }
       i++;
    } 
    j==2?printf("%d is a prime number",n):printf("%d is not a prime number",n);
    return 0;
}
