#include<stdio.h>
#include<math.h>
int main()
{
    int principal,time,years;
    float rate,a,b,total;
    printf("enter your principal amount\t");
    scanf("%d",&principal);
    printf("enter the intrest rate\t");
    scanf("%f",&rate);
    printf("enter the time period in years\t");
    scanf("%d",&time);


    // calulating total amount to pay
    b=1+rate/100;
    total=principal*(pow(b,time));
    printf("total amount you have to pay is :%f\n",total);
    


    //emi options
    printf("in how many year you want to pay\t");
    scanf("%d",&years);
    printf("your emi is %f per month",total/(years*12));
}