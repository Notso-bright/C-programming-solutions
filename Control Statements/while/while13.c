//write a program to input lower limit and upper limit and print the factorial of each number.(using while loop) 
#include<stdio.h>
int main()
{
    int ll,ul,n=1,product=1;
    printf("enter upper and lower limuts :");
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<=ul)
    {
        printf("the factorial of %d is : \n",i);
        while(n<=i)
        {
            if(i%n==0)
            {
                product*=i;
                printf("%d\n",product);
            }
            n++;
        }
        i++;
    }
    return 0;
}
