#include "menu.h"
#pragma once

int weaponLv = 1;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void SelectMenu()
{
	while (true)
	{
		printf("���� ���׷��̵� �ý���\n\n");

		printf("1__��ȭ�Ѵ�.\n");
		printf("2__����Ѵ�.\n");
		printf("3__�����Ѵ�.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); // ������ ������ �ݺ� character ���� ���� ������ �Է°��� �����Ѵ� �ؼ� �Է� ���۶�� �θ� �Է� ���۴� ���� �ν� �� ��

		if (inputNumber == 1)
		{
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}
		// �÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� ����

		printf("�����Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");

		_getch(); // �Է� ���� �޾ƿ��� ��ɾ� (�޾ƿ��� ���� ���� ����) Ű�� �Է����� �� ���ڰ��� ���ڷ� �ٲ�

	}


}
