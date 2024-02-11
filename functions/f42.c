//Write a program to input lower limit and upper limit and print all the armstrong numbers in that range using function call by value with/without(whatever you want) return. 
#include<stdio.h>
#include<math.h>
void print_armstrong(int x,int y)
{
    for(int a=x;a<=y;a++)
     {
        int count=0;
        for(int i=a;i>0;i/=10)
        {
            count++;
        }
        int sum=0;
        for(int i=a;i>0;i/=10)
        {
            int digit;
            digit=i%10;
            int power;
            power=pow(digit,count);
            sum+=power;
        }
        if(a==sum){
            printf("%d is an armstrong number\n",a);
        }
     }
}
int main()
{
    int ll,ul;
    printf("enter lower and upper limits : ");
    scanf("%d%d",&ll,&ul);
    print_armstrong(ll,ul);
    return 0;
}
