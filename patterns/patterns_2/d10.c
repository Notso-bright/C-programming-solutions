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
    int n,a=65;
    printf("enter a number :");
    scanf("%d",&n);
    char c;
    c=a;
    for(int i=1;i<=n+1;i++)
    {
        
        if(i<=n/2)
        {c++;
            for(int j=0;j<=n-i;j++)
            {
                 printf("%c ",c-1);
            }
            printf("\n");
        }
        else{c--;
            for(int j=0;j<=n-i;j++){
            
                 printf("%c ",c+1);
            }
            printf("\n");
        }
    }
    return 0;
}
