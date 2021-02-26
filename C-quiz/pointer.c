#include <stdio.h>
// 포인터 :변수 => 값을 기억
// 값 -- 문자 --char 
// 숫자 -- 정수 -- int 
// 			실수 -- double
// 주소 - * 
void main()
{

	int a[5] = {10,20,30,40,50};
	
	int sum = callhap(a, sizeof(a)/ sizeof(int));
	printf("합 = %d\n", sum);
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
