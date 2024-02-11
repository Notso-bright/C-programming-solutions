//Write a program to print fibonacci series upto nth term.(using while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the nth number of terms for the fibonacci series :");
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d\t%d\t",a,b);
    int i=2;
    while(i<=n){
        int c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}
