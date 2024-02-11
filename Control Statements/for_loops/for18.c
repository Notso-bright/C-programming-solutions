//Write a program to print fibonacci series up to nth term.(using for loop) 
#include <stdio.h>
int main()
{
    int n;
    printf("enter the nth term upto which the fibonacci series is required: ");
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d\t %d\t",a,b);
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}
