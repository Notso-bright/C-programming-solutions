/*
        A
      B B
    C C C
  D D D D
E E E E E
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            printf("  ");
        }c++;
        for(int k=0;k<=i;k++){
            printf("%c ",c-1);
        }
        printf("\n");
    }
    return 0;
}
