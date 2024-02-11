/*
A B C D E
  A B C D
    A B C
      A B
        A
*/
#include<stdio.h>
int main()
{
  int n,a=65;
  char c;
  c=a;
  printf("enter a number : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
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
