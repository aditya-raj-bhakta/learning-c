#include<stdio.h>
int main()
{
    int num,reverse,b,rem;
    printf("enter your number");
    scanf("%d",&num);
    b=num;
    reverse=0;


    //finding reverse
    for (;;)
     {  if (b!=0){
          rem=b%10;
          reverse=reverse*10+rem;
          b=b/10;}
        else
           {break;}
     }

    // printing reverse
    printf("reverse of %d is  %d\n",num,reverse);


     //checking for palindrom
     if (num==reverse)
     {
        printf("palindrom");
     }
     else{
        printf("not a palindrom");
     }
    
}