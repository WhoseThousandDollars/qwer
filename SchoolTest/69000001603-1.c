/*【程序改错】将整型数组中所有小于0的元素放到所有大于0的元素的前面（要求只能扫描数组一次）。
下面给定的程序存在错误，请改正。注意：不得增行或删行，也不得更改程序的结构。*/
#include<stdio.h>
#define Max 100
void fun(int a[],int n)
{
  /**********FOUND**********/
  int i=5;j=n-1,temp;
  while(i<j)
  {
    while(a[i]<0)
    i++;
    while(a[j]>=0)
      /**********FOUND**********/
      j++;
    /**********FOUND**********/
    if(i>j)
    { 
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
}

void main()
{
  int a[]={1,-3,-1,3,2,4,-4,5,-5,-2},n=10,i;
  fun(a,n);
  for(i=0;i<10;i++)
  printf("%d ",a[i]);
}
