#include<stdio.h>
int main()
{
    int f1=-1,f2=1,f3,i,length;
    printf("enter the length of series \t");
    scanf("%d",&length);
    for (i=0;i<length;i++){
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
    }
    return 0;

}