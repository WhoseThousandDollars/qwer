/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------

功能：产生并输出杨辉三角形的前七行。

     1
     1     1
     1     2     1
     1     3     3     1
     1     4     6     4     1
     1     5    10    10     5     1
     1     6    15    20    15     6     1

-------------------------------------------------------*/
#include <stdio.h>
void main ( )
{
  int a[7][7];
  int i,j;
  for (i=0;i<7;i++)
  {
     a[i][0]=1; 
     /***********SPACE***********/    
     a[i][i]=1;
  }
  for (i=2;i<7;i++)
    /***********SPACE***********/
    for (j=1;j<i;j++)
      /***********SPACE***********/
      a[i][j]=a[i-1][j-1]+a[i-1][j];
  for (i=0;i<7;i++)
  {
     /***********SPACE***********/
     for (j=0;j<=i;j++)
       printf("%6d",a[i][j]);
       printf("\n");
   }
}
