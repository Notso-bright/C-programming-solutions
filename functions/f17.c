//Write a program to print all two digit odd numbers in reverse order using call by value without return. 
#include<stdio.h>
void digit(int i){
    if(i%2)
    {
     for(int j =i;j>9;j=j-2)
        {
         printf("%d\n",j);
        }
    }
    else
    {
        for(int j =i-1;j>9;j=j-2)
        {
         printf("%d\n",j);
        }
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    digit(n);
    return 0;
}