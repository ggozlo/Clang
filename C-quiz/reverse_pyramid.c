#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{

	int x ;
	printf("���̸� �����Ͻÿ�(Ȧ���Է�) :");
	scanf("%d", &x);
 	int a[x][x];
	
	int  cnt =0, i, j, c,d ;
	int	s =1;


		for(i = x -1 ; i >= 0 ; i--)
		{
			for(j = x -1 ; j >= 0 ; j--)
			{

				if(x - s <=j )
				{
					cnt ++ ;			
					a[i][j] =cnt + 64;
				}
				else
				{
					a[i][j] =0;
				}
				
			}
			s++;
		}
//���
for(i=0;i<=x -1 ;i++)
{
    	 for(j=0;j<=x -1;j++)
   		{
        	printf("%5c",a[i][j]); 
        
  	 	}
    printf("\n");//�ٹٲ�ǥ��
    printf("\n");//�ٹٲ�ǥ�� 
} 

   
}
