/*
1 0 1 0 1
0 1 0 1
1 0 1
0 1
1
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            if((i+j)%2==0)
            {
            printf("0 ");
            }
            else{
                printf("1 ");
            }
        }printf("\n");
    }
    return 0;
}
