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
		printf("1__��ȭ�ϱ�\n");
		printf("2__�����ϱ�\n");
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
			Fightfield();
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
	currentAP = currentAP + baseAP + weight;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

// 2���� �迭�� ����ִ� ��� ��ǥ�� �Է� ���� ��ǥ�� �����̴� �Լ�

// ���� ���� -- ���� ����
// currentHp = maxhp;
// currentHP = currentHp - ��� ���ݷ�
// currentHp 0�� �� ���� ���Ͱ� ��� or �÷��̾� ���
// evade Ȯ�� �߰�?