#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{

	int x ;
	printf("���̸� �����Ͻÿ�(Ȧ���Է�) :");
	scanf("%d", &x);
		int a[x+1][x+1];
 	
	
	int  cnt =0, i, j ;
	int	s = x /2 +1 ;
	

		for(j = 0 ; j <= x ; j++)
		{
			for(i = 0 ; i <= x ; i++)
			{

				if( x/2 - s < i && i < x/2 +s)
				{
					cnt ++  ;			
					a[i][j] =cnt ;
				}
				else
				{
					a[i][j] = 0;					
				}

			}
			(j < x/2 )? s -- : s++ ;
			
			
		}
//���
for(i=0;i<=x -1;i++)
{
    	 for(j=0;j<=x-1;j++)
   		{
        	printf("%5d",a[i][j]); 
        
  	 	}
    printf("\n");//�ٹٲ�ǥ��
    printf("\n");//�ٹٲ�ǥ�� 
} 

   
}
