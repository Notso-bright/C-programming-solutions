/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/
#include<stdio.h>
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      printf("  ");
    }
    for(int k=0;k<=(n-1-i);k++){
      printf("%d ",k+1);
    }
    printf("\n");
  }
  return 0;
}
