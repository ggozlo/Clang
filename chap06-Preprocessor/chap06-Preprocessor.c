// Proprocessor 
// 전처리기
// #define (재정의)

#include <stdio.h>

// define은 대문자를 쓰는것이 좋음 
// 상수(변하지 않는 값, 식별)

#define PI 3.141592f
//float pi = 3.141592; // 전역 변수
#define POWX(x) (x*x)

# define CIRCLE_AREA(r) (PI * (r * r)) // 원 넓이를 구하는 디파인문
# define CIRCLE_AREA2(r) (PI * POWX(r))
# define CIRCLE_AROUND(r) (PI * 2 * r) // 원 둘레를 구하는 디파인문
// 계산시 오류를 피하기 위해서는 define문 본문에 관호를 쳐야함

// 참, 거짓 
#define TRUE 1
#define FALSE 0

float circle_area(float r);
float circle_around(float r);

void main()
{
	float pi = 3.141592f;

	printf("pi(%f)\n", pi);
	printf("pi(%f)\n", PI);
	printf("원의넓이: 반지름(%f), 넓이(%f)\n", 3.0f, circle_area(3.0f));
	printf("원의넓이: 반지름(%f), 둘레(%f)\n", 3.0f, circle_around(3.0f));
	printf("원의넓이: 반지름(%f), 넓이(%f)\n", 3.0f, CIRCLE_AREA(3.0f));
	printf("원의넓이: 반지름(%f), 둘레(%f)\n", 3.0f, CIRCLE_AROUND(3.0f));
}

float circle_area(float r)
{
//	float area = 3.14f * (r*r);
//	return area;

	return PI * (r * r);
}

float circle_around(float r)
{
//	float around = 2 * 3.14f * r;
//	return around;
	
	return PI * 2 * r;
}