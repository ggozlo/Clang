#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{

 	int x ;
 	printf("정사각형의 변의 길이를 지정하시오 :");
 	scanf("%d", &x);
 	int a[x+1][x+1];	
 	

	int  cnt =0, i, j ;
	int  m= 0, r=x/2, l = x/2 ; 
	int	s =1 ;

	while(cnt < x * x )
	{
		for(j = 0 ; j <= m ; j++)
		{
			cnt ++ ;
			a[l][r] = cnt ;
			r = r-s;
		}

		for(i = 0 ; i <= m ; i++)
		{

			cnt ++ ;
			a[l][r] = cnt ;
			l = l+s;
		}
		s = s *-1 ;
		m += 1;
	}

//출력
for(i=0;i<=x-1;i++)
{
    	 for(j=0;j<=x-1;j++)
   		{
        	printf("%5c",a[i][j] + 64); 
        
  	 	}
    printf("\n");//줄바꿈표시
    printf("\n");//줄바꿈표시 
} 

   
}
