/*
5
4 4
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    
    for(i=1;i<=n;i++){
        if(i<=n/2)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",n-i+1);
            }
            printf("\n");
        }
        else
        {
         for(int j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }

    } 
    return 0;
}
