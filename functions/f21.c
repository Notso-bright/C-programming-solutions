//Write a Program to input any Number and count the number of digits using call by value with return.
#include<stdio.h>
int count_num(int x){
    int count=0;
    for(int i=x;i>0;i/=10){
        count++;
    }
    return count;
}
int main(){
    int n;
    printf(" enter any number : ");
    scanf("%d",&n);
    printf("%d",count_num(n));
    return 0;
}