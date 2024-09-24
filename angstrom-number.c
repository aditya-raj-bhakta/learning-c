#include<stdio.h>
#include<math.h>
int main()
{
    int num,b,rem,angstrom=0;
    float cube;
    printf("enter your number to check if it is angstrom or not \n");
    scanf("%d",&num);
    b=num;



    //calculating angstrom
    for(;;)
    {  if(b!=0)
        {rem=b%10;
        cube=pow(rem,3);
        angstrom=angstrom+(int)cube;
        b=b/10;}
       else {break;}
    }



    //checking condition
    if(angstrom==num)
    {printf("angstrom");}
    else
    {printf("not a angstrom");}
}