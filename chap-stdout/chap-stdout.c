// C 표준 라이브러리와 표준 출력 함수 
#include <stdio.h>

#define TITLE "c언어"
#define PUTCHAR(c) putchar('c', stdout)
#define PUTERROR(c) putchar('c', stderr)
void putchar_1();
void putchar_2();
void putcTest3();
void putsTest4();
void main()
{

	putchar(254);
	putchar('\n');
	putchar(128);
	putchar('\n');
	putchar(127);
	putchar('\n');
	putchar(159);
	putchar('\n');

	int x = putchar(65);
	printf("x(%c)(%d)\n", x, x);
	printf("%s\n", TITLE);
	//putchar_1();
	//putchar_2();
	//putcTest3();
	//putsTest4();
}

void putchar_1()
{
	printf("putchar() 출력함수\n");
//	putchar(TITLE); 문자열은 출력불가
	putchar('a');
	putchar('b');
	putchar('l');

	putchar(65);
	putchar('A');
}
void putsTest4()
{
	puts("표준스트링함수!");
	puts(TITLE);
}
void putcTest3()
{
	putc('A', stdout);
	putc('\n', stdout);
	putc('B', stdout);
	PUTERROR('E');
	PUTCHAR(C);
}
void putchar_2()
{
	printf("putchar() 출력함수 오류 테스트\n");
	//	putchar(TITLE); 문자열은 출력불가
	char rt = putchar(TITLE); 
	putchar('\n');
	char ra = putchar('a');
	putchar('\n');
	
	printf("rt(%c), ra(%c)\n", rt, ra);
}