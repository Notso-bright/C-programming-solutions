//Write a program to input any number and count the number of factors of that number.(using for loop) 
#include <stdio.h>
int main()
{
    int i,a,b=0;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       if(a%i==0){
            b++;
        }
    }
    printf("%d\n",b);
    return 0;
}