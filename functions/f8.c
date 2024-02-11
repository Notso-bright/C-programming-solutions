//Write a program to input any year and check whether it is leap year or not using function call by value with return.
#include<stdio.h>//leave it
char check_num(int x){
    if(x%4==0)
        {
            printf("leap year");
        }
    else
    {
        printf("non-leap year");
    }
return x;        
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%c",check_num(n));
    return 0;
}