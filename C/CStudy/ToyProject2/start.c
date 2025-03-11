#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "border.h"
#include "border2.h"

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

void gotoxy(int x, int y) // 빈 공간 지우기
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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

	int money = 500;
	int level = 1;
	int power = 10;

	int enemyHP = 125;
	int enemyATK = 10;
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
	printf("적 공격 임박 : %d", enemyATK);

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

		enemyATK--;
		printf("\n\n\n\n\n선택: ");
		scanf_s("%d", &start2);
		gotoxy(65, 23);
		setCursorPos(65, 23);
		printf("적 공격 임박 : %d    ", enemyATK);

		// 숫자 하나 타이핑 안 하고 여러 개 타이핑하면 잔상 남던데 어캐 지우지


		if (enemyLV >= 6)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■                승리했습니다!                 ■\n");
			printf("■              게임을 종료합니다.              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");

			Sleep(2000);
			exit(0);
		}

		if (enemyATK <= 0)
		{
			system("cls");

			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■           시간 초과로 패배했습니다!          ■\n");
			printf("■              게임을 종료합니다.              ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");

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
				printf("강화 성공!");
				setColor(6);
				printf(" 무기 레벨");
				setColor(7);
				printf("과");
				setColor(12);
				printf(" 공격력");
				setColor(7);
				printf(" 이 상승합니다!");

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
				setColor(14);
				printf("소지금");
				setColor(7);
				printf("이 부족하여 강화할 수 없습니다.             ");
			}
		}

		else if (start2 == 2)
		{
				gotoxy(65, 12);
				setCursorPos(65, 12);
				printf("적을 공격하여");
				setColor(4);
				printf(" %d만큼", power);
				setColor(7);
				printf("의 피해를 입혔습니다.    ");
				enemyHP -= power;
				gotoxy(65, 20);
				setCursorPos(65, 20);
				printf("적 체력 : %d    ", enemyHP);

				if (enemyHP <= 0)
				{
					gotoxy(65, 12);
					setCursorPos(65, 12);
					printf("적을");
					setColor(4);
					printf(" 제거");
					setColor(7);
					printf("했습니다.");
					setColor(12);
					printf(" 적이 더 강해집니다.        ");
					setColor(7);
					money += 200;
					gotoxy(65, 7);
					setCursorPos(65, 7);
					printf("소지금 : %d    ", money);

					enemyLV++;
					enemyHP = 100 + (enemyLV * 50);
					enemyATK += 6;

					gotoxy(65, 20);
					setCursorPos(65, 20);
					printf("적 체력 : %d    ", enemyHP);
					gotoxy(65, 17);
					setCursorPos(65, 17);
					printf("적 단계 : %d    ", enemyLV);
					
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
			Sleep(1000);

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

			Sleep(1000);
			exit(0);
		}
	}

	return 0;
}


/*
Sleep(1000);
enemyATK--;
gotoxy(65, 23);
setCursorPos(65, 23);
printf("적 공격 임박 : %d    ", enemyATK);
*/