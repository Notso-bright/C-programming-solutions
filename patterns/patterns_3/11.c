/*
        A
      B B
    C C C
  B B B B 
A A A A A

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
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }
        if(i<=n/2)
        {c++;
        for(int k=0;k<=i;k++)
          {
            printf("%c ",c-1);
          }
        }
        else{
          c--;
           for(int k=0;k<=i;k++)
          {
            printf("%c ",c-1);
          }
        }
        printf("\n");
    }
    return 0;
}
