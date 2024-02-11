//Write a program to input two integers and find their sum, difference, multiplication, division and modulus using a switch case
#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter two number and a operator :");
    scanf("%d%c%d",&a,&c,&b);
    switch(c){
        case '+':
        printf("%d+%d = %d\n",a,b,a+b);
        break;
         case '-':
        printf("%d-%d = %d\n",a,b,a-b);
        break;
         case '*':
        printf("%d*%d = %d\n",a,b,a*b);
        break;
         case '/':
        printf("%d/%d = %d\n",a,b,a/b);
        break;
         case '%':
        printf("%d modulus %d = %d\n",a,b,a%b);
        break;
        default :
        printf("ERROR 404\n");
    }

    return 0;
}
