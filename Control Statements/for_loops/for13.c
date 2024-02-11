//Write a program to input any number and check if it is perfect or not (factors’ sum)(using for loop).
#include <stdio.h>
int main()
{
    int i,a,sum=0;
    printf("enter a number : ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    sum==a?printf("%d is perfect\n",a):printf("%d is not perfect\n",a);
    // printf("%d\n",sum);
    return 0;
}
