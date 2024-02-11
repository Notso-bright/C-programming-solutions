//Write a program that accepts the marks of 5 subjects and calculate the total % mark.
#include <stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,s;
    printf("enter the marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    s=(a1+a2+a3+a4+a5)/5;
    printf("the total percentage marks is : %d percent \n",s);
    return 0;
}
