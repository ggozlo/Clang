#include <stdio.h>
// ������ :���� => ���� ���
// �� -- ���� --char 
// ���� -- ���� -- int 
// 			�Ǽ� -- double
// �ּ� - * 

int swap();

void main()
{
	int a = 10, b = 20, c = 30;
	printf(" %d %d %d\n", a, b, c);	
	swap(&a, &b, &c);
	printf(" %d %d %d\n", a, b, c);
}

int swap(int *ap,int  *bp,int  *cp)
{
	int temp;
	temp = *ap ; 
	*ap = *cp ;
	*cp = *bp ;
	* bp = temp; 

	return *ap , * bp, *cp ;
	
}


