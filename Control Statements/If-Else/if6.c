//Write a program to find the roots of a quadratic equation and find the real and imaginary roots. If the roots are real then print them else print “roots are imaginary”.
#include <stdio.h>
int main()
{
    int a,b,c,d,x1,x2;
    printf("the quadratic equation is in the form ax^2 + bx +c enter the value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    d= (b*b)-(4*a*c);
    x1= (-b+d^(1/2))/(2*a);
    x2=(-b-d^(1/2))/(2*a);
    if(d>=0){
        printf("%d,%d\n",x1,x2);
    }
    else{
        printf("roots are imagenary\n");
    }
    return 0;
}
