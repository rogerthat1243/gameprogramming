/*
* �ۼ���: 2025.02.25
* �ۼ���: ������
* ����: �ڵ��� �帧�� ���� - �ݺ���
* for �ݺ���, while �ݺ���
*/

/*
* �ݺ���
*  - 1+1+1+1+1 = 1X5
* 
* for, while
* 
* for (int i=0 ;i < 10; i++)  // int i=0 <-- ������. ������ ���� (�󸶸�ŭ �ݺ��� ���ΰ�) ;  ����  ; ������? = �ݺ��Ǵ°� �� �Ǵ°� ������ üũ�ϴ� �κ�
* {} = ���� �۵��Ǵ� �κ��� ��������
* 
* // ���ǿ��� ��, ���� (true, false)
* // ������ ���̸� �ݺ��� ����, ������ ���� �ݺ����� ���.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("�ݺ��� ����1 \n");
	// A �̸��� �������� ȹ�� - ����
	int ACount = 0;
	printf("A�������� �� : %d\n", ACount);

	// ������ 1�� ȹ��
	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}

	printf("A�������� �� : %d\n\n", ACount);

	printf("�ݺ��� ����2 \n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}

	printf("B�������� �� : %d\n\n", BCount);

	printf("for �ݺ��� ����3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("���� I�� �� : %d\n", reverseI);
	}

	// ������ �̾߱⸦ ���� ǥ���غ���.

	// break

	for (;;)
	{
		// ���� ��ȭ Step
		printf("������ �̸� : %s\n", "�ռҵ�"); // �̸� ���� �ٲٴ� �� ���� �� �����
		
		int weaponLevel = 0;
		int basePower = 10;
		int weight = 5;
		int attackPower = basePower + weaponLevel * weight;

		//���� �̸�
		//���� ����
		//�⺻ ���ݷ�, ����, ����ġ
		//���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ

		// ��ȭ�� ����� ���ΰ� �׸��� ���ΰ�?
		// 2. ��ȭ �����ϴ� �ܰ�
		printf("��ȭ�� �����Ͻðڽ��ϱ�? ( Y / N )\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("��ȭ�� �����մϴ�.\n");
			break;
		}
		else if (check == 'N')
		{
			printf("��ȭ�� �׸��Ӵϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while(getchar() != '\n'); // ���ڿ� ���� ��, �ش� ���� ����

			if (another == 'Y')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else if (another == 'N')
			{
				printf("��ȭ�� �׸��Ӵϴ�.\n");
			}
			else
			{
				printf("�߸��� ���� �Է��߽��ϴ�.\n\n");
			}
		}
		break;
	}

	// �ݺ����� ����Ѵ�.
	// for �ݺ��� ����ؼ�
	// n�� �ݺ��ϴ� �ڵ带 ���� ǥ���ϱ� ����
	// �� �� �ݺ��ؾ� �� �� �� �𸣰ڴ� ����
	// ���� ) �߸��� ���� �Է����� �� ��Ȯ�� ���� �䱸�ϴ� �ڵ�

	// while �ݺ��� #include <stdbool.h> �� true�� ��� ����
	// ���� �ݺ���

	int xi = 0;

	while (xi < 10)	// ( ) ���ǽ� : ������ true�� �� {}�� �����Ѵ�. ������ false�� �ݺ����� �����Ѵ�.
	{
		xi++; //  while�� Ż���ϱ� ���� ���ǹ�

		printf("xi�� �� : %d\n", xi);
	}

	// for �ݺ����� ���� ������� while �ݺ����� ���� �������?
	// 
	// �ݺ� Ƚ���� ������ �ִٸ� for �ݺ����� �ۼ��ϱ� ����
	// �ݺ� Ƚ���� �� �𸣸� while �ݺ����� �ۼ��ϱ� ����


	// 2��ŭ �����ϴ� ������ ���� numA�� �ִ�.
	// �� numA�� 10���� ũ�ų� ���� �� ����Ǿ� �Ѵ�.
	// numA ���ڰ� 10���� Ŀ���� ���� �� �� �ݺ��ߴ��� �˰� �ʹ�.
	// �ݺ��� ��� ������ CountA�� ���

	int numA = 0; // ���� ��ġ�� ���� �ݺ� Ƚ���� ����
	int CountA = 0;
	printf("numA�� ���� �Է����ּ��� ( �� 10���� �۾ƾ� �մϴ�. ) \n\n");
	scanf_s("%d", &numA); // numA ���� ������.

	while (true) // �� �� �ݺ��ߴ��� �𸣴� while�� ����
	{
		numA += 2;
		CountA++;

		if (numA > 10)
		{
			printf("�ݺ��� Ƚ�� : %d\n", CountA);
			printf("���� �� : %d\n\n", numA);
			break;
		}
	}

	// ���� ǥ��

	while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}

	printf("�ݺ��� Ƚ�� : %d\n", CountA);
	printf("���� �� : %d\n\n", numA);


	printf("1���� 10 ������ ���� ¦�� print ����ϱ� �ǽ� ����\n"); // 2 �Է� �� 2, 3, 4 ������ ���

	


	printf("while �ݺ����� ����ؼ� Y�� N�� �Է��� ������ �ݺ��ϴ� �ڵ� �ۼ�");


}