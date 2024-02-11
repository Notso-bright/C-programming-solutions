/*
A A A A A
  B B B B 
    C C C
      B B
        A
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a=65;
    char c;
    c=a;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        if(i<=n/2)
        {c++;
        for(int k=0;k<=n-i-1;k++)
          {
            printf("%c ",c-1);
          }
        }
        else{
          c--;
           for(int k=0;k<=(n-1-i);k++)
          {
            printf("%c ",c-1);
          }
        }
        printf("\n");
    }
    return 0;
}
