/*
* �ۼ���: 2025.02.19
* �ۼ���: ������
* ����: ������ �ǽ�
*/

/*
* ��Ģ ����: +  -  *  /  %(������)
* 
* ���� ������
* ��ȣ�� ���� ��: ����/��� -10 +10  10 + (-10)
* 
* ���� ������
* num1 + num2
* 
* ���� ������
* ? 1�� = 2�� : 3��
*/

/*
* �������� ���ӻ�
* ��� ������ +,-,*,/,%(������)
* �� ������ > , < , ==
* ��Ʈ ������ ( data type ���� )
* ���� ������ ( or, and ||, &&)
*/

/*
* <> �ý��� ����
* "" Ŀ���� ���� (���� ����)
* 
*  #include? = .h Ȯ���ڸ� ������(��� ����)
* �������� ���
* #include <>
* #include ""
*/

// include ������ �ͼ� <> �� ���Ե� ��� ������ ã�ƺ�.
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// ��Ģ ���� + ������
	printf("������ �ǽ�1\n");

	int num1 = 10;
	int num2 = 3;

	//����
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//���
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//����
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//������
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//������
	printf("%d ������ %d = %d\n", num1, num2, num1 % num2);

	printf("�ǽ� 2 \n");

	printf("�� ��� num > num2 : %d\n", num1 > num2); // ��
	printf("�� ��� num < num2 : %d\n", num1 < num2); // ����

	printf("�ǽ� 3 : ���� ������ \n");
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;

	printf("�ǽ� 3 : ���� ������ \n");

	printf("���� ������ ��� ��� : %s \n", result1 ? "true" : "false");
	printf("���� ������ ��� ��� : %d \n", result1 ? 1 : 0);

	printf("�ǽ�4 : ���� ������\n");

	// !num2 = num2�� �ƴϴ� ��� ��

	printf("���� ������: %d \n", (num1 == num2) || (num1 < num2)); //num1 != num2 �� ���� �ٸ� ��
	printf("���� ������: %d \n", (num1 != num2) && (num1 < num2)); //num1 != num2 �� ���� �ٸ� ��

	printf("�ǽ� 5 : ���� ������\n");

	int num3 = 2;
	int num4 = 5;
	num3 != num4; // �׷��⿡ �ϴ��� ���İ� ����
	//num3 = num3 + num4; // num3 + num4 ��� �� �� ���� num3�� ����
	//num3 += num4 = num3 = num3 + num4

	// 

	// T = T + A;
	// T += A;
	printf("num3 + num4�� �� : %d\n", num3); // ���� ���� num3�� ����

	printf("�ǽ� 6 : ���� ������, ���� ������\n");

	// ���� ������: ������ ���� ó���� ��, ������ �Ѵ�. num3++ : num3 += 1;
	// ���� ������: ����� ����� ���忡 ����(���� ó�� ��, ����). ++num4 : num4 += 1;

	printf("num3�� �� : %d\n", num3++);
	printf("num3�� ���� : %d\n", num3);
	printf("num4�� �� : %d\n", ++num4);
	printf("num4�� ���� : %d\n\n", num4);

	// ��Ʈ ������ : |, &, <<, >> (���� ��� ���̽��� �幮 ��)


	//���� ���丮 1

	// ���⸦ ��ȭ�ϴµ� N ���� �� ����, N+1 ������ ������ ȭ�鿡 ����ϴ� ���丮�� �ۼ�

	printf("���丮 1 : ���� ��ȭ ��ġ\n");

	int defaultPower = 5;
	int weaponLv = 1;
	int upPower = 2;

	int allPower = defaultPower + weaponLv * upPower;

	printf("���� ���� : %d, ���� ���ݷ� : %d\n", ++weaponLv, defaultPower);
	allPower = defaultPower + weaponLv * upPower;
	printf("���� ���� : %d, ���� ���ݷ� : %d\n\n", weaponLv, defaultPower);


	//���� ���丮 2
	
	// ������ �κ��丮. Slot. Stack x ����
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	// A �������� n �� ȹ��, B ������ m �� ȹ��
	// ���� �κ��丮�� ������ ���� á���� �� á���� ǥ���ϴ� ����� ǥ��
	// 3�� ������ ���

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 777;

	printf("1�ð� ���� ����� �ؼ� �������� ȹ���ߴ�.\n");
	printf("A������ : %d, B������ : %d ȹ���ߴ�.\n", ADrop, BDrop);

	// ������

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (AStackCount / ADrop) : (AStackCount / ADrop) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BStackCount / BDrop) : (BStackCount / BDrop) + 1;
	

	printf("A�� ���� : %d, B�� ���� : %d\n", AInventoryCount, BInventoryCount);
	printf("��� : %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");


}