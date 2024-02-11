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
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    if(i<=n/2)
    {
    for(int j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(int k=1;k<=(n/2+1);k++)
    {
      printf("%d ",k);
    }
    for(int l=n/2;l>=i+1;l--)
    {
      printf("%d ",l);
    }
    printf("\n");
    }
    else{
      for(int j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(int k=1;k<=(n-i);k++)
    {
      printf("%d ",k);
    }
    printf("\n");
    }
  }
  return 0;
}
