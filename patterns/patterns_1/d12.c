/*
A
B B
C C C
D D D D
E E E E E
*/
#include <stdio.h>
int main()
{
    int n,i,a=64;
    char c;
    c=a;
    printf("enter a number : ");
    scanf("%d",&n);
   //n=5;
    for(i=1;i<=n;i++){
        a++;
        for(int j=1;j<=i;j++){
            printf("%c ",a);
        }printf("\n");
    } 
    return 0;
}
