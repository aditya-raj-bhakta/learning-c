#include<stdio.h>
#include<math.h>
int main(){
    int r1,r2,c1,c2,x,y,z;
    printf("enter the number of rows and column for matrix A:\t");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of rows and column for matrix B:\t");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1],B[r2][c2],diff[r1][c1];
    if(r1!=r2||c1!=c2)
      {
        printf("difference not possible!");
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
          { diff[x][y]=0;
            diff[x][y]=A[x][y]-B[x][y];

           } 
         }
        for (x=0;x<r1;x++)
        { for (y=0;y<c2;y++)
             { printf("the element at (%d,%d) for diffrence %d \n",x,y,diff[x][y]);}
    }

    
    }
    }