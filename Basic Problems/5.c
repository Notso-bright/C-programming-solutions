//Write a program to input one integer and one float number and find their Sum.
#include <stdio.h>
int main()
{
    int a;
    float b,c;
    printf("enter one integer and one float : ");
    scanf("%d%f",&a,&b);
    c=a+b;
    printf("%d + %0.2f = %0.2f\n",a,b,c);
    return 0;
}
