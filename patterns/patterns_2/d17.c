/*
A E I M Q
A E I M
A E I
A E
A
*/
#include<stdio.h>
int main()
{
    int n,a=61;
    printf("enter a number :");
    scanf("%d",&n);
    char c;
    
    for(int i=1;i<=n;i++)
    {c=a;
        for(int j=0;j<=n-i;j++)
        {c=c+4;
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}
