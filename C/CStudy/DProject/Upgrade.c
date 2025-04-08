#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 2;

int baseAP = 10;
int currentAP = 0;

void ShowUpgradeMenu()
{
	while (true)
	{
		printf("1__강화하기\n");
		printf("2__전투하기\n");
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
			Fightfield();
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
	currentAP = currentAP + baseAP + weight;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}

// 2차원 배열에 들어있는 모든 좌표를 입력 받은 좌표로 움직이는 함수

// 전투 시작 -- 전투 종료
// currentHp = maxhp;
// currentHP = currentHp - 상대 공격력
// currentHp 0이 될 때의 몬스터가 사망 or 플레이어 사망
// evade 확률 추가?