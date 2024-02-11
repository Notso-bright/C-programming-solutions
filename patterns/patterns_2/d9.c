/*
A B C B A
A B C B
A B C
A B
A
*/
#include<stdio.h>
int main()
{
    int n,j,a=65;
    char c;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      if(i<n/2)
      {c=a;
        for(int j=1;j<=n/2+1;j++)
        {
            printf("%c ",c++);
        }
        c=a+n/2-1;
        for(int k=n/2+2;k<=n-i;k++)
        {
            printf("%c ",c--);
        }
        printf("\n");
      }
      else {c=a;
        for(int j=1;j<=n-i;j++)
        {
            printf("%c ",c++);
        }
        printf("\n");
      }
    }
    return 0;
}

