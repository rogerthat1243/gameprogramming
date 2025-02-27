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
		printf("무기 업그레이드 시스템\n\n");

		printf("1__강화한다.\n");
		printf("2__취소한다.\n");
		printf("3__종료한다.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); // 만나기 전까지 반복 character 대행 문자 가져옴 입력값을 저장한다 해서 입력 버퍼라고 부름 입력 버퍼는 띄어쓰기 인식 안 함

		if (inputNumber == 1)
		{
			printf("강화를 진행합니다.\n");
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}
		// 플레이어가 특정 키를 입력했을 때 넘어가도록 하자

		printf("진행하려면 아무 키를 입력해주세요.\n");

		_getch(); // 입력 값을 받아오는 명령어 (받아오기 전엔 멈춰 있음) 키를 입력했을 때 문자값을 숫자로 바꿈

	}


}
