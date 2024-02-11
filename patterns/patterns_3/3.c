/*
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}
