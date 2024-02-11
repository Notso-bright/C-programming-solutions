//Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n
#include<stdio.h>
int main()
{
    int n,d;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("enter the digit : ");
    scanf("%d",&d);
    int copy_n=n;
    int frequency =0;
    while(n)
    {
        int digit = n%10;
        if(d==digit){
            frequency++;
        }
        n/=10;
    }
    printf("the frequency of %d in %d is %d",d,copy_n,frequency);
    return 0;
}
