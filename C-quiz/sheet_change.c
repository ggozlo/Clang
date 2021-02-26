#include <stdio.h>

void main()
{
	int a[3][4]={0,};
	int b[4][3]={0,};
	int c=0,d=0;
	
	int i, j, cnt = 0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cnt++;
			a[i][j] = cnt;
		}
	}
	

	
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
		printf("\n");	
		
		
		
	for(i=0;i<4;i++)
	{

		for(j=0;j<4;j++)
		{

			if(d == 3)
			{
				c++; 
				d=0;
			}
			
			b[c][d] = a[i][j];
			
			d++;
		}

	}
	
		
	for(i=0;i<4;i++)	
		{
	for(j=0;j<3;j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	
}
