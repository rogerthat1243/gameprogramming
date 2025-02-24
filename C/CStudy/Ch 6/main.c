/*
* 작성자: 김현우
* 작성일: 2025.02.24
* 주제: 코드의 흐름과 제어
*/

/*
* main 함수는 프로그램의 시작점
* 위에서부터 순서대로 코드가 실행된다.
*/

/*
* 디버깅: 프로그램을 중단시켜서 코드를 확인하는 기능
* F9를 눌러서 중단점을 생성/삭제할 수 있다.
*/

/*
* 조건문, 분기 branch
* 
* if 문법
* if(){}
* (): 조건
* {}: 몸체, body
* 
* 주의할 점
* if();{}
* - 조건문과 관계 없이 코드가 실행된다.
*/

/*
* if (조건 1)
* 짝수: n % 2 == 0
* 홀수: n % 2 == 1
* 
* else // 나머지 전부
*/

/*
* 점수를 기준으로 
*/

#include <stdio.h>

int main()
{
	printf("조건문 예제\n");

	// int : 정수를 저장하고 싶다 + 4 바이트 크기

	int count = 15;

	//관계 연산자, 비교 연산자
	// 5 10
	// if ~ else 문

	if (count < 10) // true, false
	{
		printf("count 값이 10보다 작습니다.\n");
	}
	else
	{
		printf("count 값이 10보다 높습니다.\n\n");
	}

	printf("예제 문제 1 \n");

	int score = 80;

	if (score >= 100)
	{
		printf("S등급, 현재 점수 : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급, 현재 점수 : %d\n", score);
	}
	else
	{
		printf("F등급, 현재 점수 : %d\n\n", score);
	}

	// 숫자 게임 - 랜덤한 숫자를 불러 내가 입력한 숫자와 비교해 크면 큽니다 출력
	// 구글 C 언어 랜덤 숫자 가져오는 방법 찾아보기
	// 조건문 확인
	
	//seed 값
	// 랜덤 값 19243453475829374895 % 99 : 0 ~ 98

	/*
	* 정리
	* 코드 흐름 제어 = 코드 특정 부분만 실행하기
	* (false && true) = and는 둘 중 하나만 false여도 안 됨 // (false || true) = or는 둘 중 하나가 false여도 됨
	*/

	printf("랜덤 숫자 맞추기 게임\n");
	printf("숫자의 범위 0 ~ 100\n");
	srand(time(NULL));
	int randomNumber = rand() % 101;

	printf("결과값 : %d\n", randomNumber); // 유저에게 결과값이 보이지 않게 하려면 지울 수도 있겠지

	int userValue = 0;

	scanf_s("%d", &userValue);
	//printf("유저의 값: %d\n", userValue); // 유저값 확인용

	if (userValue > randomNumber)
	{
		printf("목표값보다 큽니다. \n");
	}
	else if (userValue < randomNumber)
	{
		printf("목표값보다 작습니다.\n");
	}
	else
	{
		printf("정답입니다.\n\n");
	}

	// if ~ else if ~ else if~ 무한 반복 가능
	// 맞추기 게임에 랭크도 넣어보자
	// if 문 관련

	int countNumber = 1; // 

	if (countNumber == 1)
	{
		printf("S랭크 입니다.\n");
	}

	else if (countNumber == 2)
	{
		printf("A랭크 입니다.\n");
	}

	else if (countNumber == 3)
	{
		printf("B랭크 입니다.\n");
	}

	else if (countNumber == 4)
	{
		printf("C랭크 입니다.\n\n");
	}

	// Switch문 관련

	printf("switch 예제\n");

	switch (countNumber)
	{
	case 1:	printf("S랭크 입니다.\n"); break;
	case 2:	printf("A랭크 입니다.\n"); break;
	case 3:	printf("B랭크 입니다.\n"); break;
	case 4:	printf("C랭크 입니다.\n"); break;
	}

	// 점수 비교 랭킹, 횟수 기준 랭킹
	// 랭킹을 부여할 수 있는 스토리를 작성해보세요.


}