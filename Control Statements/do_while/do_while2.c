//Write a program to input any number and check whether it is palindrome or not(using do-while loop)
#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;int digit=0;
    printf("enter a number :");
    scanf("%d",&n);
    i=n;
    do{
        digit=i%10;
        sum=digit+sum*10;
        i=i/10; 
        
    }while(i>0);
    if(sum==n){
        printf("Given number is palindrome ");
    }
    else{
        printf("Given number is not palindrome ");
    }
    return 0;
}
