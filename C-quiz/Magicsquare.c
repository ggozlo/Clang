#include <stdio.h>
void main()
{
   int n;
   printf("���ϴ� ��?");
   scanf("%d",&n);
   int a[n][n];
   int r=n/2,c=0,k,na,i,j;   
   for(k=1;k<=n*n;k++)
   {
      a[r][c]=k;
      
      na = k % n ; //5�� ����� 
      if(na==0)
        c++;  //��++
      else
      {
      r--;
      c--;   
        }  
        
      if(r<0)
          r=n-1;
      if(c<0)
         c=n-1;  
      
   }   
   
   //
   for(i=0;i<n;i++)//�� 
   {
      for(j=0;j<n;j++)
      {
         printf("%5d",a[i][j]);
      }
      printf("\n");
   }      
}
