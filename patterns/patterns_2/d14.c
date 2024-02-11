/*5 5 5 5 5
4 4 4 4
3 3 3
4 4
5
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<=n/2){
        for(int j=0;j<=n-i;j++){
            printf("%d ",n+1-i);
            }printf("\n");
        }
        else{
            for(int j=0;j<=n-i;j++){
            printf("%d ",i);
            }printf("\n");
        }
    }
    return 0;
}