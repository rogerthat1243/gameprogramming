#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "border.h"

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

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void village()
{
	int start2;

	int playerX = 17;
	int playerY = 4;
	int playerA = 17;
	int playerB = 8;
	int playerC = 17;
	int playerD = 12;

	int money = 1000;
	int level = 1;
	int power = 10;

	int enemyHP = 100;
	int enemyATK = 60;
	int enemyLV = 1;
	int downLV = 1;

	system("cls");
	ShowBorder();
	setCursorVisible(false);

	Sleep(50);

	setCursorPos(65, 1);
	printf("강화 단계 : %d", level);
	setCursorPos(65, 4);
	printf("공격력 : %d", power);
	setCursorPos(65, 7);
	printf("소지금 : %d", money);

	setCursorPos(65, 17);
	printf("적 단계 : %d", enemyLV);
	setCursorPos(65, 20);
	printf("적 체력 : %d", enemyHP);
	setCursorPos(65, 23);
	printf("적 공격 : %d", enemyATK);

	setCursorPos(65, 12);
	printf("[텍스트 출력]");

	while (1)
	{
		setCursorPos(playerX, playerY);
		printf("1.  [강화하기]");
		setCursorPos(playerA, playerB);
		printf("2.  [전투하기]");
		setCursorPos(playerC, playerD);
		printf("3.  [그만하기]");

		printf("\n\n\n\n\n선택: ");
		scanf_s("%d", &start2);

		if (enemyLV >= 6)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■                승리했습니다!                  ■\n");
			printf("■              게임을 종료합니다.              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");

			Sleep(2000);
			exit(0);
		}

		if (start2 == 1)
		{
			if (money >= 100)
			{
				money -= 100;
				level += 1;
				power += 10;
				gotoxy(65, 12);
				setCursorPos(65, 12);
				printf("강화 성공! 무기 레벨과 공격력이 상승합니다!");
				gotoxy(65, 1);
				setCursorPos(65, 1);
				printf("강화 단계 : %d", level);
				gotoxy(65, 4);
				setCursorPos(65, 4);
				printf("공격력 : %d", power);
				gotoxy(65, 7);
				setCursorPos(65, 7);
				printf("소지금 : %d    ", money);
			}
			else
			{
				setCursorPos(65, 12);
				printf("소지금이 부족하여 강화할 수 없습니다.             ");
			}
		}

		else if (start2 == 2)
		{
			if (enemyATK >= 1)
			{
				gotoxy(65, 12);
				setCursorPos(65, 12);
				printf("적을 공격하여 %d만큼의 피해를 입혔습니다.   ", power);
				enemyHP -= power;
				gotoxy(65, 20);
				setCursorPos(65, 20);
				printf("적 체력 : %d    ", enemyHP);

				if (enemyHP <= 0)
				{
					gotoxy(65, 12);
					setCursorPos(65, 12);
					printf("적을 제거했습니다. 적이 더 강해집니다.        ");
					money += 500;
					gotoxy(65, 7);
					setCursorPos(65, 7);
					printf("소지금 : %d    ", money);

					enemyHP = 200;
					gotoxy(65, 20);
					setCursorPos(65, 20);
					printf("적 체력 : %d    ", enemyHP);

					enemyLV = 2;
					gotoxy(65, 17);
					setCursorPos(65, 17);
					printf("적 단계 : %d    ", enemyLV);

					enemyATK = 2;
					gotoxy(65, 17);
					setCursorPos(65, 17);
					printf("적 단계 : %d    ", enemyLV);
					
				}
			}

		}
		else if (start2 == 3)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■              게임을 종료합니다.              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");

			Sleep(2000);
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
		printf("[강화 디펜스]");
		setCursorPos(startC, startD);
		printf("1.  [시작하기]");
		setCursorPos(startE, startF);
		printf("2.  [그만하기]");


		printf("\n\n\n\n\n선택: ");
		scanf_s("%d", &start);

		if (start == 1)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■              게임이 시작됩니다!              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			//Sleep(2000);

			village();
			exit(0);

		}

		else if (start == 2)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■              게임을 종료합니다.              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");

			Sleep(2000);
			exit(0);
		}
	}

	return 0;
}