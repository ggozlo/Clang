// 오퍼레이터 
// 연산자 예제
// 1. 대입연산자, 산술연산자, 증감연산자, 관계연산자, 논리연산자
// 2. 연산자의 우선순위와 연산방향
#include<stdio.h>

#define MAX_CHAR	127
#define MAX_SHORT	32767
#define MAX_INT		2147483647
#define MAX_UCHAR	0xff
#define MAX_USHORT	0xffff
#define MAX_UINT	0xffffffff //4294967295

void assignOper();
void assignFloat();
void Uint();
void casting();
void castingReal();
void OF();

void main()
{
	//assignOper();	
	//assignFloat();
	//Uint();
	//casting();
	//castingReal();
	OF();
}

// 대입연산자 (=), 같다의 의미가 아님.
// a 르 b에 대입 ( a -> b ) : B = A 
// 대입이 되는  대상의 원래 값은 사라진다
// 양쪽 모두 동일 타입이여야 함
// 양쪽의 자료형이 다르면 캐스팅 하면 된다.
void assignOper()
{
	int a = 1; // signed(부호가 있는 정수)
	int b = 2; // b의 원래값은 사라짐
	b = a;
	int c = b;
	printf("a를 b에 대입 (a=b), a (%d), b (%d)\n", a ,b);
	printf("선언과 함께 c를 b에 대입 (c=b)   c(%d), b(%d)\n", c, b);


}
void Uint()
{
	// 음수값을 signed 형에서 unsigned 형으로 대입할떄 문제가 발생함
	// 오버플로우가 발생시 반대의 최대값을 갖게됨
	// 그값을 unsigned로 대입하게 되면 정상적인 값을 얻을 수 있다.
	int plus = 1;
	int sd = MAX_INT + plus;
	unsigned int ud = sd; 
	printf("sd(%d), ud(%u)", sd, ud);
}
void assignFloat()
{
	// float 에서Double 대입은 문제가 없음
	// 반대의 경우 손실이 발생할수 있음
	float a = 0.123456f;  //뒤에 f를 붙여야함
	double b = 0.123456789 ; // 없으면 더블형
	float c = b; // 손실발생


	printf("Float : a (%f)\n", a);  // 기본 6자리 까지 출력
	printf("Double: b(%15.10f)\n", b);
	printf("Float : c(%15.10f)\n", c);
}

// 같은 형태의 자료형에서 서로 자료형의 크기가 다른경우

// 양쪽의 자료형의 속성이 다르면 캐스팅(casting) 을  해야한다.
// int에서 char로 캐스팅이 데이터 손실이 발생될수 있다.
// 캐스팅을 하게 되면 컴파일러 경고가 발생되지 않는다.

void casting()
{
	char c = 'c';
	short cs = c;
	int cx = c;

	float ff = 89.12345f;
	int df = (int)ff;
	float f1 = (float)df;
	int dm = MAX_INT;
	float f2 = (float)dm;

	printf("char -> short 는 캐스팅이 필요 없다. c(%c), cs(%c)(%d)\n", c, cs, cs);
	printf("char -> int 는 캐스팅이 필요 없다. c(%c), cx(%c)(%d)\n", c, cx, cx);
	printf("float(%f) -> int(%d)\n", ff, df);
	printf("int(%d) -> float(%f)\n", df, f1);
	printf("int(%d) -> float(%f)\n", dm, f2);
}

void castingReal()
{

	float a = 0.123456f;  //뒤에 f를 붙여야함
	double b = 0.123456789; // 없으면 더블형
	float c = (float)b; // 손실발생


	printf("Float : a (%f)\n", a);  // 기본 6자리 까지 출력
	printf("Double: b(%15.10f)\n", b);
	printf("Float : c(%15.10f)\n", c);
}

void OF()
{
	int d1  = 255;
	int d2 = 256;
	char c1 = (char)d1;
	char c2 = (char)d2;

	printf("d1(%d)(%08x), d2(%d)(%08x) -> c1(%d)(%x), c2(%d)(%x)", d1,d1,d2,d2, c1,c1, c2,c2);
}