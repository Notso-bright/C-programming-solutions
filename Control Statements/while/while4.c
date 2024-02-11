//Write a program to input any number & print 20 numbers in descending order from that number.(using while loop)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a naturl number : ");
    scanf("%d",&n);
    int j=n;
    printf("the first '20' numbers in descending order : ");
    while(j>=(n-20))
    {
        printf("%d\n",j);
        j--;
    }printf("\n");
return 0;
}