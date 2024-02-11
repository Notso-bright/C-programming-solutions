//Write a program to print fibonacci series upto n.(using while loop) 
#include<stdio.h>
int main()
{
    int n;
    printf("enter number upto which the fibonacci series is required :");
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
        if(c==n)
        {
        break;
        }
    }
    return 0;
}
