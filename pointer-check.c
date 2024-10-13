#include<stdio.h>

int main()

{

int i,x,j;

/*for(j=1;j<=3;j++)

{

   for(i=1;i>=3-j;i++)
      { printf("\t s");}
   for (p=1;p<=(2*j);p++)
     {  printf("*");}
   printf("\n");
}
return 0;

}
void *pointer;
pointer=&i;
printf("%d",*(int*)pointer);*/
int a=2;
int *p=&a;
int *p1;
p1=p;
p1=p1+3;
printf("%d",p1-p);}