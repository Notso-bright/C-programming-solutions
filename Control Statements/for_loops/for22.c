//write a program to input lower limit and upper limit and print the factorial of each number.(using for loop) 
#include <stdio.h>     //not correct
int main()
{
    int ul,ll;
    unsigned long long int factorial=1;
    printf("enter the upper and lower limits :");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++)
    {
        for(int n=1;n<=i;n++)
        {
            factorial*=n;
        }
        printf("the factorial of %d is :\n",i);
         printf("%llu\n",factorial);
    }
    return 0;
}
