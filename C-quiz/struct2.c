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
	grade a[3] = {{"kim", 25,66,67},{"Park",77,88,99},{"Moon", 67,78,99}};
	
	int i;
	for(i=0;i<3;i++)
	{
		a[i].tot = a[i].kor + a[i].mat + a[i].eng;
	 	a[i].avg = (float)a[i].tot / 3 ;
	}
	
	printf("이름\t국어\t영어\t수학\t총점\t평균\n");
	printf("=========================================================\n"); 
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", a[i].name, a[i].kor, a[i].eng, a[i].mat, a[i].tot, a[i].avg);
	}
}	

