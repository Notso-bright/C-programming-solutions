/*
E D C D E
E D C D
E D C
E D
E
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
      {c=a+n-1;
        for(int j=n;j>=n/2+1;j--)
        {
            printf("%c ",c--);
        }c=a+n/2+1;
        for(int k=n/2+2;k<=n-i;k++)
        {
            printf("%c ",c++);
        }
        printf("\n");
      }
      else {c=a+n-1;
        for(int j=n-1;j>=i;j--)
        {
            printf("%c ",c--);
        }
        printf("\n");
      }
    }
    return 0;
}
