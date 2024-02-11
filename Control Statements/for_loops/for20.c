//Write a program to input any number and check whether it is palindrome or not (using for loop).
#include<stdio.h>
int main()
{
    int i,n;
    int digit,sum=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        digit=i%10;
        sum=((sum*10)+digit);
    } 
    if(sum==n){
        printf("%d is a palindrome number",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}
