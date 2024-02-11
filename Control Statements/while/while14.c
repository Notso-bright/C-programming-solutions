//write a program to input lower limit and upper limit and print the factors of each number.(using while loop)
#include<stdio.h>
int main()
{
    int ll,ul;
    printf("enter upper and lower limuts :");
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<=ul)
    {
       printf("the factors of %d are : \n",i);
        int n=1;
       while(n<=i)
       {
        if(i%n==0)
        {
            printf("%d\n",n);
            
        }
        n++;
       } 
       i++;
    }
    return 0;
}
