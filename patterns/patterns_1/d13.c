/*
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
int main()
{
    int n,i,a=65;
    char c;
    printf("enter a number : ");
    scanf("%d",&n);
    //n=5;
    for(i=1;i<=n;i++){
        c=a;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",c++);
        }
        printf("\n");
    } 
    return 0;
}