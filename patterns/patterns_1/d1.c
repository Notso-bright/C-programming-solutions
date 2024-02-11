/*
*
* *
* * *
* * * *
* * * * *
*/

#include <stdio.h>
int main()
{
    int n,i;
    //printf("enter a number : ");
    //scanf("%d",&n);
    n=5;
    for(i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }printf("\n");
    } 
    return 0;
}
