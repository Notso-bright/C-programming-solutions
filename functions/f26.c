//Write a program to input any number and the factors of that number using call by value without return.
#include<stdio.h>
void print_odd(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main(){
    int n;
    printf(" enter a number : ");
    scanf("%d",&n);
    print_odd(n);
    return 0;
}