// C ǥ�� ���̺귯���� ǥ�� ��� �Լ� 
// puts ( char , const _buffer)
// const : constant : ���, �Һ�
// variable : ����
#include <stdio.h>

#define TITLE "c���"

// putx(char const* str)
// str : �߷��ϰ��� �ϴ� ���ڿ� 
// return : ����
void putx(char const* str)
{
	puts(str);

	//str[0] = 'X'; // const�� ������ ������ ���� �Ұ�
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar(str[5]);
	putchar('\n');


}

void putv(char* str)
{
	puts(str);
	str[0] = 'X';
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar(str[5]);
	putchar(str[6]);
	putchar(str[7]);
	putchar('\n');

}


void main()
{

	printf("%s\n", TITLE);

	char* first = "first";
	//char first[] = "first"; // ���� ������ŭ�� �迭�� �����Ͽ� ����
	putx(first);

	char second[] = "second";
	// second���� �����
	putv(second);
	puts(second); 
}
