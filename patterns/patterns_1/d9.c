/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        if((i+j)%2==0)
        {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
        printf("\n");
    } 
    return 0;
}
