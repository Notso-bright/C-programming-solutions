/*      A
      B C 
    D E F
  G H I J 
K L M N O 

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a=65;
    char c;
    c=a;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){c++;
            printf("%c ",c-1);
        }
        printf("\n");
    }
    return 0;
}
