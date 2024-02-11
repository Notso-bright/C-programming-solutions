//Write a program to input two integers and swap them (without using 3rd variable)
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    printf("before swapping\n value of a is %d\t value of b is %d\n ",a,b);
    //  a=b;b=a;
    /* a=a+b;
    b=a-b;
    a=a-b; */

    // another way using bit wise XOR operator
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping\n value of a is %d\t value of b is %d\n ",a,b);
    return 0;
}
