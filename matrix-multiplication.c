#include<stdio.h>
#include<math.h>
int main(){
    int r1,r2,c1,c2,x,y,z;
    printf("enter the number of rows and column for matrix A:\t");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of rows and column for matrix B:\t");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1],B[r2][c2],product[r1][c2];
    if(c1!=r2)
      {
        printf("product not possible!");
      }
    else
    {  for (x=0;x<r1;x++)
        { for (y=0;y<c1;y++)
          { printf("enter element at (%d,%d) for matrix A\t",x,y);
            scanf("%d",&A[x][y]);
          }
           }
        for (x=0;x<r1;x++)
        { for (y=0;y<c1;y++)
          { printf("enter element at (%d,%d) for matrix B\t",x,y);
            scanf("%d",&B[x][y]);
          }
           }  
        for (x=0;x<r1;x++)
        { for (y=0;y<c2;y++)
            {product[x][y]=0;
           for (z=0;z<c1;z++)
            {
             product[x][y]+=A[x][z]*B[z][y];
            }}}
        

    }
        for (x=0;x<r1;x++)
        { for (y=0;y<c2;y++)
             { printf("the element at (%d,%d) for product %d \n",x,y,product[x][y]);}
        }






}