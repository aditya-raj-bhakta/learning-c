#include<stdio.h>
int main()
{
    int a,x,i=0;
    printf("enter your number ");
    scanf("%d",&a);
    for (x=2;x<a;x++)
    {
        if (a%x==0)
          { printf("given number is not prime");
          i=1;
          break;} 
    }
    if (i==0)
     {
         printf("given number is prime");
     }





}