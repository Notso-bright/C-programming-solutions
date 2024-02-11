//Write a program to input any number and print the multiplication table of that number using call by value without return.
#include<stdio.h>
void print_odd(int x){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",x,i,x*i);
    }
}
int main(){
    int n;
    printf(" enter a number : ");
    scanf("%d",&n);
    print_odd(n);
    return 0;
}