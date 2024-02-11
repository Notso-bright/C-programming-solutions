//Write a program to input any number and the factors of that number.(using for loop) 
#include <stdio.h>
int main()
{
    int i,a;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}

 