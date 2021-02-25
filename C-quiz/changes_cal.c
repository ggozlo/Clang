#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void main()
{
	int pay, money[10] = {50000, 10000, 5000, 1000, 500, 100, 50, 10, 5 , 1};
	int change[10], quantity[10];
	int i ;
	
	printf(" 금액를 입력하시오 :");
	scanf("%d", &pay) ;
	
	change[0] = pay ;
	 
	for(i=0;i<10;i++)
	{
		quantity[i] = change[i] / money[i];
		change[i+1] = change[i] % money[i];
	}
	
	
	for(i=0;i<10;i++)
	{
		printf("%10d ->  %5d : %3d == %d\n",change[i], money[i],quantity[i] , money[i] * quantity[i]);
	}

}


