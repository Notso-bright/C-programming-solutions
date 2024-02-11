//write a program to input lower limit and upper limit and print the factors of each number using call by value with/without(whatever you want) return. 
#include<stdio.h>
void factors(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        printf("the factors of %d is : \n",i);

        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            printf("%d\n",j);
        }
    }
}
int main()
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    factors(ll,ul);
    return 0;
}
