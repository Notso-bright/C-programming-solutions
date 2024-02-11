//Write a program to input three numbers and find the smallest one (using nested if ladder).
#include <stdio.h>
int main()
{
     int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(c>b){
            printf("%d is the smallest\n",b);
        }
        else{
            printf("%d is the smallest\n",c);
        }
    }
     else{
        if(a>c){
             printf("%d is the smallest\n",c);
        }
        else{
        printf("%d is the smallest\n",a);
        }
    return 0;
    }
}
