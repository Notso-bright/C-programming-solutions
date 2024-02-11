//write a program to input lower limit and upper limit and print the number of factors of each number using call by value with/without(whatever you want) return. 
#include<stdio.h>
void no_of_factors(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        printf("the no. of factors of %d is : \n",i);
        int count =0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        printf("%d\n",count);
    }
}
int main()
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    no_of_factors(ll,ul);
    return 0;
}
