//Write a program to input lower limit and upper limit and print all the armstrong numbers in that range.
#include <stdio.h>
#include<math.h>
int main()
{
     int ll,ul,a,i;
    printf("enter upper and lower limits : ");
    scanf("%d%d",&ll,&ul);
    for(a=ll;a<=ul;a++)
     {
    //printf("the no. of digits in %d is ",a);
        int num=0;
        for(int i=a;i>0;i/=10)
        {
            num++;
        }
        //printf("%d\n",num);
        int sum=0;
        for(int i=a;i>0;i/=10)
        {
            int digit;
            digit=i%10;
            int power;
            power=pow(digit,num);
            sum+=power;
            //printf("%d\n",power);
        }
        if(a==sum){
            printf("%d is an armstrong number\n",a);
        }
     }
    return 0;
}