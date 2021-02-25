#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	int a[50][50] = {0,};
 	int x ;
 	printf("정사각형의 변의 길이를 지정하시오 :");
 	scanf("%d", &x);
 	
 	

	int  cnt =0, i, j ;
	int  m= x-1, r=-1, l = 0 ; 
	int	s =1 ;

	while(cnt < x * x )
	{
		for(j = 0 ; j <= m ; j++)
		{
			cnt ++ ;
			r = r+s;			
			a[l][r] = cnt ;

		}
		m -= 1;
		
		for(i = 0 ; i <= m ; i++)
		{

			cnt ++ ;
			l = l+s;
			a[l][r] = cnt ;
		}
		s = s *-1 ;

	}

//출력
for(i=0;i<=x-1;i++)
{
    	 for(j=0;j<=x-1;j++)
   		{
        	printf("%5d",a[i][j]); 
        
  	 	}
    printf("\n");//줄바꿈표시
    printf("\n");//줄바꿈표시 
} 

   
}
