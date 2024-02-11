//Write a program to input three numbers and find the smallest one (using else-if ladder).
#include <stdio.h>
int main()
{
     int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        printf("%d is the smallest",b);
    }
    else if(b>c){
        printf("%d is the smallest",c);
    }
    else{
        printf("%d is the smallest",a);
    }
    return 0;
}()
