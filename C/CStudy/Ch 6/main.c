/*
* �ۼ���: ������
* �ۼ���: 2025.02.24
* ����: �ڵ��� �帧�� ����
*/

/*
* main �Լ��� ���α׷��� ������
* ���������� ������� �ڵ尡 ����ȴ�.
*/

/*
* �����: ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
* F9�� ������ �ߴ����� ����/������ �� �ִ�.
*/

/*
* ���ǹ�, �б� branch
* 
* if ����
* if(){}
* (): ����
* {}: ��ü, body
* 
* ������ ��
* if();{}
* - ���ǹ��� ���� ���� �ڵ尡 ����ȴ�.
*/

/*
* if (���� 1)
* ¦��: n % 2 == 0
* Ȧ��: n % 2 == 1
* 
* else // ������ ����
*/

/*
* ������ �������� 
*/

#include <stdio.h>

int main()
{
	printf("���ǹ� ����\n");

	// int : ������ �����ϰ� �ʹ� + 4 ����Ʈ ũ��

	int count = 15;

	//���� ������, �� ������
	// 5 10
	// if ~ else ��

	if (count < 10) // true, false
	{
		printf("count ���� 10���� �۽��ϴ�.\n");
	}
	else
	{
		printf("count ���� 10���� �����ϴ�.\n\n");
	}

	printf("���� ���� 1 \n");

	int score = 80;

	if (score >= 100)
	{
		printf("S���, ���� ���� : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A���, ���� ���� : %d\n", score);
	}
	else
	{
		printf("F���, ���� ���� : %d\n\n", score);
	}

	// ���� ���� - ������ ���ڸ� �ҷ� ���� �Է��� ���ڿ� ���� ũ�� Ů�ϴ� ���
	// ���� C ��� ���� ���� �������� ��� ã�ƺ���
	// ���ǹ� Ȯ��
	
	//seed ��
	// ���� �� 19243453475829374895 % 99 : 0 ~ 98

	/*
	* ����
	* �ڵ� �帧 ���� = �ڵ� Ư�� �κи� �����ϱ�
	* (false && true) = and�� �� �� �ϳ��� false���� �� �� // (false || true) = or�� �� �� �ϳ��� false���� ��
	*/

	printf("���� ���� ���߱� ����\n");
	printf("������ ���� 0 ~ 100\n");
	srand(time(NULL));
	int randomNumber = rand() % 101;

	printf("����� : %d\n", randomNumber); // �������� ������� ������ �ʰ� �Ϸ��� ���� ���� �ְ���

	int userValue = 0;

	scanf_s("%d", &userValue);
	//printf("������ ��: %d\n", userValue); // ������ Ȯ�ο�

	if (userValue > randomNumber)
	{
		printf("��ǥ������ Ů�ϴ�. \n");
	}
	else if (userValue < randomNumber)
	{
		printf("��ǥ������ �۽��ϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n\n");
	}

	// if ~ else if ~ else if~ ���� �ݺ� ����
	// ���߱� ���ӿ� ��ũ�� �־��
	// if �� ����

	int countNumber = 1; // 

	if (countNumber == 1)
	{
		printf("S��ũ �Դϴ�.\n");
	}

	else if (countNumber == 2)
	{
		printf("A��ũ �Դϴ�.\n");
	}

	else if (countNumber == 3)
	{
		printf("B��ũ �Դϴ�.\n");
	}

	else if (countNumber == 4)
	{
		printf("C��ũ �Դϴ�.\n\n");
	}

	// Switch�� ����

	printf("switch ����\n");

	switch (countNumber)
	{
	case 1:	printf("S��ũ �Դϴ�.\n"); break;
	case 2:	printf("A��ũ �Դϴ�.\n"); break;
	case 3:	printf("B��ũ �Դϴ�.\n"); break;
	case 4:	printf("C��ũ �Դϴ�.\n"); break;
	}

	// ���� �� ��ŷ, Ƚ�� ���� ��ŷ
	// ��ŷ�� �ο��� �� �ִ� ���丮�� �ۼ��غ�����.


}