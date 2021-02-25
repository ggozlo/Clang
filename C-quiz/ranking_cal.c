#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	char name [5][10], subject[3][10] = {"국어", "영어", "수학"} , t_name[10];
	int score [5][7] = {0,}, temp;
	int i, j ,r, tot=0, ra, p;
	 
	for(i=0;i<=4;i++)
	{
	printf("이름을 입력하시오 :");
	scanf("%s", &name[i]);
		for(j=0;j<=2;j++)
		{
			printf("%s성적을 입력하시오 :", subject[j]);
			scanf("%d", &score[i][j]);
		}
		printf("이름: %s   국어: %d   영어: %d   수학: %d\n\n",name[i], score[i][0],score[i][1],score[i][2] ) ;
	}
	
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=6;j++)
		{
				if(j<3)	score[i][3] += score[i][j];
				if(j==4)  score[i][4] =score[i][3] / 3;
				if(score[i][4] >= 90) score[i][5] = 65;  
				else if(score[i][4] >= 80) score[i][5] = 66;  
				else if(score[i][4] >= 70) score[i][5] = 67;
				else if(score[i][4] >= 60) score[i][5] = 68;
				else score[i][5] = 70;      
		}
	}
	
	for(i=0;i<5;i++)
	{
		ra = 1;
		for(j=0;j<5;j++)
		{
			if(score[i][3] < score[j][3])
			{
				ra++;
				
			}
		}
		score[i][6] = ra;
	}
	
	
// 석차순 정렬		
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(score[i][3] > score[j][3])
//			{
//				strcpy(t_name,name[i]);
//				strcpy(name[i],name[j]);
//				strcpy(name[j],t_name);
//				
//				for(p=0;p<=6;p++)
//				{
//				temp = score[i][p];
//				score[i][p] = score[j][p];
//				score[j][p] = temp;
//				}
//			}
//		}
//	}
	
	
// 이름순 정 렬 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(strcmp(name[i],name[j]) < 0 ) // 두 이름을 비교해 뒤 이름이 더 크다면  위치를 서로 바꾼  다 
			{
				strcpy(t_name,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],t_name);
				
				for(p=0;p<=6;p++)
				{
				temp = score[i][p];
				score[i][p] = score[j][p];
				score[j][p] = temp;
				}
			}
		}
	}
		
	
	printf("=============================================================\n");
printf("이름\t 국어\t 영어\t 수학\t 총점\t 평균\t 학점\t 석차 \n");
printf("=============================================================\n");
	for(i=0;i<=4;i++)
	{
	printf("%3s:", name[i]);
		for(j=0;j<=6;j++)
		{
		if(j == 5) 		printf("\t%3c", score[i][j]);
		else printf("\t%3d", score[i][j]);
		}
	printf("\n");
	}
	

}


