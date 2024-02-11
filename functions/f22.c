//Write a program to input lower limit and upper limit and print all the odd numbers in that range using call by value without return.
#include<stdio.h>
void print_odd(int x,int y){
    if(x%2){
        for(int i=x;i<=y;i=i+2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
       for(int i=x+1;i<=y;i=i+2)
        {
            printf("%d\n",i);
        } 
    }
}
int main(){
    int ll,ul;
    printf(" enter ll and ul : ");
    scanf("%d%d",&ll,&ul);
    print_odd(ll,ul);
    return 0;
}