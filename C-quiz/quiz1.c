# include <stdio.h>

void main()
{
	int i, sum =0; 
	
	for(i=0;i<=20;i++)
	{
		if( i % 2 != 0 && i % 3 != 0)
		{
			sum += i;
		}
	}
	
	printf("%d", sum);
