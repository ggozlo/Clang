// printf() 함수 
#include <stdio.h>
#include <limits.h>
#define TITLE "c언어 (printf)"

#define MAX_CHAR	127
#define MAX_SHORT	32767
#define MAX_INT		2147483647
#define MAX_UCHAR	0xff
#define MAX_USHORT	0xffff
#define MAX_UINT	0xffffffff //4294967295

void printBasic();
void printWidth();
void printUnsigned();
void printunsignedChar();
void printOct();
void printHex();
void printExponet();
void printControlCode();

void main()
{
	printf("%s\n", TITLE);
	//printBasic();
	//printWidth();
	//printUnsigned();
	//printunsignedChar();
	//printOct();
	//printHex();
	//printExponet();
	printControlCode();
}


void printBasic()
{
	char ch = 'a';
	short st = 1234;
	int integer = 1234567890;
	float real = 0.123456f;
	double real2 = 0.123456789f;

	//format : % 는 기본 소수점 아래 6자리 까지 출력  %.(n)f 형식으로 확장 가능
	printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",ch, st, integer, real, real2);
	printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n", 'b', 4321, 987654321, 0.654321, 0.987654321);
}


void printWidth()
{
	char ch = 'a';
	short st = 1234;
	int integer = 1234567890;
	float real = 0.123456f;
	double real2 = 0.123456789f;

	// 출력공간을 지정하면 기본적으로 우측 정렬됨
	// 지정된 자릿수보다 값이 크면 자릿수는 무시됨
	// 실수(%f) 는 자릿수에 소숫점이 포함
	printf("char(%-5c), short(%-5d), int(%-5d), float(%-9.6f), double(%-15.10f)\n", ch, st, integer, real, real2);
}

void printUnsigned()
{
	//unsigned char ch = 127+1;
	//short st = 1234;
	//int integer = 1234567890;
	//float real = 0.123456f;
	//double real2 = 0.123456789f;

	printf("char(%3c), short(%5d), int(%10d)\n", MAX_CHAR, MAX_SHORT, MAX_INT);
	printf("char(%3c), short(%5d), int(%u)\n", MAX_UCHAR, MAX_USHORT, MAX_UINT);

}

void printunsignedChar()
{
	int sx = MAX_INT;
	unsigned int ux = MAX_UINT;
	printf("char(%d),(%d) uchar(%u) \n",sx + 1,sx, ux);

}

void printOct()
{
	printf("oct:char(%o), short(%o), int(%o), uchar(%o), ushort(%o), uint(%o)\n", MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);
}

void printHex()
{
	printf("oct:char(%x), short(%x), int(%x), uchar(%x), ushort(%x), uint(%x)\n", MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);
}

void printExponet()
{
	float f = 12.13f;
	printf("float: (%f), (%e), (%E)", f, f, f);
}

void printControlCode()
{
	printf("소크라테스가 \\이렇게 말했다.\\  \"너 자신을 알라\"" );
	printf("올해의 실적은 150(%%) 성장하였습니다. \n");
	printf("1234567890123456789012345678901234567890\n");
	printf("         *         *         *         *\n"); // tab : \t (기본 8자리 (1Byte))
	printf("\t*\t*\t*\t*\n");
	printf("01234567890\rabc");
}