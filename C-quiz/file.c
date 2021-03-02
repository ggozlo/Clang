// 구조체 : 잘형이 다른 자료들을 하나로 저장 

#include <stdio.h>
#include <string.h>
typedef struct Personal
{ 
	char name[10];
	int kor, eng, mat, tot;
	double avg;
}grade;

void main()
{
	grade a[1000] ;
	
	FILE *fp = fopen("./grade.txt","r"); // 파일 오픈, 파일 포인터 지 정 
	
	int i=0;
	while(	EOF != fscanf(fp,"%s %d %d %d",&a[i].name,&a[i].kor,&a[i].eng,&a[i].mat) ) // 파일의 끝 까지 데이터 읽기  
	{ // EOF : End Of File
		i++; // 행 카운터 
	}
	int num = i;
	for(i=0;i<num;i++) // 캉누트 된 행 만틈 실 행 
	{
		a[i].tot = a[i].kor + a[i].mat + a[i].eng;
	 	a[i].avg = (float)a[i].tot / 3 ;
	}
	
	printf("이름\t국어\t영어\t수학\t총점\t평균\n");
	printf("=========================================================\n"); 
	for(i=0;i<num;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", a[i].name, a[i].kor, a[i].eng, a[i].mat, a[i].tot, a[i].avg);
	}
}	

