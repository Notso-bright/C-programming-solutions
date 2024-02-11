//Write a program to input lower limit and upper limit and print all the strong numbers in that range.
#include <stdio.h>
int main()
{
    int ll,ul,a,i;
    printf("enter upper and lower limits : ");
    scanf("%d%d",&ll,&ul);
    for( a=ll;a<=ul;a++)
    {
        int sum=0;
        for(int i=a;i>=1;i/=10)
        {
            int digit=i%10;
            int fac=1;
            for(int j=1;j<=digit;j++)
            {
                fac*=j;
            }
            sum+=fac;
            //printf("%d\n",fac);
        }
        //printf("%d\n",sum);
        if(a==sum){
            printf("%d is a strong number\n",a);
        }
    }
    return 0;
}