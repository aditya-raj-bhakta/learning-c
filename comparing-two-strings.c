#include<stdio.h>
int main(){

    char a[50],b[50];
    printf("enter the first string \t");
    scanf("%s",&a);
    printf("enter the second string \t");
    scanf("%s",&b);


    int x,count=0;
    for(x=0;(a[x]!='\0')&&(b[x]!='\0');x++)
    {   if (a[x]==b[x])
         {continue;}
        else 
        {printf("not same ");
         count++;
         break;
        }

    }
    if (count==0)
    {printf("same");}
}