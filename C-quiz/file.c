// ����ü : ������ �ٸ� �ڷ���� �ϳ��� ���� 

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
	
	FILE *fp = fopen("./grade.txt","r"); // ���� ����, ���� ������ �� �� 
	
	int i=0;
	while(	EOF != fscanf(fp,"%s %d %d %d",&a[i].name,&a[i].kor,&a[i].eng,&a[i].mat) ) // ������ �� ���� ������ �б�  
	{ // EOF : End Of File
		i++; // �� ī���� 
	}
	int num = i;
	for(i=0;i<num;i++) // Ĳ��Ʈ �� �� ��ƴ �� �� 
	{
		a[i].tot = a[i].kor + a[i].mat + a[i].eng;
	 	a[i].avg = (float)a[i].tot / 3 ;
	}
	
	printf("�̸�\t����\t����\t����\t����\t���\n");
	printf("=========================================================\n"); 
	for(i=0;i<num;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", a[i].name, a[i].kor, a[i].eng, a[i].mat, a[i].tot, a[i].avg);
	}
}	

