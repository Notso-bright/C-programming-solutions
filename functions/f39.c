//Write a program to input lower limit and upper limit and print all the prime numbers in that range using function call by value with/without(whatever you want) return.
#include<stdio.h>
void print_prime(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        int count =0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            printf("%d is a prime number\n",i);
        }
        /*else
        {
            printf("%d is not a prime number\n",i);
        }*/
    }
}
int main()
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    print_prime(ll,ul);
    return 0;
}
