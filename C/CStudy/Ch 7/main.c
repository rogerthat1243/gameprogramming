/*
* 작성일: 2025.02.25
* 작성자: 김현우
* 주제: 코드의 흐름괴 제어 - 반복문
* for 반복문, while 반복문
*/

/*
* 반복문
*  - 1+1+1+1+1 = 1X5
* 
* for, while
* 
* for (int i=0 ;i < 10; i++)  // int i=0 <-- 시작점. 일종의 변수 (얼마만큼 반복할 것인가) ;  조건  ; 증가량? = 반복되는가 안 되는가 조건을 체크하는 부분
* {} = 실제 작동되는 부분이 무엇인지
* 
* // 조건에는 참, 거짓 (true, false)
* // 조건이 참이면 반복문 실행, 거짓일 때는 반복문을 벗어남.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("반복문 예제1 \n");
	// A 이름의 아이템을 획득 - 갯수
	int ACount = 0;
	printf("A아이템의 수 : %d\n", ACount);

	// 아이템 1개 획득
	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}

	printf("A아이템의 수 : %d\n\n", ACount);

	printf("반복문 예제2 \n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}

	printf("B아이템의 수 : %d\n\n", BCount);

	printf("for 반복문 예제3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("현재 I의 값 : %d\n", reverseI);
	}

	// 게임의 이야기를 입혀 표현해보자.

	// break

	for (;;)
	{
		// 무기 강화 Step
		printf("무기의 이름 : %s\n", "롱소드"); // 이름 변수 바꾸는 법 아직 안 배워서
		
		int weaponLevel = 0;
		int basePower = 10;
		int weight = 5;
		int attackPower = basePower + weaponLevel * weight;

		//무기 이름
		//무기 레벨
		//기본 공격력, 레벨, 가중치
		//무기 공격력 = 기본 공격력 + 레벨 * 가중치

		// 강화를 계속할 것인가 그만둘 것인가?
		// 2. 강화 선택하는 단계
		printf("강화를 진행하시겠습니까? ( Y / N )\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("강화를 진행합니다.\n");
			break;
		}
		else if (check == 'N')
		{
			printf("강화를 그만둡니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while(getchar() != '\n'); // 문자열 설명 후, 해당 내용 설명

			if (another == 'Y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (another == 'N')
			{
				printf("강화를 그만둡니다.\n");
			}
			else
			{
				printf("잘못된 값을 입력했습니다.\n\n");
			}
		}
		break;
	}

	// 반복문을 사용한다.
	// for 반복문 사용해서
	// n번 반복하는 코드를 쉽게 표현하기 위해
	// 몇 번 반복해야 할 지 잘 모르겠는 내용
	// 예시 ) 잘못된 값을 입력했을 때 정확한 값을 요구하는 코드

	// while 반복문 #include <stdbool.h> 로 true문 사용 가능
	// 무한 반복문

	int xi = 0;

	while (xi < 10)	// ( ) 조건식 : 조건이 true일 때 {}를 실행한다. 조건이 false인 반복문을 종료한다.
	{
		xi++; //  while을 탈출하기 위한 조건문

		printf("xi의 값 : %d\n", xi);
	}

	// for 반복문을 쓰면 좋을까요 while 반복문을 쓰면 좋을까요?
	// 
	// 반복 횟수가 정해져 있다면 for 반복문이 작성하기 편함
	// 반복 횟수를 잘 모르면 while 반복문이 작성하기 편함


	// 2만큼 증가하는 정수형 변수 numA가 있다.
	// 이 numA가 10보다 크거나 같을 때 종료되야 한다.
	// numA 숫자가 10보다 커지기 위해 몇 번 반복했는지 알고 싶다.
	// 반복한 결과 정수형 CountA로 출력

	int numA = 0; // 시작 위치에 따라 반복 횟수가 변경
	int CountA = 0;
	printf("numA의 값을 입력해주세요 ( 단 10보다 작아야 합니다. ) \n\n");
	scanf_s("%d", &numA); // numA 값이 정해짐.

	while (true) // 몇 번 반복했는지 모르니 while로 시작
	{
		numA += 2;
		CountA++;

		if (numA > 10)
		{
			printf("반복한 횟수 : %d\n", CountA);
			printf("현재 값 : %d\n\n", numA);
			break;
		}
	}

	// 쉽게 표현

	while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}

	printf("반복한 횟수 : %d\n", CountA);
	printf("현재 값 : %d\n\n", numA);


	printf("1부터 10 사이의 값을 짝수 print 출력하기 실습 예제\n"); // 2 입력 시 2, 3, 4 식으로 출력

	


	printf("while 반복문을 사용해서 Y나 N을 입력할 때까지 반복하는 코드 작성");


}