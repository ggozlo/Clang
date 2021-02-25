#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	int a[20][20] = {0,};
	int x ;
	printf("높이를 지정하시오(홀수입력) :");
	scanf("%d", &x);
 	fflush(stdin);
 	
	
	int  cnt =0, i, j ;
	int	s = x /2 +1 ;
	

		for(j = 0 ; j <= x ; j++)
		{
			for(i = 0 ; i <= x ; i++)
			{

				if( x/2 - s < i && i < x/2 +s)
				{
					cnt ++ ;			
					a[i][j] =cnt;
				}
				else
				{
					continue;					
				}


			}
			(j < x/2 )? s -- : s++ ;
			
			
		}
//출력
for(i=0;i<=x -1;i++)
{
    	 for(j=0;j<=x-1;j++)
   		{
        	printf("%5d",a[i][j]); 
        
  	 	}
    printf("\n");//줄바꿈표시
    printf("\n");//줄바꿈표시 
} 

   
}
