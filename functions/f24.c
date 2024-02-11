//Write a program to input any number and print twenty numbers in descending order from the number using call by value without return. 
#include<stdio.h>
void print_odd(int x){
    for(int i=x;i>=x-20;i--){
        printf("%d\n",i);
    }
}
int main(){
    int n;
    printf(" enter a number : ");
    scanf("%d",&n);
    print_odd(n);
    return 0;
}