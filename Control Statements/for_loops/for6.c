//Write a Program to input an integer and find out the sum of all the digits of that number (using for loop).
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    int sum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int digit =i%10;
        sum+=digit;
        }
        printf("%d\n",sum);
    return 0;
}
