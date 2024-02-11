//print fibonacci series upto n times
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;int a=0,b=1,c=1;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d ",c);
    for(int i=1;i<=n/2;i++)
    {
        a=a+b;
        b=a+b;
        printf("%d %d ",a,b);
    }
    
    return 0;
}
