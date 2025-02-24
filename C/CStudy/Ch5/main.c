/*
* 작성일: 2025.02.21
* 작성자: 김동훈
* 주제: 문자를 표현하는 방법, 데이터의 타입 변환
*/

/*
* 정수, 실수
* 정수를 표현하는 법 - 부호비트 MSD(중요하니 부호)(음수 양수 구분)(1이면 음수 0이면 양수) - 5 = 10000101 - 여기서 더 나아가서 2의 보수 - 부호 비트 사용 안 하고 unsigned 방식으로 진행하면 원래 표현보다 2배 더 표현 가능
* 실수를 표현하는 법 - MSB/가수/지수 - 0을 표현할 수 없음(최소 1) - 10 = (0.1)
*/

/*
* 많은 데이터형을 사용해야 한다.
* int, char, short, long ...
* float, double ...
* 
* 왜 미리 타입을 만들었는가?
* - 편하려고
* 
* int : 정수 + 4바이트 :
* 각각의 비트는 0,1 저장하고 마지막 비트 부호. 저장 비트의 갯수는 8개. = int의 의미.
*/

/*
* 문자를 저장했다. 비특밧을 저장했다. 00000000
* character 측면 해석 -> 'a' 'b' 'c'
* 정수 측면 해석 -> 97 98 99
*/

/* 정수형 데이터 4 바이트 이름을 'num' 선언을 하세요. 값을 10 초기화하세요.
*  int num;
*  num = 10;
*  num(int)			10 정수
*/

/*
*  Literal
*  10 <- 정수
*  11.5 <- 실수
* 
* 상수 -			10
* int num;
* num = 40;
* num = 10;
* 10 = 30;
* 
* 심볼릭 상수 - 이름을 지정할 수 있다.
* 
* int PI = 3.14(원주율 PI)
*/




#include <stdio.h>

int main()		   
{				   
	int num1 = 10;
	char num2 = 0;
	short num3 = 5;
	printf("정수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num1));
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num2));
	printf("데이터의 바이트 크기 : %d 바이트\n\n", sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.2;
	printf("실수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(fnum1));
	printf("데이터의 바이트 크기 : %d 바이트\n\n", sizeof(fnum2));

	printf("문자를 출력한다.\n");

	char c1 = 'Z'; // c1=변수 char //  'Z' = 90
	printf("값 : %c\n", c1);
	printf("값 : %d\n", c1);

	// 128숫자 a~z, A~Z
	wchar_t charNum = L'가';

	printf("유니코드 값 : %d\n\n", charNum);

	printf("심볼릭 상수 예시\n");

	const double PI = 3.14; // const = 심볼릭 상수 (오른쪽 내용을 수정할 수 없는)

	printf("값 출력 : %.4lf\n\n", PI);

	printf("예제 문제\n");

	//원의 넓이를 구하는 공식 ( PI * 반지름 * 반지름)
	//토론을 통해 PI 값 3.14로 고정
	// 다른 사람이 원의 넓이 PI에 접근하지 못하도록 코드 작성

	double radius = 5;
	double extent = radius * radius * PI;
	printf("원의 넓이 : %lf\n\n", extent);

	// 플레이어 요소
	// HP, ATK
	// 사망 (체력 <= 0) -> 원래 체력으로 부활
	// 기본 체력 부활
	// hp = 5;

	const int REVIVEHP = 10;
	int currentHP = REVIVEHP;

	currentHP <= 0;
	printf("플레이어가 사망했습니다\n");
	printf("부활하시겠습니까? Y / N \n");
	currentHP = REVIVEHP;
	printf("플레이어가 부활했습니다.\n\n");

	//명시적 변환하는 법
	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;			// 숫자가 날아간다

	printf("값 : %d\n", tempInt);
	printf("값 : %f\n\n", (float)tempInt);

	//묵시적 변환
	// Case1. 대입 연산자를 사용할 때 두 변수의 타입이 다르면 발생

	float fnum11 = 0.1f;
	int tempInt2 = (int)fnum10;

	printf("값 : %d\n", tempInt2);
	printf("값 : %f\n\n", tempInt2);


	// Case2. 정수의 승격에 의한 자동 형변환
	// char, short -> int 변환

	short ex1 = 15;		// 15 -> int
	short ex2 = 25;		// 25 -> int
	short ex3 = ex1 + ex2;		// 15 + 25 int -> short

	// Case3. 연산자의 자료 불일치
	// 공격력 = 기본 공격력 + 레벨 * 가중치

	int baseAttack = 10;
	int level = 1;
	double weight = 0.5;
	int AP = baseAttack + level * weight; // 10 + ( 1 * 0.5)
	// 1 * 0.5 - 자료형이 일치하지 않음 (정수 * 실수)
	// double로 바꿔서 계산한 결과 0.5
	// 정수 * 실수 = 의 경우는 실수로 표현
	// 10 + 0.5 = 10.5
	// (int)AP = (double) 10.5; // 10.5가 다시 int로 바뀜 (Case1의 예제와 동일)

	// Case 3-2 자료형 불일치 (정수, 실수) (정수, 정수)
	int abc = 128;
	char ccc = abc; // -127 // char 는 1바이트만 표현 int는 4바이트 표현

	// [] x4  <-  []x1 : [] [] [] [] X1
	// [] x4  ->  []x1 : // [1010] [010101] [101010] // []

	// 자료혀을 변환할 때 데이터의 손실이 가장 적은 방향으로 변환된다.

	//[char -> short ->] int -> long -> float -> double (큰 쪽으로) (컴퓨터가 계산하기 쉬운 방향으로 알아서)






	return 0;	   
}				   