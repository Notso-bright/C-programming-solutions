//Write a program to input any number and find the sum of the digits of that number.(using do-while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=n,sum=0;
    do{
        int digit=i%10;
        sum=sum+digit;
        i=i/10;
    }
    while(i>0);
    printf("the sum of all the digits is %d",sum);
    return 0;
}
