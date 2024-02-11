//Write a program to input any number and print “correct” if it is 10 else print “Incorrect”
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a==10){
        printf("correct\n");
    }
    else{
        printf("Incorrect\n");
    }
    return 0;
}
