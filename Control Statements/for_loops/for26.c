//Write a Program to input lower limit and upper limit and print all the perfect numbers in that range.
#include <stdio.h>
int main()
{
    int ll,ul,a,i;
    printf("enter upper and lower limits : ");
    scanf("%d%d",&ll,&ul);
    for( a=ll;a<=ul;a++)
    {
        int sum=0;
        //printf("the sum of %d is",a);
       for(int i=1;i<a;i++)
       {
        if(a%i==0)
        {
         sum=sum+i;
        }
       }
       //printf("%d\n",sum);
       if(a==sum){
        printf("%d is a perfect number\n",a);
       }
    }
    return 0;
}