/*
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
int main()
{
    int n,i,a=1;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=4;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a++);
        }printf("\n");
    } 
    return 0;
}