//write a program to input lower limit and upper limit and print the no of factors of each number.(using while loop) 
#include<stdio.h>
int main()
{
    int ll,ul;
    printf("enter upper and lower limuts :");
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<=ul)
    {
        int sum=0;
        printf("the number of factors of %d is : \n",i);
        int n=1;
        while(n<=i)
        {
             if(i%n==0)
            {
                sum++; 
            }
            n++;
        } 
        printf("%d\n",sum); 
        i++;
    }
    return 0;
}
