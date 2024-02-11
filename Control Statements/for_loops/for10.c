//Write a program to input any number and print twenty numbers in descending order from the number.(using for loop)
#include <stdio.h>
int main()
{
    int a,i;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("20 numbers in decending order from %d  are:",a);
    for(i=a;i>=a-20;i--)
    {
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}
