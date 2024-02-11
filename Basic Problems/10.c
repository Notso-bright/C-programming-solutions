//Write a program to input any number and print the value of reminder after dividing it by 3
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("the value of the remainder after dividing %d by 3 is %d\n",a,a%3);
    return 0;
}
