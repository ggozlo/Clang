#include <stdio.h>
void main()
{
   int n;
   printf("원하는 행?");
   scanf("%d",&n);
   int a[n][n];
   int r=n/2,c=0,k,na,i,j;   
   for(k=1;k<=n*n;k++)
   {
      a[r][c]=k;
      
      na = k % n ; //5의 배수면 
      if(na==0)
        c++;  //열++
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
   for(i=0;i<n;i++)//행 
   {
      for(j=0;j<n;j++)
      {
         printf("%5d",a[i][j]);
      }
      printf("\n");
   }      
}
