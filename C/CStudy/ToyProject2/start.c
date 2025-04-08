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

void gotoxy(int x, int y) // 빈 공간 지우기
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
	printf("강화 단계 : %d", level);
	setCursorPos(65, 4);
	printf("공격력 : %d", power);
	setCursorPos(65, 7);
	printf("소지금 : %d", money);

	setCursorPos(65, 17);
	printf("적 단계 : %d", enemy->level);
	setCursorPos(65, 20);
	printf("적 체력 : %d", enemy->hp);
	setCursorPos(65, 23);
	printf("적 공격 임박 : %d", enemy->atk);

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

		enemy->atk--;
		printf("\n\n\n\n\n선택: ");
		scanf_s("%d", &start2);
		gotoxy(65, 23);
		setCursorPos(65, 23);
		printf("적 공격 임박 : %d    ", enemy->atk);

		


		if (enemy->level >= 6)
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

		if (enemy->atk <= 0)
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
				enemy->hp -= power;
				gotoxy(65, 20);
				setCursorPos(65, 20);
				printf("적 체력 : %d    ", enemy->hp);

				if (enemy->hp <= 0)
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

					enemy->level++;
					enemy->hp = 100 + (enemy->level * 50);
					enemy->atk += 6;

					gotoxy(65, 20);
					setCursorPos(65, 20);
					printf("적 체력 : %d    ", enemy->hp);
					gotoxy(65, 17);
					setCursorPos(65, 17);
					printf("적 단계 : %d    ", enemy->level);
					
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

			int difficulty;
			system("cls");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("■                                              ■\n");
			printf("■          난이도를 선택하세요 (1~3)           ■\n");
			printf("■        1. 쉬움 / 2. 보통 / 3. 어려움         ■\n");
			printf("■                                              ■\n");
			printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
			printf("\n선택: ");
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
				printf("잘못된 입력입니다. 기본 난이도(보통)으로 설정합니다.\n");
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


// 2차원 배열에 들어있는 모든 좌표를 입력 받은 좌표로 움직이는 함수

// 전투 시작 -- 전투 종료
// currentHp = maxhp;
// currentHP = currentHp - 상대 공격력
// currentHp 0이 될 때의 몬스터가 사망 or 플레이어 사망
// evade 확률 추가?

/*
* 
*/