//Write a program to input ‘n’ and find the sum of n natural numbers using call by value with return. 
#include<stdio.h>
int sum_of_n(int n){
    return (n*(n+1)/2);
}
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("the sum of first %d natural numbes is : %d\n",a,sum_of_n(a));
    return 0;
}