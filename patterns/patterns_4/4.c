/*
1 1 1 1 1
  2 2 2 2
    3 3 3
      2 2
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
    if(i<=n/2){
    for(int k=0;k<=(n-1-i);k++){
      printf("%d ",i+1);
    }
    }
    else{
        for(int k=0;k<=(n-1-i);k++){
      printf("%d ",n-i);
    }
    }
    printf("\n");
  }
  return 0;
}
