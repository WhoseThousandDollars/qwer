/*------------------------------------------------------    
【程序改错】
--------------------------------------------------------

功能：编写函数求2!+4!+6!+8!+10+12!+14!。

------------------------------------------------------*/

#include <stdio.h>

long  sum(int n)
{
  /**********FOUND**********/
  int i,j
  long   t,s=0;
  /**********FOUND**********/
  for(i=2;i<=n;i++) 
  {
    t=1;
    for(j=1;j<=i;j++)
    t=t*j;
    s=s+t;
  }
  /**********FOUND**********/
  return(t);
}
main()
{
  printf("this sum=%ld\n",sum(14));
}
