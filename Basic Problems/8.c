//Write a program to input a temperature in celsius and converts that into fahrenheit.
#include <stdio.h>
int main()
{
    int c,f;
    printf("enter temperature in celsius :");
    scanf("%d",&c);
    f=c*9/5+32;
    printf("temperature in fahrenheit : %d\n",f);
    return 0;
}
