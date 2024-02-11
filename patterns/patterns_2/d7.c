/*
A B C D E
A B C D
A B C
A B
A
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=65;
    char c;
    
    for(int i=1;i<=n;i++)
    {c=a;
        for(int j=0;j<=n-i;j++)
        {
            printf("%c ",c++);
        }
        printf("\n");
    }
    return 0;
}
