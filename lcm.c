#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("enter your 1st number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    if (num1<num2)
     {
        for (i=num1;;i+=num1)
        {
            if (i%num2==0)
              {
                printf("LCM is %d",i);
                break;
              }
        }
     }
    else if (num2<num1)
     {
        for (i=num2;;i+=num2)
        {
            if (i%num1==0)
              {
                printf("LCM is %d",i);
                break;
              }
        }
     }
}