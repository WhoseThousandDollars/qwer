/*------------------------------------------------------        
������Ĵ���
--------------------------------------------------------

���ܣ������У���һ��ֵΪ3����һ���ǰһ���ֵ��5�����и����������ǰ
      n(4<n<50)����ۼӺͣ����ۼӹ����а���Щ��4������2�ĵ�ǰ�ۼ�ֵ����
      �����У�������ϴ��������ۼ�ֵ�����磬��n��ֵΪ20ʱ��������Ϊ
      3��8��l3��18��23��28������93��98�����ϴ��������ۼ�ֵӦΪ
      42��126��366��570��1010��
      ����������еĴ���ʹ���ܵó���ȷ�Ľ����
      ע�⣺�������л�ɾ�У�Ҳ���ø��ĳ���Ľṹ��

------------------------------------------------------*/
#include <stdio.h>
#define  N  50
int main()
{
        int a[N],d=0,n,i, k,sum;
        printf("\nEnter n (4<n<=50); ");
        scanf("%d",&n);
        sum=0;
        for(k=3,i=0;i<n;i++,k+=5)
        { 
sum=sum+k;
/***********FOUND***********/
           if(sum%4==2)    
              a[d++]=sum;
        }
        printf("\n\nThe result :\n");
/***********FOUND***********/
        for(i=0; i<n/4; i++)printf("%6d",a[i]); 
        printf("\n\n");
}
