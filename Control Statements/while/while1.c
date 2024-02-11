//Write a program to print the first ‘n’ natural number in ascending and descending order.(using while loop)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a naturl number : ");
    scanf("%d",&n);
    int i=1;
    printf("the first 'n' numbers in ascending order : ");
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }printf("\n");
    int j=n;
    printf("the first 'n' numbers in descending order : ");
    while(j>0)
    {
        printf("%d\t",j);
        j--;
    }printf("\n");
return 0;
}