//write a program to input lower limit and upper limit and print the factorial of each number using call by value with/without(whatever you want) return.
#include<stdio.h>
void factorial(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        printf("the factorial of %d is : ",i);
        int facto=1;
        for(int j=1;j<=i;j++)
        {
            facto*=j;
        }
        printf("%d\n",facto);
    }
}
int main(int argc, char const *argv[])
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    factorial(ll,ul);
    return 0;
}
