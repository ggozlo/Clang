#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 급여 계산기 
//1. 자동판매기를 시뮬레이션하는 파이썬 프로그램을 작성하여 보자. 
//사용자는 1000원짜리 지폐와 500원짜리 동전, 100원짜리 동전을 사용할 수 있다. 
//물건값을 입력하고 1000원권, 500원짜리 동전, 100원짜리 동전의 개수를 입력하면 거스름돈을 계산하여서 동전으로 반환한다. 
//(예)
//물건값을 입력하시오: 750
//1000원 지폐개수: 1
//500원 동전개수: 0
//100원 동전개수: 0
//500원= 0 100원= 2 10원= 5 1원= 0
void main()
{
	int pay[3], price, payed_money ,money[5] = {1000, 500, 100,10,1};
	int change[5], quantity[5];
	int i ;
	
	printf("가격을 입력하세요 :");
	scanf("%d", &price);
	

	
	printf("1000원권 수를 입력하세요 :");
	scanf("%d", &pay[0]);
	
	printf("500원동전 수를 입력하세요 :");
	scanf("%d", &pay[1]);
	
	printf("100원동전 수를 입력하세요 :");
	scanf("%d", &pay[2]);
	
	for(i=0; i<3; i++)
	{
		payed_money += money[i] * pay[i] ;
	}
	
	if(payed_money > price) 
	{
		change[0] = payed_money - price ;
		for(i=0;i<5;i++)
		{
			quantity[i] = change[i] / money[i];
			change[i+1] = change[i] % money[i];
		}
		
		for(i=0;i<5;i++)
		{
			printf("반환될 금액-%10d ->  %5d : %3d == %d\n",change[i], money[i],quantity[i] , money[i] * quantity[i]);
		}
	}
	else if (payed_money == price) printf("결제완료!");
	else printf(" 금액이 부족합니다! (%d원 부족)", price - payed_money);
}


