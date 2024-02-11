//Write a program to input three numbers and find the smallest one (using ternary operator or conditional operator). 
#include <stdio.h>
int main()
{
     int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    a<b?
     a<c?printf("%d is the smallest",a):printf("% is the smallest",c):
     c<b?printf("%d is the smallest",c):printf("% is the smallest",b);
    return 0;
}