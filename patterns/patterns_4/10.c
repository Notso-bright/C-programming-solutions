/*
E E E E E
  D D D D
    C C C
      B B
        A
*/
#include<stdio.h>
int main()
{
  int n;
  char c;
  int a=65;
  printf("enter a number : ");
  scanf("%d",&n);
  int b=65+n;
  c=b;
  for(int i=0;i<n;i++){c--;
    for(int j=0;j<=i;j++){
      printf("  ");
    }
    for(int k=0;k<=(n-1-i);k++){
      printf("%c ",c);
    }
    printf("\n");
  }
  return 0;
}