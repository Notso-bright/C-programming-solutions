//Write a program to input any number and check whether it is palindrome or not using call by value with returwhat the hell is go
#include<stdio.h>
int check_palindrome(int x)
{
    int reverse=0;
    for(int i=x;i>0;i/=10)
    {
        int digit;
        digit =i%10;
        reverse=(reverse+digit)*10;
    }
    reverse=reverse/10;
    return reverse;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(check_palindrome(n)==n)
    {
        printf("%d is palindrome\n",n);
    }
    else{
        printf("%d is not a palindrome\n",n);
    }
    return 0;
}
