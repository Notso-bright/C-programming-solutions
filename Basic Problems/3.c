//Write a program to input two integers and swap them (with using 3rd variable)
#include <stdio.h>
int main()
{
   int a,b;
   printf("enter two numbers : ");
   scanf("%d%d",&a,&b);
   printf("before swapping a : %d\t b : %d\n ",a,b);
    int c;
    c=a;a=b;b=c;
   printf("after swapping a : %d\t b : %d\n",a,b);
    
    return 0;
}
