/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------

功能：对于10个整数，从小到大排序，再输入一个整数，插入到有序数组中，
      使数组仍保持有序。

-------------------------------------------------------*/
#include<stdio.h>
#define N 10
int main( )
{  int i,j,temp,x;
   int a [N+1]={55, 2, 6, 4, 32, 9, 12 , 34, 22, 12};
   for( i=0; i<N; i++)  printf("%d ",a[i]);
   printf("\n ");
   for( i=1;i<=N-1; i++)
/***********SPACE***********/
    for( j=0;【?】; j++)  
       if(a[j]>a[j+1])
        {  temp=a[ j]; a[ j]=a[ j+1]; a[ j+1]=temp;  }
   for(i=0; i<N; i++)  printf("%d  ",a [i]);
   printf("\n ");
   scanf("%d",&x);
   i=N-1;
/***********SPACE***********/
   while(【?】) 
   {  a[i+1]=a[i];  i-- ;  }
/***********SPACE***********/
       【?】;  
   for(i=0; i<=N;i++)  printf("%d  ",a [i]);
  return 0;
}
