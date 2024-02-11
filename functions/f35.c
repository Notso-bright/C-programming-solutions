//write a program to input lower limit and upper limit and print the multiplication table of each number using call by value with/without(whatever you want) return. 
#include<stdio.h>
void multi_table(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        printf("the multiplication table of %d is : \n",i);
        for(int j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
}
int main(int argc, char const *argv[])
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    multi_table(ll,ul);
    return 0;
}
