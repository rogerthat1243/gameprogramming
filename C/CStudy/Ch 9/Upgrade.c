#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 2;

int baseAP = 10;
int currentAP = 0;

/*
* 업그레이드 시스템 만들기
* 무기의 레벨과 레벨에 따른 공격력 증가
* 레벨, 공격력 정보가 저장되어야 한다
* 레벨, 공격력 정보 => 전역 변수 선언 (C++에서는 다른 방식임, C 언어에서도 달느 방식 씀)
*/

void ShowUpgradeMenu()
{
	while (true)
	{
		printf("1__강화하기\n");
		printf("2__고급강화\n");
		printf("3__그만두기\n");

		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			WeaponUpgrade();
		}

		else if (inputnumber == 2)
		{
			AdvancedWeaponUpgrade();
		}

		else if (inputnumber == 3)
		{
			printf("강화 취소\n");
			break;
		}

		else
		{
			printf("잘못된 입력\n");
		}
	}
}

void WeaponUpgrade()
{

	int weight = 5;

	weaponLV = weaponLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade()
{
	int weight2 = 50;
	weaponLV = weaponLV + 1;
	currentAP = currentAP + baseAP + weight2 * weaponLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}

