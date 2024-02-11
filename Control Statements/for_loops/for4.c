//Write a program to input any numbers and find the factorial of that number.(using for loop) 
#include <stdio.h>
int main()
{
    int num,count;
    unsigned long long int factorial=1;
    printf("enter a natural number : ");
    scanf("%d",&num);
    for(count=2;count<=num;++count)
      { 
        factorial*=count;
      }

    printf("factorial of %d is %llu \n",num,factorial);
    return 0;
}
