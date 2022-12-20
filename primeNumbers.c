#include<stdio.h>
void prime()
//Muzaffer Baran SEN
{
     int i=2,j,p;
     while(i<=100)
     {
          p=1; 
          for(j=2;j<i;j++)
          {
               
               if( i%j == 0)
               {
                    p=0;
               }
          }
          if(p)
          {
               printf("\t%d\n",i);
          }
     i++;
     }
}
int main()
{ 
     printf("Prime Numbers Between 1 to 100\n");
     printf("---\n");
     prime();
     return 0;
}
