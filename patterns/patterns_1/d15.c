/*
A
A B
A B C
A B C B
A B C B A
*/
#include<stdio.h>
int main()
{
    int a=65,n;
    char c;
    
    printf("enter a number :");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
    {
        if(i<=(n/2+1))
        {c=a;
        for(int j=1;j<=i;j++)
            {
                printf("%c ",c++);
            }
            printf("\n");
        }
        else  
        {
            c=a;
            for(int j=1;j<=n/2+1;j++)
            {
            printf("%c ",c++);
            }
            c=a+n/2-1;
            for(int k=n/2+2;k<=i;k++)
            {  
            printf("%c ",c--);
            }
            printf("\n");
        }
    }
    return 0;
}
