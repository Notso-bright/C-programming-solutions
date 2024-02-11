//Write a program to input three numbers and find the smallest one (using nested if else)  using function call by value with return
#include<stdio.h>
int check_num(int x,int y,int z){
    if(x<y){
        if(x<z){
            return 1;//x is smallest
        }
        else{
            return 3;//z is smallest
        }
    }
    else {
        if(y<z){
            return 3;//y is smallest
        }
        else {
            return 2;//z is smallest
        }
    }
}
int main(){
    int a,b,c;
    printf("enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if(check_num(a,b,c)==1){
        printf("%d is the smallest ",a);
    }
    else if(check_num(a,b,c)==2){
        printf("%d is the smallest ",c);
    }
    else{
        printf("%d is the smallest ",b);
    }
    return 0;
}