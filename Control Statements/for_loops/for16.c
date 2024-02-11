//Write a program to input any number and check it is prime or not.(using for loop)
#include <stdio.h>
int main()
{
    int i,a,sum=0;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            sum++; 
        }
    }
    sum==2?printf("%d is a prime number\n",a):printf("%d is not a prime number\n",a);
    printf("%d",sum);
    return 0;
}
