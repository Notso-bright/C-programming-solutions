//Write a program to input any number and print “correct” if it is 10 else print “Incorrect” using function call by value with return.
#include<stdio.h>
int check_num(int x){
    if(x==10)
        {
           return 1;
        }
    else
    {
        return 0;
    }        
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(check_num(n))
    {
        printf("correct\n");
    }
    else{
        printf("incorrect\n");
    }
    return 0;
}