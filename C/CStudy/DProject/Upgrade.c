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

void Fightfield()
{
	
}

