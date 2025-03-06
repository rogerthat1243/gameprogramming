#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 2;

int baseAP = 10;
int currentAP = 0;

/*
* ���׷��̵� �ý��� �����
* ������ ������ ������ ���� ���ݷ� ����
* ����, ���ݷ� ������ ����Ǿ�� �Ѵ�
* ����, ���ݷ� ���� => ���� ���� ���� (C++������ �ٸ� �����, C ������ �޴� ��� ��)
*/

void ShowUpgradeMenu()
{
	while (true)
	{
		printf("1__��ȭ�ϱ�\n");
		printf("2__��ް�ȭ\n");
		printf("3__�׸��α�\n");

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
			printf("��ȭ ���\n");
			break;
		}

		else
		{
			printf("�߸��� �Է�\n");
		}
	}
}

void WeaponUpgrade()
{

	int weight = 5;

	weaponLV = weaponLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade()
{
	int weight2 = 50;
	weaponLV = weaponLV + 1;
	currentAP = currentAP + baseAP + weight2 * weaponLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

