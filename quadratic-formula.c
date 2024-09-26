#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e,Det,solution1,solution2;
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
        printf("only 1 real solution \n root=%f",solution1);
     }
    else if (Det>0)
     {  a=a*2;
        d=sqrt(Det)-b;
        printf("%f",d);
        solution1=d/a;
        d=-b-sqrt(Det);
        solution2=d/a;
        printf("two real and uneqal roots \n root 1=%f \t root 2=%f",solution1,solution2);
     }
    else if (Det<0)
    {
        printf("no real solution");
    }
}