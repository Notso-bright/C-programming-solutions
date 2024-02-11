//Write a Program to multiply two positive numbers without using * operator using call by value with return.
#include<stdio.h>
int prodo(int n,int m)
{
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=m;
    }
    return sum;
}
int main(){
    int m,n;
    printf(" printthe values of x and y in the format x*y: ");
    scanf("%d%d",&m,&n);
    printf("%d*%d=%d",m,n,prodo(m,n));
    return 0;
}