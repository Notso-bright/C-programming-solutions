/*
        A
      A B
    A B C
  A B C D
A B C D E

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a=65;
    char c;
    
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }c=a;
        for(int k=0;k<=i;k++){
            printf("%c ",c++);
        }
        printf("\n");
    }
    return 0;
}
