/*
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("* ");
        }printf("\n");
    } 
    return 0;
}
