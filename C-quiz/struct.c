// ����ü : ������ �ٸ� �ڷ���� �ϳ��� ���� 

#include <stdio.h>
#include <string.h>
typedef struct Personal
{ 
	char name[10];
	int age;
}korea;

void main()
{
	struct Personal k1={"�Ѷ��", 33};
	printf("�̸� : %s\n",k1.name ); 
	printf("���� : %d\n", k1.age); 
	
	
	korea k2={"ȫ�浿", 20};
	printf("�̸� : %s\n",k2.name ); 
	printf("���� : %d\n", k2.age); 
	
	korea temp; 
	temp = k1;
	k1 = k2 ; 
	k2 = temp;�� 
	printf("�̸� : %s\n",k1.name ); 
	printf("���� : %d\n", k2.age); 
	printf("�̸� : %s\n",k2.name ); 
	printf("���� : %d\n", k2.age); 
	
	strcpy(k2.name, "��λ�"); 
	printf("�̸� : %s\n",k2.name ); // ������ٿ����� 
	printf("���� : %d\n", k2.age); 
	
	// ����ü �迭 
	korea a[3] = {{"�̼���", 44}, {"����", 22}, { "����", 11}};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s, %d\n",a[i].name, a[i].age);
	 } 
	 
	 
	korea *pp ;
	pp = &k1;
	
	printf("�̸� : %s\n",pp->name ); // ����ü ������ �� 
}

