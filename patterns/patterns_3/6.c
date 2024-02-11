/*
        1
      0 1
    1 0 1
  0 1 0 1
1 0 1 0 1

*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            if((i+k)%2==0)
            printf("1 ");
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
