#include<stdio.h>
int i;
int lcm(int num1, int num2)
{
    if (num1<num2)
     {
        for (i=num1;;i+=num1)
        {
            if (i%num2==0)
              {
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
                break;
              }
        }
     }
    return i;
}
int main()
{
    int num1,num2,c;
    printf("enter your 1st number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    c=lcm(num1,num2);
    printf("lcm is %d",c);
}