func_rhombus()
{
	int a[20][20] = {0,};
	int x ;
	printf("높이를 지정하시오(홀수입력) :");
	scanf("%d", &x);
 	
 	
	
	int  cnt =0, i, j ;
	int	s =1;
	

		for(i = 0 ; i <= x ; i++)
		{
			for(j = 0 ; j <= x ; j++)
			{

				if( x/2 - s < j && j < x/2 +s)
				{
					cnt ++ ;			
					a[i][j] =cnt;
				}
				else
				{
					continue;					
				}


			}
			(i < x/2 )? s ++ : s-- ;
			
			
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
