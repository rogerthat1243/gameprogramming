#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "border.h"
#include "border2.h"

typedef struct Enemy {
	int hp;
	int atk;
	int level;
	int attackTimer;
}Enemy;

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void gotoxy(int x, int y) // �� ���� �����
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void village(Enemy* enemy)
{
	int start2;

	int playerX = 17;
	int playerY = 4;
	int playerA = 17;
	int playerB = 8;
	int playerC = 17;
	int playerD = 12;

	int money = 500;
	int level = 1;
	int power = 10;

	system("cls");
	ShowBorder();
	setCursorVisible(false);

	Sleep(50);

	setCursorPos(65, 1);
	printf("��ȭ �ܰ� : %d", level);
	setCursorPos(65, 4);
	printf("���ݷ� : %d", power);
	setCursorPos(65, 7);
	printf("������ : %d", money);

	setCursorPos(65, 17);
	printf("�� �ܰ� : %d", enemy->level);
	setCursorPos(65, 20);
	printf("�� ü�� : %d", enemy->hp);
	setCursorPos(65, 23);
	printf("�� ���� �ӹ� : %d", enemy->atk);

	setCursorPos(65, 12);
	printf("[�ؽ�Ʈ ���]");


	while (1)
	{

		setCursorPos(playerX, playerY);
		printf("1.  [��ȭ�ϱ�]");
		setCursorPos(playerA, playerB);
		printf("2.  [�����ϱ�]");
		setCursorPos(playerC, playerD);
		printf("3.  [�׸��ϱ�]");

		enemy->atk--;
		printf("\n\n\n\n\n����: ");
		scanf_s("%d", &start2);
		gotoxy(65, 23);
		setCursorPos(65, 23);
		printf("�� ���� �ӹ� : %d    ", enemy->atk);

		


		if (enemy->level >= 6)
		{
			system("cls");

			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��                �¸��߽��ϴ�!                 ��\n");
			printf("��              ������ �����մϴ�.              ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");

			Sleep(2000);
			exit(0);
		}

		if (enemy->atk <= 0)
		{
			system("cls");

			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��           �ð� �ʰ��� �й��߽��ϴ�!          ��\n");
			printf("��              ������ �����մϴ�.              ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");

			Sleep(1000);
			exit(0);
		}

		if (start2 == 1)
		{
			if (money >= 100)
			{
				money -= 100;
				level++;
				power += 10;
				gotoxy(65, 12);
				setCursorPos(65, 12);
				printf("��ȭ ����!");
				setColor(6);
				printf(" ���� ����");
				setColor(7);
				printf("��");
				setColor(12);
				printf(" ���ݷ�");
				setColor(7);
				printf(" �� ����մϴ�!");

				gotoxy(65, 1);
				setCursorPos(65, 1);
				printf("��ȭ �ܰ� : %d", level);
				gotoxy(65, 4);
				setCursorPos(65, 4);
				printf("���ݷ� : %d", power);
				gotoxy(65, 7);
				setCursorPos(65, 7);
				printf("������ : %d    ", money);
			}
			else
			{
				setCursorPos(65, 12);
				setColor(14);
				printf("������");
				setColor(7);
				printf("�� �����Ͽ� ��ȭ�� �� �����ϴ�.             ");
			}
		}

		else if (start2 == 2)
		{
				gotoxy(65, 12);
				setCursorPos(65, 12);
				printf("���� �����Ͽ�");
				setColor(4);
				printf(" %d��ŭ", power);
				setColor(7);
				printf("�� ���ظ� �������ϴ�.    ");
				enemy->hp -= power;
				gotoxy(65, 20);
				setCursorPos(65, 20);
				printf("�� ü�� : %d    ", enemy->hp);

				if (enemy->hp <= 0)
				{
					gotoxy(65, 12);
					setCursorPos(65, 12);
					printf("����");
					setColor(4);
					printf(" ����");
					setColor(7);
					printf("�߽��ϴ�.");
					setColor(12);
					printf(" ���� �� �������ϴ�.        ");
					setColor(7);
					money += 200;
					gotoxy(65, 7);
					setCursorPos(65, 7);
					printf("������ : %d    ", money);

					enemy->level++;
					enemy->hp = 100 + (enemy->level * 50);
					enemy->atk += 6;

					gotoxy(65, 20);
					setCursorPos(65, 20);
					printf("�� ü�� : %d    ", enemy->hp);
					gotoxy(65, 17);
					setCursorPos(65, 17);
					printf("�� �ܰ� : %d    ", enemy->level);
					
				}

		}
		else if (start2 == 3)
		{
			system("cls");

			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��              ������ �����մϴ�.              ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");

			Sleep(1000);
			exit(0);
		}

	}

}



int main()
{
	int start;
	while (1)
	{
		int startA = 18;
		int startB = 3;
		int startC = 17;
		int startD = 8;
		int startE = 17;
		int startF = 12;
		system("cls");

		ShowBorder();
		setCursorPos(startA, startB);
		printf("[��ȭ ���潺]");
		setCursorPos(startC, startD);
		printf("1.  [�����ϱ�]");
		setCursorPos(startE, startF);
		printf("2.  [�׸��ϱ�]");


		printf("\n\n\n\n\n����: ");
		scanf_s("%d", &start);

		if (start == 1)
		{
			system("cls");

			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��              ������ ���۵˴ϴ�!              ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");
			Sleep(1000);

			int difficulty;
			system("cls");
			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��          ���̵��� �����ϼ��� (1~3)           ��\n");
			printf("��        1. ���� / 2. ���� / 3. �����         ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");
			printf("\n����: ");
			scanf_s("%d", &difficulty);

			Enemy enemy;
			switch (difficulty) {
			case 1:
				enemy = (Enemy){ 100, 5, 1, 10 };
				break;
			case 2:
				enemy = (Enemy){ 125, 10, 1, 9 };
				break;
			case 3:
				enemy = (Enemy){ 200, 15, 1, 8 };
				break;
			default:
				printf("�߸��� �Է��Դϴ�. �⺻ ���̵�(����)���� �����մϴ�.\n");
				Sleep(1000);
				enemy = (Enemy){ 125, 10, 1, 9 };
				break;
			}
			
			village(&enemy);
			exit(0);

		}

		else if (start == 2)
		{
			system("cls");

			printf("��������������������������\n");
			printf("��                                              ��\n");
			printf("��              ������ �����մϴ�.              ��\n");
			printf("��                                              ��\n");
			printf("��������������������������\n");

			Sleep(1000);
			exit(0);
		}
	}

	return 0;
}


// 2���� �迭�� ����ִ� ��� ��ǥ�� �Է� ���� ��ǥ�� �����̴� �Լ�

// ���� ���� -- ���� ����
// currentHp = maxhp;
// currentHP = currentHp - ��� ���ݷ�
// currentHp 0�� �� ���� ���Ͱ� ��� or �÷��̾� ���
// evade Ȯ�� �߰�?

/*
* 
*/