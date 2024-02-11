//Write a Program to input any Number and count the number of digits using for loop.
#include <stdio.h>
int main()
{
    int a,i,count=0;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=a;i>0;i/=10)
        count++;
    // sum+=b;
    printf("%d\n",count);
    return 0;
}
