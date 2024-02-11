/*
        1
      1 2
    1 2 3
  1 2 3 2
1 2 3 2 1

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        for(int j=0;j<(n-i-1);j++)
        {
          printf("  ");
        }
          if(i<=n/2)
          {
            for(int k=0;k<=i;k++)
              {
                printf("%d ",k+1);
              }
          }
          else
          {
            for(int k=0;k<=i;k++)
              {
                printf("%d ",-(k-n));
              }
          }
        printf("\n");
    }
    return 0;
}
