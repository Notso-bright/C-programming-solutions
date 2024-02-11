/*
A
B B
C C C
B B B B
A A A A A
*/
#include <stdio.h>
int main()
{
    int n,i,a=64;
    char c;
    
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    for(i=1;i<=n;i++)
    {
        if(i<=(n/2+1))
        {
        
        for(int j=1;j<=i;j++)
            {c=a;
                printf("%c ",c);
            }
            printf("\n");
        }
        else
        {
            c--;
            for(int j=1;j<=i;j++)
            {
            printf("%c ",c);
        }
            printf("\n");
        }
    } 
    return 0;
}