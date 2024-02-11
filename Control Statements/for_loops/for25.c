// Write a program to input lower limit and upper limit and print all the prime numbers in that range.
#include <stdio.h>
int main()
{
     int ll, ul, a;
     printf("enter upper and lower limits : ");
     scanf("%d%d", &ll, &ul);
     printf("all the prime numbers between %d and %d are\n",ll,ul);
     for (a = ll; a <= ul; a++)
     {
          int sum=0;
          for (int i = 1; i < a; i++)
          {
               
               if (a % i == 0)
               {
                    sum++;
               }
          }
          if (sum == 1)
                    {
                         printf("%d\n", a);
                    }
     }
     return 0;
}