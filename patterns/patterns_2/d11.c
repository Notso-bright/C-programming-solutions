/*A B C D E
F G H I
J  K  L
M N
O
*/
#include<stdio.h>
int main(){
    int n,a=65;
    printf("enter a number :");
    scanf("%d",&n);
    char c;
    c=a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%c ",c++);
        }printf("\n");
    }
    return 0;
}