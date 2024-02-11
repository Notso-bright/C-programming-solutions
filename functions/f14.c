//Write a program to input three numbers and find the smallest one (using ternary operator or conditional operator) using function call by value without return. 
#include <stdio.h>
void check_num(int x,int y, int z){
    x<y?
     x<z?printf("%d is the smallest\n",x):printf("%d is the smallest\n",z):
     z<y?printf("%d is the smallest\n",z):printf("%d is the smallest\n",y);
}
int main()
{
     int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    check_num(a,b,c);
    return 0;
}