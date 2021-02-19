#include<stdio.h>

void intarith();
void floatarith();

void main()
{
	intarith();
	floatarith();

}

void intarith()
{
	int data1 = 5, data2 =  3;

	int result1 = data1 + data2;
	int result2 = data1 - data2;
	int result3 = data1 / data2;
	int result4 = data1 % data2;

	printf(" Result: %d, %d, %d, %d\n", result1, result2, result3, result4);

}

void floatarith()
{
	float data1 = 5, data2 = 3;

	float result1 = data1 + data2;
	float result2 = data1 - data2;
	float result3 = data1 / data2;
	
	printf(" Result: %f, %f, %f\n", result1, result2, result3);

}