//Write a program to input any float number and round off the number
#include <stdio.h>
int main(){
    float a;
    printf("enter a float number: ");
    scanf("%f",&a);
    int b = a;
    float c;
    c=a-b;
    if(c>=0.5){
        printf("the rounded off value of %f is %d\n",a,++b);
    }
    else{
        printf("the rounded off value of %f is %d\n",a,b);
    }
    return 0;
} 