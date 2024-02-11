//Write a program to input any year and check whether it is leap year or not
#include <stdio.h>
int main(){
    int a,b;
    printf("enter any year : ");
    scanf("%d",&a);
    b=a%4;
    // not done will do later (pritam da)
    if(b==0){
        printf("it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
    return 0;
}