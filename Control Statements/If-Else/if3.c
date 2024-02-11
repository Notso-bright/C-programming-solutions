//Write a program to input any number and check whether it is even or odd
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    // b=a%2;

    /* if( b == 0){
        printf("it is an even number\n");
    }
    else{
        printf("it is an odd number\n");
    } */
    if(a%2)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
    return 0;

}w