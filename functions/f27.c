//Write a program to input any number and check if it is perfect or not (factors’ sum using call by value with) using function call by value with return.
#include<stdio.h>
int check_perfect(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
           sum+=i; 
        }
    }
    return sum;
}
int main(){
    int n;
    printf(" enter a number : ");
    scanf("%d",&n);
    if(n==check_perfect(n)){
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
    return 0;
}