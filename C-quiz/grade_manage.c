#include <stdio.h>

void main()
{
	char name[5][10] ={0,};
	char subjects[4][10] = {"����", "����", "����", "����"} ;
	int score[5][5] = {0,};
	int i, j, cnt;
	
	for(i=0;i<4;i++)
	{
		printf("�̸��� �Է��Ͻÿ� :");
		scanf("%s", &name[i]);
		for(j=0;j<4;j++)
		{
			printf("%s ������ �Է��Ͻÿ� :", subjects[j]);
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
	printf("�̸�\t ����\t����\t����\t����\t�л�����");
	printf("\n==============================================================\n"); 
	
	for(i=0;i<5;i++)
	{
			if(i == 4) printf("�������� ");
			else printf("%3s\t ", name[i]);
	
		for(j=0;j<5;j++)
		{
			printf("%3d\t", score[i][j]);

		}
		printf("\n");
	}
	
	
}
