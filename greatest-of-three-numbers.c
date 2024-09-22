#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your first number\t");
    scanf("%d",&a);
    printf("enter your second number\t");
    scanf("%d",&b);
    printf("enter your third number\t");
    scanf("%d",&c);
    
    
    
    //using if else
    if (a>b&&a>c)
     {
        printf("%d is greatest\n",a);
     }
    else 
    {
        if(b>c)
          {
            printf("%d is grestest\n",b);
          }
        else
        {
            printf("%d is grestest\n",c);
        }
    }


    //using ternary 
    ((a>b)&&(a>c))?(printf("%d is greatest",a)):((b>c)?(printf("%d is greatest",b)):(printf("%d is grestest",c)));

}