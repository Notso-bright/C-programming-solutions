//Write a program to input any number and check whether it is even or odd using function call by value with return.
#include<stdio.h>
int check_num(int x){
    if(x%2==0)
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
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}