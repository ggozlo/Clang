#include <stdio.h>
// ������ :���� => ���� ���
// �� -- ���� --char 
// ���� -- ���� -- int 
// 			�Ǽ� -- double
// �ּ� - * 
void main()
{

	int a[5] = {10,20,30,40,50};
	
	int sum = callhap(a, sizeof(a)/ sizeof(int));
	printf("�� = %d\n", sum);
}

int callhap(int *p, int su)
{
	int sum=0,i ;
	for (i=0;i<su;i++)
	{
		sum+=p[i];
	}
	return sum;
}
