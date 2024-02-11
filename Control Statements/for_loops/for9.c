//Write a program to input any number and print the multiplication table of that number.(using for loop) 
#include <stdio.h>
int main()
{
    int a,i;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
    printf(" %d * %d = %d\n",i,a,i*a);
    }
    return 0;
}
