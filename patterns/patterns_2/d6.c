/*
1 1 1 1 1
2 2 2 2
3 3 3
2 2
1
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<=n/2){
        for(int j=0;j<=n-i;j++){
            printf("%d ",i);
            }printf("\n");
        }
        else{
            for(int j=0;j<=n-i;j++){
            printf("%d ",-(i-n-1));
            }printf("\n");
        }
    }
    return 0;
}