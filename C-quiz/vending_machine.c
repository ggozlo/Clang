#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// �޿� ���� 
//1. �ڵ��Ǹű⸦ �ùķ��̼��ϴ� ���̽� ���α׷��� �ۼ��Ͽ� ����. 
//����ڴ� 1000��¥�� ����� 500��¥�� ����, 100��¥�� ������ ����� �� �ִ�. 
//���ǰ��� �Է��ϰ� 1000����, 500��¥�� ����, 100��¥�� ������ ������ �Է��ϸ� �Ž������� ����Ͽ��� �������� ��ȯ�Ѵ�. 
//(��)
//���ǰ��� �Է��Ͻÿ�: 750
//1000�� ���󰳼�: 1
//500�� ��������: 0
//100�� ��������: 0
//500��= 0 100��= 2 10��= 5 1��= 0
void main()
{
	int pay[3], price, payed_money ,money[5] = {1000, 500, 100,10,1};
	int change[5], quantity[5];
	int i ;
	
	printf("������ �Է��ϼ��� :");
	scanf("%d", &price);
	

	
	printf("1000���� ���� �Է��ϼ��� :");
	scanf("%d", &pay[0]);
	
	printf("500������ ���� �Է��ϼ��� :");
	scanf("%d", &pay[1]);
	
	printf("100������ ���� �Է��ϼ��� :");
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
			printf("��ȯ�� �ݾ�-%10d ->  %5d : %3d == %d\n",change[i], money[i],quantity[i] , money[i] * quantity[i]);
		}
	}
	else if (payed_money == price) printf("�����Ϸ�!");
	else printf(" �ݾ��� �����մϴ�! (%d�� ����)", price - payed_money);
}


