
# include <stdio.h>
# include <string.h>

int getTotal();
float getAverage();

struct Student
{
	char name[10] ; 
	int ban, no,kor,eng,math ;
};

void main()
{

	struct Student a1 = { 
	"Kim", 1, 2, 5, 4, 5
	};
	FILE *fp = fopen("./a.txt","w");
	fprintf(fp,"�̸�: %s\n��: %d\n��ȣ: %d\n����: %d\n����: %d\n����: %d\n����: %d\n���: %.1f"
	,a1.name,a1.ban,a1.no,a1.kor,a1.eng,a1.math,getTotal(a1),getAverage(a1));
}
int getTotal(struct Student a)
{
	int tot;
	tot = a.kor + a.eng + a.math;
//	printf("%d",tot);
	return tot ;
}
float getAverage(struct Student a)
{
	float avg;
	avg = a.kor + a.eng + a.math / 3.;
//	printf("%.1f",avg );
	return avg;
}
