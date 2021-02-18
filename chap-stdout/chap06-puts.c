// C 표준 라이브러리와 표준 출력 함수 
// puts ( char , const _buffer)
// const : constant : 상수, 불변
// variable : 변수
#include <stdio.h>

#define TITLE "c언어"

// putx(char const* str)
// str : 추력하고자 하는 문자열 
// return : 없음
void putx(char const* str)
{
	puts(str);

	//str[0] = 'X'; // const로 지정된 변수는 수정 불가
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
	//char first[] = "first"; // 받은 변수만큼의 배열을 생성하여 저장
	putx(first);

	char second[] = "second";
	// second값이 변경됨
	putv(second);
	puts(second); 
}
