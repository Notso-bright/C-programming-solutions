//Write a program to check if a person is eligible to vote in India  or not using function call by value with return.
#include<stdio.h>
int check_num(int x){
    if(x>=18)
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
    if(check_num(n)){
        printf("eligible");
    }
    else{
        printf("not elligible");
    }
    return 0;
}