//Write a program to input any number and count the number of factors of that number.(using while loop) 
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
       if(n%i==0){
        j++;
       }
       i++;   
    }
    printf("%d",j);
    return 0;
}
