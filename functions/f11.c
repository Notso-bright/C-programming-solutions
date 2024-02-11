//Write a program to input three numbers and find the smallest one (using a logical operator) using function call by value with return.
#include<stdio.h>
int check_int(int x,int y,int z){
    if((x<y)&&(x<z)){
        return 1;
    }
    else if((y<x)&&(y<z)){
        return 2;
    }
    else{
        return 3;
    }
}
int main(){
    int a,b,c;
    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(check_int(a,b,c)==1){
        printf("%d is the smallest ",a);
    }
    else if(check_int(a,b,c)==2){
        printf("%d is the smallest ",b);
    }
    else{
        printf("%d is the smallest ",c);
    }
    return 0;
}