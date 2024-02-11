//30.Write a program to input any number and check it is prime or not using call by value with return.
#include<stdio.h>

//not correct......


int my_sqrt(int x)
{
  for(int i=2;i<x;i++)
  {
    if(x/i==i)
    {
       return i;
    }
    else
    {
        if((x-i-i/2)/i==i)
        {
         return i;
        }
    }
  }
}
int check_prime(int x)
{
    int sum=0;
    if(x==1)
    {
      sum++;
      return sum;
    }
    else{
    for(int i=2;i<my_sqrt(x);i++)
    {
      if(x%i==0)
      {
        sum++;
      }
    }
    return sum;
    }
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    if(check_prime(n))
    {
        printf("not a prime number ");
    }
    else
    {
        printf("prime number ");
    }
    return 0;
}