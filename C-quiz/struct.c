// 구조체 : 잘형이 다른 자료들을 하나로 저장 

#include <stdio.h>
#include <string.h>
typedef struct Personal
{ 
	char name[10];
	int age;
}korea;

void main()
{
	struct Personal k1={"한라산", 33};
	printf("이름 : %s\n",k1.name ); 
	printf("나이 : %d\n", k1.age); 
	
	
	korea k2={"홍길동", 20};
	printf("이름 : %s\n",k2.name ); 
	printf("나이 : %d\n", k2.age); 
	
	korea temp; 
	temp = k1;
	k1 = k2 ; 
	k2 = temp;조 
	printf("이름 : %s\n",k1.name ); 
	printf("나이 : %d\n", k2.age); 
	printf("이름 : %s\n",k2.name ); 
	printf("나이 : %d\n", k2.age); 
	
	strcpy(k2.name, "백두산"); 
	printf("이름 : %s\n",k2.name ); // 멤버접근연산자 
	printf("나이 : %d\n", k2.age); 
	
	// 구조체 배열 
	korea a[3] = {{"이순신", 44}, {"원균", 22}, { "권율", 11}};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s, %d\n",a[i].name, a[i].age);
	 } 
	 
	 
	korea *pp ;
	pp = &k1;
	
	printf("이름 : %s\n",pp->name ); // 구조체 포인터 참 
}

