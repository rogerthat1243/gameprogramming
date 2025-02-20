/*
* 작성일: 2025.02.19
* 작성자: 김현우
* 주제: 연산자 실습
*/

/*
* 사칙 연산: +  -  *  /  %(나머지)
* 
* 단항 연산자
* 부호가 붙은 수: 음수/양수 -10 +10  10 + (-10)
* 
* 이항 연산자
* num1 + num2
* 
* 삼항 연산자
* ? 1항 = 2항 : 3항
*/

/*
* 연산자의 쓰임새
* 산술 연산자 +,-,*,/,%(나머지)
* 비교 연산자 > , < , ==
* 비트 연산자 ( data type 배우고 )
* 관계 연산자 ( or, and ||, &&)
*/

/*
* <> 시스템 파일
* "" 커스텀 파일 (직접 만든)
* 
*  #include? = .h 확장자를 가져옴(헤더 파일)
* 가져오는 방식
* #include <>
* #include ""
*/

// include 폴더로 와서 <> 에 포함된 헤더 파일을 찾아봄.
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 사칙 연산 + 나머지
	printf("연산자 실습1\n");

	int num1 = 10;
	int num2 = 3;

	//덧셈
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//뺠셈
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//곱셈
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//나눗셈
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//나머지
	printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	printf("실습 2 \n");

	printf("비교 결과 num > num2 : %d\n", num1 > num2); // 참
	printf("비교 결과 num < num2 : %d\n", num1 < num2); // 거짓

	printf("실습 3 : 삼항 연산자 \n");
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;

	printf("실습 3 : 삼항 연산자 \n");

	printf("삼항 연산자 결과 출력 : %s \n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d \n", result1 ? 1 : 0);

	printf("실습4 : 관계 연산자\n");

	// !num2 = num2가 아니다 라는 말

	printf("관계 연산자: %d \n", (num1 == num2) || (num1 < num2)); //num1 != num2 두 수가 다를 때
	printf("관계 연산자: %d \n", (num1 != num2) && (num1 < num2)); //num1 != num2 두 수가 다를 때

	printf("실습 5 : 복합 연산자\n");

	int num3 = 2;
	int num4 = 5;
	num3 != num4; // 그렇기에 하단의 계산식과 같음
	//num3 = num3 + num4; // num3 + num4 계산 후 이 값을 num3에 대입
	//num3 += num4 = num3 = num3 + num4

	// 

	// T = T + A;
	// T += A;
	printf("num3 + num4의 값 : %d\n", num3); // 위의 값을 num3에 대입

	printf("실습 6 : 후위 연산자, 전위 연산자\n");

	// 전위 연산자: 문장을 먼저 처리한 후, 연산을 한다. num3++ : num3 += 1;
	// 후위 연산자: 연산된 결과를 문장에 대입(문장 처리 전, 연산). ++num4 : num4 += 1;

	printf("num3의 값 : %d\n", num3++);
	printf("num3의 본값 : %d\n", num3);
	printf("num4의 값 : %d\n", ++num4);
	printf("num4의 본값 : %d\n\n", num4);

	// 비트 연산자 : |, &, <<, >> (실제 사용 케이스가 드문 편)


	//게임 스토리 1

	// 무기를 강화하는데 N 강일 때 무기, N+1 무기의 정보를 화면에 출력하는 스토리를 작성

	printf("스토리 1 : 무기 강화 수치\n");

	int defaultPower = 5;
	int weaponLv = 1;
	int upPower = 2;

	int allPower = defaultPower + weaponLv * upPower;

	printf("무기 레벨 : %d, 무기 공격력 : %d\n", ++weaponLv, defaultPower);
	allPower = defaultPower + weaponLv * upPower;
	printf("무기 레벨 : %d, 무기 공격력 : %d\n\n", weaponLv, defaultPower);


	//게임 스토리 2
	
	// 아이템 인벤토리. Slot. Stack x 갯수
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	// A 아이템을 n 개 획득, B 아이템 m 개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안 찼는지 표현하는 결과를 표현
	// 3항 연사자 사용

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 777;

	printf("1시간 동안 사냥을 해서 아이템을 획득했다.\n");
	printf("A아이템 : %d, B아이템 : %d 획득했다.\n", ADrop, BDrop);

	// 나머지

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (AStackCount / ADrop) : (AStackCount / ADrop) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BStackCount / BDrop) : (BStackCount / BDrop) + 1;
	

	printf("A의 갯수 : %d, B의 갯수 : %d\n", AInventoryCount, BInventoryCount);
	printf("결과 : %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");


}