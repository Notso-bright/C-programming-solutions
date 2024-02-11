//Write a program to input any number and print the multiplication table of that number.(using while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf(" %d * %d = %d \n",n,i,n*i);
        i++;
    }
    return 0;
}
