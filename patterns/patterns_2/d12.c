/*5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d ",n+1-j);
        }printf("\n");
    }
    return 0;
}