#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	int a[6][6] = {0,};
	int r=0, c=2,k, na;
	int i, j;
	for(k=1;k<=25;k++)
	{
		a[r][c] =k; // 0�� 2�� 1�Է�
		na = k%5; // k �� 5�� ������� Ȯ�� 
		
		if ( na == 0) // k �� 5�� ������ 
		{
			r++;
		}
		else 
		{
			r -- ; // ���� ���� 
			c ++ ; // ���� ���� 
			if(r<0) r = 4 ; // ���� -���� ���� �������� 4�� 
			if(c>4) c = 0 ; // 
		}
	}
	
	// ������ �˻� 
	for(i=0;i<=4;i++)
  {
     for(j=0;j<=4;j++)
     {
       a[i][5]=a[i][5]+a[i][j];//���� �� 
 	   a[5][j] =a[5][j] + a[i][j];//���� �� 
 	   a[5][5] += a[i][j]; //��ü��  
     }

  } 
	
	
for(i=0;i<=5;i++)
{
    	 for(j=0;j<=5;j++)
   		{
        	printf("%5d",a[i][j]); 
        
  	 	}
    printf("\n");//�ٹٲ�ǥ��
    printf("\n");//�ٹٲ�ǥ�� 
} 




   
}
