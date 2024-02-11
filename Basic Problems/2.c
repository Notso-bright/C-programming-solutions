// Write a program to print the sum, difference, multiplication, division of two numbers.
#include <stdio.h>

int main(){
    // int a=5,b=4;
    int a,b;
    printf("Enter two numbers :- ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n ", a,b,a+b);
    printf("%d - %d = %d\n ", a,b,a-b);
    printf("%d * %d = %d\n ", a,b,a*b);
    printf("%d / %d = %d\n ", a,b,a/b);
    return 0;
}
