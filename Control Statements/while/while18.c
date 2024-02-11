//Write a program to input any number and check whether it is palindrome or not(using while loop)
#include<stdio.h>
int main()
{
    int n,i,a;
    printf("enter a number : ");
    scanf("%d",&n);
    i=n;
    int sum=0;
    while(i>0)
    {
        int a=i%10;
        sum=sum*10+a;
        i/=10;
    }
    if(sum==n){
        printf("%d is a palindrome number\n",n);
    }
    else{
        printf("%d is not a palindrome number\n",n);
    }
    return 0;
}
