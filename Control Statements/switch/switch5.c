//Write a program to find out the number of notes required for a given amount of money. (Start by 2000 Rs Note, 500, 200, 100, 50, 20, 10, 5, 2, 1)

#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    printf("Enter the amount of money:");
    scanf("%d",&a);

    if(a>=2000)
    {
       b = a/2000;
       c = a%2000;
       printf("number of 2000 rupee notes are :%d\n",b);
       if(c>=500)
       {
          d = c/500;
          e = c%500;
          printf("number of 500 rupee notes are :%d\n",d);
            if(e>=200)
            {
               f = e/200;
               g = e%200;
               printf("number of 200 rupee notes are :%d\n",f);
               if(g>=100)
               {
                  h = g/100;
                  i = g%100;
                  printf("number of 100 rupee notes are :%d\n",h);
                    if(i>=50)
                    {
                     j = i/50;
                     k = i%50;
                     printf("number of 50 rupee notes are :%d\n",j);
                       if(k>=20)
                       {
                          l = k/20;
                          m = k%20;
                          printf("number of 20 rupee notes are :%d\n",l);
                           if(m>=10)
                           {
                             n = m/10;
                             o = m%10;
                             printf("number of 10 rupee notes are :%d\n",n);
                                 if(o>=5)
                                {
                                    p = o/5;
                                     q = o%5;
                                     printf("number of 5 rupee notes are :%d\n",p);
                                         if(q>=2)
                                    {
                                            r = q/2;
                                            s = q%2;
                                             printf("number of 2 rupee notes are :%d\n",r);
                                             if(s>=1)
                                            {
                                            t =s/1;
                                            printf("number of 1 rupee notes are :%d\n",t);
                                             }

                                     }


                                }
                           }
                       }
                    }
               }
            }
       }
    }
    else if((a>=500)&&(a<=2000)){
         if(a>=500)
       {
          d = a/500;
          e = a%500;
          printf("number of 500 rupee notes are :%d\n",d);
            if(e>=200)
            {
               f = e/200;
               g = e%200;
               printf("number of 200 rupee notes are :%d\n",f);
               if(g>=100)
               {
                  h = g/100;
                  i = g%100;
                  printf("number of 100 rupee notes are :%d\n",h);
                    if(i>=50)
                    {
                     j = i/50;
                     k = i%50;
                     printf("number of 50 rupee notes are :%d\n",j);
                       if(k>=20)
                       {
                          l = k/20;
                          m = k%20;
                          printf("number of 20 rupee notes are :%d\n",l);
                           if(m>=10)
                           {
                             n = m/10;
                             o = m%10;
                             printf("number of 10 rupee notes are :%d\n",n);
                                 if(o>=5)
                                {
                                    p = o/5;
                                     q = o%5;
                                     printf("number of 5 rupee notes are :%d\n",p);
                                         if(q>=2)
                                    {
                                            r = q/2;
                                            s = q%2;
                                             printf("number of 2 rupee notes are :%d\n",r);
                                             if(s>=1)
                                            {
                                            t =s/1;
                                            printf("number of 1 rupee notes are :%d\n",t);
                                             }

                                     }


                                }
                           }
                       }
                    }
               }
            }
       }
    }
    

    return 0;
}

   