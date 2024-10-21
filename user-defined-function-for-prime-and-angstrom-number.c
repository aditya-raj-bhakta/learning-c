#include<stdio.h>
int isprime(int number)
{
    int i,s=1;
    if (number<=0)
    {s=-1;}
    else{
    for (i=2;i<number;i++)
    {
        if (number%i==0)
        {
            s=0;
            break;
        }
    }}
    return s;
}
int isangstrom(int number)
{   int num,angstrom=0,rem;
    num=number;
    while(1) 
    {
        if(num==0)
        {break;}
        else
         {rem=num%10;
          num=num/10;
          angstrom=angstrom+(rem*rem*rem);
         }
    }
    if (angstrom==number){
        return 1;
    } 
    else{
        return 0;
    }
}

int main(){
    int number,check;
    printf("enter your number\t");
    scanf("okok %d",&number);
    check=isprime(number);
    if (check==1)
    {printf("given number is not prime\n");}
    else if(check==-1)
    {printf("number is invalid");}
    else{printf("number is prime\n ");}

    //checking for angstrom
    if(check!=-1)
    {if (isangstrom(number)){
        printf("given number is an angstrom number ");
    }
    else{printf("given number is not angstrom number ");}}
}