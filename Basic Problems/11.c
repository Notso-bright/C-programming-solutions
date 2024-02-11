//Write a program to input any two number. If the first number is greater than second then print the difference of these two numbers else print their sum. Write this program using conditional operator
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    c = a>b?a-b:a+b;
    printf("the required value is %d\n",c);
    return 0;
}
