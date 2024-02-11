/*               1
            2    3
        4   5    6
    7   8   9    10
11  12  13  14   15

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a=1;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
