#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h> // system("cls") 콘솔을 클리어 해준다 라는 명령어 (cmd 창에서 숫자 누르니까 이전 것들은 사라지더라)
#include <conio.h> // _getch()


/*
*	함수 (Function)
* 
*	변수의 선언
*	데이터타입 변수 이름;
*	int variableName;
* 
*	함수의 선언
*	(데이터타입) 함수 이름
*	리턴타입
* 
*	호출
*	변수의 사용법 : 변수 이름을 가져와서 사용
*	함수의 사용법 : 함수 이름을 가져와서 사용
*/

/*
*	헤더 파일은 함수를 선언하여 사용한다.
*/

void SelectMenu();
//리턴타입 + SelectMenu() + ;