//Write a Program to multiply two positive numbers without using * operator.
#include <stdio.h>
int main()
{
    int num1,num2,i,sum=0;
    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);
       for(i=1;i<=num2;i++)
       {
            sum+=num1;    
       }
        printf("%d\n",sum);
    return 0;
}
