/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    n=6;
    for(i=1;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%d ",i);
        }printf("\n");
    } 
    return 0;
}
