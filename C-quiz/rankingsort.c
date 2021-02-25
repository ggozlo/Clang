#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	int a[5][2] = {{78,0},{65,0},{99,0},{85,0},{79,0}};
	int i,j,r,p;
	int temp;
	
	//------------------------------------------------------
	for(i=0;i<5;i++)
	{
		r = 1;
		for(j=0;j<5;j++)
		{
			if(a[i][0] < a[j][0])	
			r++;

		}	
		a[i][1] =r;
	} 
	
	
		for(i=0;i<5;i++)
	{

		for(j=0;j<=1;j++)
		{
			printf("%5d", a[i][j]);
		}	

		printf("\n");
	} 
	
	//------------------------------------------------------
	printf("\n=====================================\n");
	
	for(i=0;i<5;i++)
	{
	
		for(j=0;j<5;j++)
		{	
			if(a[i][0] > a[j][0])	
			{
				for(p=0;p<=1;p++)
				{
					temp = a[i][p];
					a[i][p] = a[j][p];
					a[j][p] =temp; 
				}
			}	

		}	

	} 
	
		
	for(i=0;i<5;i++)
	{

		for(j=0;j<=1;j++)
		{
			printf("%5d", a[i][j]);
		}	

		printf("\n");
	} 
	

}

