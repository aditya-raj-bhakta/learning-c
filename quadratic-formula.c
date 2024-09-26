#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,Det,solution1,solution2;
    printf("enter co-efficient of x sqaure :");
    scanf("%d",&a);
    printf("enter the co-efficient of x :");
    scanf("%d",&b);
    printf("enter the constant term :");
    scanf("%d",&c);
    Det=(b*b)-(4*a*c);
    if (Det==0)
     {
        solution1=(-b)/(2*a);
        printf("only 1 real solution \n root=%d",solution1);
     }
    else if (Det>0)
     {  c=sqrt(Det)-b;
        printf("%d",sqrt(Det));
        solution1=(c)/(2*a);
        c=-b-sqrt(Det);
        solution2=(c)/(2*a);
        printf("two real and uneqal roots \n root 1=%d \t root 2=%d",solution1,solution2);
     }
    else if (Det<0)
    {
        printf("no real solution");
    }
}