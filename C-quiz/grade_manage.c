#include <stdio.h>

void main()
{
	char name[5][10] ={0,};
	char subjects[4][10] = {"국어", "영어", "수학", "도덕"} ;
	int score[5][5] = {0,};
	int i, j, cnt;
	
	for(i=0;i<4;i++)
	{
		printf("이름을 입력하시오 :");
		scanf("%s", &name[i]);
		for(j=0;j<4;j++)
		{
			printf("%s 점수를 입력하시오 :", subjects[j]);
			scanf("%d", &score[i][j]) ;
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			score[i][4] += score[i][j];
			score[4][j] += score[i][j];
			score[4][4] += score[i][j];

		}
		cnt = 0;
	}
	score[4][4] =	score[4][4] / 4 ;

	printf("\n==============================================================\n"); 
	printf("이름\t 국어\t영어\t수학\t도덕\t학생총점");
	printf("\n==============================================================\n"); 
	
	for(i=0;i<5;i++)
	{
			if(i == 4) printf("과목총점 ");
			else printf("%3s\t ", name[i]);
	
		for(j=0;j<5;j++)
		{
			printf("%3d\t", score[i][j]);

		}
		printf("\n");
	}
	
	
}
