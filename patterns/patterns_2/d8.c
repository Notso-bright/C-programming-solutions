/*A A A A A
B B B B
C C C
D D
E
*/
#include<stdio.h>
int main()
{
    int n,a=65;
    printf("Enter a number :");
    scanf("%d",&n);
    char c;
    c=a;
    for(int i=1;i<=n;i++)
    {c++;
        for(int j=0;j<=n-i;j++)
        {
            printf("%c ",c-1);
        }
        printf("\n");
    }
    return 0;
}
