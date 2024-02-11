//Write a program to input lower limit and upper limit and print all the strong numbers in that range using function call by value with/without(whatever you want) return.
#include<stdio.h>
void print_strong(int x,int y)
{
    for(int a=x;a<=y;a++)
    {
       int sum=0;
        for(int i=a;i>=1;i/=10)
        {
            int digit=i%10;
            int fac=1;
            for(int j=1;j<=digit;j++)
            {
                fac*=j;
            }
            sum+=fac;
        }
        if(a==sum)
        {
            printf("%d is a strong number\n",a);
        }

    }
}
int main()
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    print_strong(ll,ul);
    return 0;
}
