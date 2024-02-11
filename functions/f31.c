//31. Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=33+73+13) or not using function call by value with return.
#include<stdio.h>
#include<math.h>
int check_arm(int x)
{
    int sum=0;int count=0;int pro;
    for(int i=x;i>=1;i=i/10)
    {
        count++;
    }
    for(int i=x;i>=1;i=i/10)
    {
        int digit;
        digit=i%10;
        pro=pow(digit,count);
        sum=sum+pro;
    }
    return sum;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(check_arm(n)==n)
    {
        printf("armstrong number ");
    }
    else
    {
        printf("not a armstrong number ");
    }
    return 0;
}