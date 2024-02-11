//write a program to input lower limit and upper limit and print the no of factors of each number.(using for loop)
#include <stdio.h>
int main()
{
    int ll,ul;
    printf("enter upper and lower limits : ");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++)
    {   int m,a=i,b=0;
    printf("the no. factors of %d is :",i);
         for(m=1;m<=a;m++)
    {
       if(a%m==0){
            b++;
        }
    }
    printf("%d\n",b);
    }
    return 0;
}