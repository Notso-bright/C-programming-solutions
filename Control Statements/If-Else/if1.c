//Write a program to input any number and check whether it is positive or negative or zero.
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a>0){
        printf("a is a positive number\n");
    }
    else if(a<0){
        printf("a is a negative number\n");
    }
    else{
        printf("a is zero\n");
    }
    return 0;
}