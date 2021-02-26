#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//윷놀이...랜덤함수 rand() 


void main()
{
 srand((int)time(NULL));
  int a,i, j=0,p=0;   //1,2,3,4,5 도개걸윷모  
  int lotto[6]= {0,}; 
  
  while(1)
	{
		a=rand() % 45 +1 ; // 1-45 
		
		
		for(i=0;i<=j;i++)
		{
			if(lotto[i] == a)
			p++; // 중복이 있는지 검출 
		}
		if(p == 0) 
		{
		 lotto[j]=a; // 중복이 없다면 입 력

		}
		else j--; 
		
		 j++;
		if(j == 6)
		break;
		

	}
	
	int temp;
	for(i=0;i<6;i++)
	{
			for(j=0;j<6;j++)
			{
				if(lotto[i]<lotto[j])
				{
					temp = lotto[i];
					lotto[i] = lotto[j];
					lotto[j] = temp;
				}
			}
	}
	

	
	for(i=0;i<6;i++)
		printf("%5d",lotto[i]);
}
