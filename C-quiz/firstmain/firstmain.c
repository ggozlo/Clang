#include <stdio.h>
#include "./Magicsquare.h"
#include "./rhombus.h"
#include "./snail.h"
void main()
{	
	int  s;
	char q;
	
	while(1)
	{
		printf("\n1. ������\n");
		printf("2. ������\n");
		printf("3. ������\n");
		
		printf(" ���ϴ� ��ȣ�� �����ÿ� ");
		scanf("%d", &s); 
		fflush(stdin);
		
		switch(s)
		{
			case 1:
				func_Magician();
				break;
			case 2:
				func_rhombus();
				break;
			case 3:
				func_snail();
				break;	
			default:
				printf("�Է¿���\n");
		}
		
		printf("�۾��� ��� �ұ��?(Y/N)");
		int q = getchar();
		if( q == 'N' || q == 'n')
			break;
			
	}
}


