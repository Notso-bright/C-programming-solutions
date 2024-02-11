//Write a program to print the first ‘n’ natural number in ascending order.(using do-while loop)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}
