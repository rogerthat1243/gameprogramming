#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h> // system("cls") �ܼ��� Ŭ���� ���ش� ��� ��ɾ� (cmd â���� ���� �����ϱ� ���� �͵��� ���������)
#include <conio.h> // _getch()


/*
*	�Լ� (Function)
* 
*	������ ����
*	������Ÿ�� ���� �̸�;
*	int variableName;
* 
*	�Լ��� ����
*	(������Ÿ��) �Լ� �̸�
*	����Ÿ��
* 
*	ȣ��
*	������ ���� : ���� �̸��� �����ͼ� ���
*	�Լ��� ���� : �Լ� �̸��� �����ͼ� ���
*/

/*
*	��� ������ �Լ��� �����Ͽ� ����Ѵ�.
*/

void SelectMenu();
//����Ÿ�� + SelectMenu() + ;