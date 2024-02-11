//Write a program to calculate x^y without using any library function(using while loop) 
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers : ");
    scanf("%d%d",&x,&y);
    int i=1;
    int result=x;
    while(i<y)
    {
        result*=x;
        i++;
    } printf("%d\n",result);
    return 0;
}
