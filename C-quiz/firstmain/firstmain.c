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
		printf("\n1. 마방진\n");
		printf("2. 마름모\n");
		printf("3. 달팽이\n");
		
		printf(" 원하는 번호를 누르시오 ");
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
				printf("입력에러\n");
		}
		
		printf("작업을 계속 할까요?(Y/N)");
		int q = getchar();
		if( q == 'N' || q == 'n')
			break;
			
	}
}


