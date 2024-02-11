//write a program to input lower limit and upper limit and print the factors of each number.(using for loop) 
#include <stdio.h>
int main()
{
    int ll,ul;
    printf("enter lower and upper limits :- ");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++)
    {
        int b,a=i;
        printf("the factors of %d are : \n",i);
        for(b=1;b<=a;b++)
        {
           if(a%b==0)
           {
            printf("%d\n",b);
           }
        }
    }
    return 0;
}