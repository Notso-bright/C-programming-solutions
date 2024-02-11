/*
1 2 3 2 1
1 2 3 2
1 2 3
1 2
1
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
        for(int j=1;j<=n/2+1;j++)
        {
            printf("%d ",j);
        }
        for(int k=n/2+2;k<=n-i;k++)
        {
            printf("%d ",-(k-n-1));
        }
        printf("\n");
      }
      else {
        for(int j=1;j<=n-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
      }
    }
    return 0;
}
