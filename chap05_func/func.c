/*
* Project: chap05-funcitons
* Module : chap05-function-01.c
*/
#include <stdio.h>

/*
* �Լ�����(declare) : �Լ��� ������Ÿ��
*/
void printx(int x);
void print();
int sum(int value1, int value2);
int minus(int, int);

void main(void)
{
	printf("main function!\n");
	// print(); // �Լ�ȣ��
	// printx(10.1f); // �ڷ�ҽ� �߻�, �ڷ����� ��ġ ���Ѿ� ��
	int result = sum(50, 10); // ȣ����(caller)
	printx(result);
	int result_minus = minus(10, 50);
	printx(result_minus);
	printx(minus(100, 30));
}

/*
* int sum(int, int)
*/
int sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}

int minus(int value1, int value2)
{
	int result = value1 - value2;
	return result;
	result = result + 99; // �����ڵ�
}

void printx(int x)
{
	printf("printx: result(%d)!\n", x);
}

/*
* �Լ�����:��ü, ������ ���
*/
void print(void)
{
	printf("print function!\n");
}

