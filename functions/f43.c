//Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n using function call by value with return.
#include<stdio.h>
void check_frequency(int x,int y)
{
    int copy_n=x;
    int frequency =0;
    while(x)
    {
        int digit = x%10;
        if(y==digit){
            frequency++;
        }
        x/=10;
    }
    printf("the frequency of %d in %d is %d\n",y,copy_n,frequency);
}
int main()
{
    int ll,ul;
    printf("enter a number and a digit whose frequeny is needed : ");
    scanf("%d%d",&ll,&ul);
    check_frequency(ll,ul);
    return 0;
}
