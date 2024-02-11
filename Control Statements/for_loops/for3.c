//Write a program to input ‘n’ and find the sum of n natural numbers.(using for loop
#include <stdio.h>
int main()
{
    int num,count,sum=0;
    printf("enter a natural number : ");
    scanf("%d",&num);
    /* for(count=1;count<=num;++count)
      { 
        sum+=count;
     } */
    sum=num*(num+1)/2;
    printf("the sum of %d natural terms is %d\n",num,sum);
    return 0;
}
