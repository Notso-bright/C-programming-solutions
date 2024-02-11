//Write a Program to input lower limit and upper limit and print all the perfect numbers in that range using function call by value with/without(whatever you want) return.
#include<stdio.h>
void no_of_factors(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        int sum = 0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            sum+=j;
        }
        if(sum==i){
            printf("%d is a perfect number \n",i);
        }

    }
}
int main(int argc, char const *argv[])
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    no_of_factors(ll,ul);
    return 0;
}
