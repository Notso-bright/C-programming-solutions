/*
1
2 2
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    for(i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
        for(int j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
            printf("%d ",n-i+1);
        }
            printf("\n");
        }
    } 
    return 0;
}