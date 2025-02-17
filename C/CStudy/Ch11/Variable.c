/*
작성일: 2025.02.17
작정자: 김현우
주제: 변수
*/

#include <stdio.h>

int main()
{
	// Player: 닉네임(문자열)
	// Enemy: 몬스터 이름(문자열)
	// Player's ATKPower: 플레이어의 공격력(숫자)
	// Enemy's ATKPower: 몬스터의 공격력(숫자)

	// 변수: 아직 정해지지 않은하(변하는)
	// 컴퓨터에게 전달해야 할 정보 (변수의 이름, 어떠한 종류인가? [중요])

	int playerAttackPower = 8;
	int enemyAttackPower = 3;

	printf("%s와 %s가 어딘가에서 만났습니다.\n", "KKK", "고블린");
	printf("%s는 %s를 아직 눈치채지 못했습니다.\n", "고블린", "KKK");
	printf("%s가 %s를 기습해 %d만큼의 피해를 입혔다.\n", "KKK", "고블린", playerAttackPower);
	printf("%s와 %s는 서로 공격해 %d, %d의 피해를 서로 입혔다.\n", "KKK", "고블린", playerAttackPower, enemyAttackPower);
	printf("%s는 힘이 다했습니다. 마을로 돌아갑니다.\n\n", "KKK");

	char char1 = 'a';
	int int1 = 4;
	float float1 = 0.8f;
	printf("%s의 무기 강화를 시도합니다.\n", "KKK");
	printf("강화하려는 무기 : %s\n", "초심자의 검");
	printf("무기 코드 : %c\n", char1);
	printf("현재 강화 단계 : %d\n", int1);
	printf("강화 성공 확률 : %f\n", float1);
	printf("강화 결과 : 성공!!\n\n");

	printf("아이템 이름: %s, 현재 레벨: %d, 강화 확률: %f", "초심자의 검", int1, float1);

}
// F5 = 디버깅
// 콘솔 창에 "안녕 변수" 출력해보기

