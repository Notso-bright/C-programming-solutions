//Write a program to calculate x^y without using any library function.(using for loop) 
#include <stdio.h>
int main()
{
    int a,b,i,power;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        power*=a;
            
    }
    printf("%d power of %d is equal to:%d\n",a,b,power);
    return 0;
}
