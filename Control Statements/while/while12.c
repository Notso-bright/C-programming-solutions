//write a program to input lower limit and upper limit and print the multiplication table of each number.(using while loop)
#include<stdio.h>
int main()
{
    int ll,ul,n;
    printf("enter upper and lower limuts :");
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<=ul)
    {
        printf("multiplication table of %d is :",i);
        n=1;
        while(n<=10)
        {
            printf(" %d * %d = %d\n",i,n,i*n);
            n++;
        }
        i++;
    }

    return 0;
}
