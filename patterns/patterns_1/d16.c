/*
A
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>
int main()
{
    int n,i,a=65;
    char c;
    c=a;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",a++);
        }printf("\n");
    } 
    return 0;
}