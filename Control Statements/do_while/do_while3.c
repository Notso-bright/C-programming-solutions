//Write a program to input any number and check it is strong number or not.(using do-while) 
#include<stdio.h>
int main()
{
    int n,i;
    int j=1;
    int sum=0;
    int product =1;
    printf("enter a number :");
    scanf("%d",&n);
    i=n;
    do
    {
        int digit = i%10;
        do
        {
            product*=j;
            j++;
        }
        while(j<=digit);
        i=i/10;
        sum+=product;
    }
    while(i>0);
    printf("%d",sum);
    return 0;
}
