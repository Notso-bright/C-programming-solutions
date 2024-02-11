//Write a program to input three numbers and find the smallest one (using a logical operator)
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(c>b)) {
        printf("%d is the smallest\n",b);
    }
   else if(a>c){
    printf("%d is the smallest\n",c);
   }
   else {
    printf("%d is the smallest\n",a);
   }
    return 0;
}
