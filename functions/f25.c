//Write a program to calculate x^y without using any library function using call by value with return.
#include<stdio.h>
int prodo(int m,int n)
{
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=m;
    }
    return sum;
}
int main(){
    int m,n;
    printf(" printthe values of x and y in the format x^y: ");
    scanf("%d%d",&m,&n);
    printf("%d^%d=%d",m,n,prodo(m,n));
    return 0;
}