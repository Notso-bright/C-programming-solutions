/*
A A A A A
E E E E
I  I  I
M M
Q
*/
#include<stdio.h>
int main()
{
    int n,a=65;
    printf("enter a number : ");
    scanf("%d",&n);
    char c;
    c=a;
    for(int i=1;i<=n;i++)
    {c=c+4;
        for(int j=0;j<=n-i;j++)
        {
            printf("%c ",c-4);
        }
        printf("\n");
    }
    return 0;
}
