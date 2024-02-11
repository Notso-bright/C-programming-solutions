//Write a program to print fibonacci series up to n.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number upto which the fibonacci series is required: ");
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        if(c==n)
    break; 
    }
   
    return 0;
}
