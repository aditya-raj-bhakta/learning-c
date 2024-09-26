#include<stdio.h>
#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    printf("enter first number:\t");
    scanf("%d",&num1);
    printf("enter second number:\t");
    scanf("%d",&num2);
    gcd=1;
    if (num1<=0 || num2<=0)
    {printf("greatest common divisor is defined only for positive numbers");}
    else
    {
     if(num1>num2)
     {
        for (i=2;i<num1;i++)
        {
            if(num1%i==0)
             {
                if(num2%i==0)
                {
                    gcd=i;
                }
             }
        }
    
     }
     else
     {
        for (i=2;i<num2;i++)
        {
            if(num2%i==0)
             {
                if(num1%i==0)
                {
                    gcd=i;
                }
             }
        }
    
     }
    printf("greatest common divisor is : %d",gcd);
    }





    

















}