/*
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    n=6;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("%d ",n-i);
        }
        printf("\n");
    } 
    return 0;
}
