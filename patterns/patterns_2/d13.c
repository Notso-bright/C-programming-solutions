/*
5 4 3 4 5
5 4 3 4
5 4 3
5 4
5
*/
#include<stdio.h>
int main()
{
    int n,j;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      if(i<n/2)
      {
        for(int j=n;j>=n/2+1;j--)
        {
            printf("%d ",j);
        }
        for(int k=n/2+2;k<=n-i;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
      }
      else {
        for(int j=n-1;j>=i;j--)
        {
            printf("%d ",j+1);
        }
        printf("\n");
      }
    }
    return 0;
}
