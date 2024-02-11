//Write a program to input one fractional number and printf the integer part and fractional part differently. 
#include <stdio.h>
int main()
{
    float flt,rem;
    printf("enter a fractional number : ");
    scanf("%f",&flt);
    int num;
    num=flt;
    rem=flt-num;
    printf("the integer part is %d and the fractional part is %f",num,rem);
    return 0;
}
