/*
�ۼ���: 2025.02.17
������: ������
����: ����
*/

#include <stdio.h>

int main()
{
	// Player: �г���(���ڿ�)
	// Enemy: ���� �̸�(���ڿ�)
	// Player's ATKPower: �÷��̾��� ���ݷ�(����)
	// Enemy's ATKPower: ������ ���ݷ�(����)

	// ����: ���� �������� ������(���ϴ�)
	// ��ǻ�Ϳ��� �����ؾ� �� ���� (������ �̸�, ��� �����ΰ�? [�߿�])

	int playerAttackPower = 8;
	int enemyAttackPower = 3;

	printf("%s�� %s�� ��򰡿��� �������ϴ�.\n", "KKK", "���");
	printf("%s�� %s�� ���� ��ġä�� ���߽��ϴ�.\n", "���", "KKK");
	printf("%s�� %s�� ����� %d��ŭ�� ���ظ� ������.\n", "KKK", "���", playerAttackPower);
	printf("%s�� %s�� ���� ������ %d, %d�� ���ظ� ���� ������.\n", "KKK", "���", playerAttackPower, enemyAttackPower);
	printf("%s�� ���� ���߽��ϴ�. ������ ���ư��ϴ�.\n\n", "KKK");

	char char1 = 'a';
	int int1 = 4;
	float float1 = 0.8f;
	printf("%s�� ���� ��ȭ�� �õ��մϴ�.\n", "KKK");
	printf("��ȭ�Ϸ��� ���� : %s\n", "�ʽ����� ��");
	printf("���� �ڵ� : %c\n", char1);
	printf("���� ��ȭ �ܰ� : %d\n", int1);
	printf("��ȭ ���� Ȯ�� : %f\n", float1);
	printf("��ȭ ��� : ����!!\n\n");

	printf("������ �̸�: %s, ���� ����: %d, ��ȭ Ȯ��: %f", "�ʽ����� ��", int1, float1);

}
// F5 = �����
// �ܼ� â�� "�ȳ� ����" ����غ���

