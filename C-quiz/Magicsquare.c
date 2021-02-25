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
		a[r][c] =k; // 0행 2열 1입력
		na = k%5; // k 가 5의 배수인지 확인 
		
		if ( na == 0) // k 가 5의 배수라면 
		{
			r++;
		}
		else 
		{
			r -- ; // 행은 감소 
			c ++ ; // 열은 증가 
			if(r<0) r = 4 ; // 행은 -행은 없음 마지막행 4행 
			if(c>4) c = 0 ; // 
		}
	}
	
	// 마방진 검사 
	for(i=0;i<=4;i++)
  {
     for(j=0;j<=4;j++)
     {
       a[i][5]=a[i][5]+a[i][j];//행의 합 
 	   a[5][j] =a[5][j] + a[i][j];//열의 합 
 	   a[5][5] += a[i][j]; //전체합  
     }

  } 
	
	
for(i=0;i<=5;i++)
{
    	 for(j=0;j<=5;j++)
   		{
        	printf("%5d",a[i][j]); 
        
  	 	}
    printf("\n");//줄바꿈표시
    printf("\n");//줄바꿈표시 
} 




   
}
