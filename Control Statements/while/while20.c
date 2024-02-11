//Write a program to input any number and check either it is power of 2 or not. (using while loop)
#include<stdio.h>//will be done afterwards....
int main()
{
    int n,i;
    printf("enter a number :");
    scanf("%d",&n);
    i=n;
    while(i>0){
       n=n%2; 
    }
    return 0;
}
