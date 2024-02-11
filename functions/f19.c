//Write a program to input any numbers and find the factorial of that number using call by value with return.
#include<stdio.h>
int facto(int n)
{
    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    return product;
}
int main(){
    int m,n;
    printf(" enter a number : ");
    scanf("%d",&m);
    printf("the factorial of %d is %d ",m,facto(m));
    return 0;
}