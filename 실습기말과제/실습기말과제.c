/*
C ���α׷��� �ǽ� �⸻ ����
20200604 ��ǻ�ͱ����� ������
*/

//scanf()����; ������ ���ÿ�!!
#define _CRT_SECURE_NO_WARNINGS	


//01�� ����: 10���� �ð�
#include <stdio.h>

int main()
{
	int hour, min;
	const int minPerDay = 1440;	//60���� �ð迡�� �Ϸ�� 1440��
	const int decimalMinPerDay = 2000;	//10���� �ð迡�� �Ϸ�� 2000��
	int time;

	scanf("%d %d", &hour, &min);

	//60���� �ð迡�� �帥 �ð��� ������ ��ȯ
	time = 60 * hour + min;

	//60���� ü���� ���� 10���� ü���� ������ ��ȯ
	time = time * decimalMinPerDay / minPerDay;

	//10���� �ð迡�� �帥 �ð��� �������Ƿ�, �ð��� ���� �� �ִ�.
	printf("%d %d", time / 100, time % 100);
	return 0;
}



////02�� ����: ����
//#include <stdio.h>
//
//enum mangoType
//{
//	A,
//	B,
//	C,
//	D
//};
//
//int main()
//{
//	double weight[4];
//	int rank[4];
//	int i, temp;
//
//	//�Է� �ޱ�
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%lf", &weight[i]);
//	}
//
//	//A�� B ��
//	if (weight[A] > weight[B])
//	{
//		rank[0] = A;
//		rank[1] = B;
//	}
//	else
//	{
//		rank[0] = B;
//		rank[1] = A;
//	}
//
//	//C�� D ��
//	if (weight[C] > weight[D])
//	{
//		rank[2] = C;
//		rank[3] = D;
//	}
//	else
//	{
//		rank[2] = D;
//		rank[3] = C;
//	}
//
//	//�ִ밪 ã��
//	if (weight[rank[2]] > weight[rank[0]])
//	{
//		temp = rank[0];
//		rank[0] = rank[2];
//		rank[2] = temp;
//	}
//
//	//�ּҰ� ã��
//	if (weight[rank[3]] > weight[rank[1]])
//	{
//		temp = rank[3];
//		rank[3] = rank[1];
//		rank[1] = temp;
//	}
//
//	//�̿� �� ��
//	if (weight[rank[2]] > weight[rank[1]])
//	{
//		temp = rank[2];
//		rank[2] = rank[1];
//		rank[1] = temp;
//	}
//
//	//���
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c ", 'A' + rank[i]);
//	}
//
//	return 0;
//}



////03�� ����: ��Ÿ�� �峭��
//#include <stdio.h>
//
//enum toyType
//{
//	Train = 1,
//	Airplane = 2
//};
//
//int main()
//{
//	int numToys = 0;	//������ �ϴ� ������ ������� �� ����
//	int h, m, k, n;
//	int time;	//�� ������ �ð��� �ٲپ� ����
//
//	scanf("%d %d %d %d", &h, &m, &k, &n);
//
//	//������ ����⿡ ���� numToys�� �ٸ��� ���
//	switch (k)
//	{
//	case Train:
//		numToys = n + ((n - 1) / 50) * 50;
//		break;
//	case Airplane:
//		numToys = n + ((n - 1) / 50 + 1) * 50;
//		break;
//	}
//
//	//���� �ð��� �� ������ �ٲ�
//	time = 60 * h + m;
//	//numToys ��ŭ�� �峭���� ����µ� �ɸ��� �ð��� ����
//	time += 2 * numToys;
//
//	printf("%d %d", time / 60, time % 60);
//	return 0;
//}



////04�� ����: �μ� ã��
//#include <stdio.h>
//
//int isGwangsu(int n)
//{
//	return (n % 9) == 3 ? 1 : 0;
//}
//
//int main()
//{
//	int i, n;
//	int num;
//	int count = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		if (isGwangsu(num))
//		{
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}



////05�� ����: �ݰ���
//#include <stdio.h>
//
//int main()
//{
//	int m, n, goalValue;
//	int i, j, k;
//	int currentValue;	//���� �����ִ� ����츮�� ��ȣ
//	int count = 0;
//
//	scanf("%d %d %d", &m, &n, &goalValue);
//
//	for (i = 0; i < (m / n); i++)
//	{
//		for (j = 0; j < (12000 / m); j++)
//		{
//			for (k = 1; k <= n; k++)
//			{
//				currentValue = (j * m) + (i * n) + k;
//				count++;
//				if (currentValue == goalValue)
//				{
//					printf("%d\n", count);
//					return 0;
//				}
//			}
//		}
//	}
//}



////06�� ����: ū ������ ����
//#include <stdio.h>
//
//int main()
//{
//	int big;	//ù°�� ����
//	int med;	//��°�� ����
//	int little;	//��°�� ����
//	int val;	//�� ������ ������ ���� ���� ��
//	int n;
//
//	scanf("%d", &n);
//
//	//�������� ��� ������ ����� ���� ���� Ȯ��
//	for (big = 1;; big++)
//	{
//		for (med = 1; med <= big; med++)
//		{
//			for (little = 1; little <= med; little++)
//			{
//				val = (big * med * little) - (big + med + little);
//				if (val == n || -val == n)
//				{
//					//�ֵ��̰� �ִ��� Ȯ��
//					if (big == med || med == little)
//					{
//						printf("%d", big);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//}



////07�� ����: �������� ���
//#include <stdio.h>
//
//enum scoreType
//{
//	STRIKE = 'X',
//	BALL = 'B',	//STRIKE �ڿ� ���� ���ǹ��� ��
//	SPARE = '/',
//	OPEN = '-',
//	GUTTER = 'G'
//};
//
//char board[22];
//
////char�� '0'~'9' ���� �����͸� int�� ������ ��ȯ
//int CharToInt(char num);
//
////�����ǿ��� �ش� index�� ������ ��ȯ
//int ScoreCompute(int index);
//
////���� �ε����� �����ؼ� ���ʽ� ������ ��ȯ
////index: �ε���
////numBonus: ���ʽ��� ���� (ex.��Ʈ����ũ=2��, �����=1��)
//int BonusCompute(int index, int numBonus);
//
//int main()
//{
//	int score = 0;
//	int i;
//
//	scanf("%s", board);
//
//	//0���� 9�����ӱ��� ���
//	for (i = 0; i < 18; i++)
//	{
//		score += ScoreCompute(i);
//
//		//��Ʈ����ũ�� ������� ���ʽ� ���� ���
//		if (board[i] == STRIKE)
//		{
//			//i+1�� B�̱� ������ i+2�� �μ��� ����
//			score += BonusCompute(i + 2, 2);
//		}
//		else if (board[i] == SPARE)
//		{
//			score += BonusCompute(i + 1, 1);
//		}
//	}
//
//	//10������ ���
//	for (i = 18; i < 21; i++)
//	{
//		score += ScoreCompute(i);
//	}
//
//	printf("%d", score);
//
//	return 0;
//}
//
//int CharToInt(char num)
//{
//	return num - '0';
//}
//
//int ScoreCompute(int index)
//{
//	switch (board[index])
//	{
//	case STRIKE:
//		return 10;
//
//	case SPARE:
//	{
//		//HACK: i�� 0�϶� -1�� �ε����� ������ �� ������, �������� �Է¿��� SPARE�� i�� 1 �̻��� ���� �����Ƿ� ���� ����
//		int spareValue;
//		spareValue = 10 - CharToInt(board[index - 1]);
//		return spareValue;
//	}
//
//	case OPEN: case GUTTER: case BALL:
//		return 0;
//
//	default:
//		//0���� 9������ ���� ó��	 
//		return CharToInt(board[index]);
//	}
//}
//
//int BonusCompute(int index, int numBonus)
//{
//	if (numBonus == 0)
//	{
//		return 0;
//	}
//
//	switch (board[index])
//	{
//	case STRIKE:
//		if (index < 18)
//		{
//			return 10 + BonusCompute(index + 2, numBonus - 1);
//		}
//		else
//		{
//			//����: 10�����ӿ��� XXX�� ���� �Է��� �־��� �� ����
//			return 10 + BonusCompute(index + 1, numBonus - 1);
//		}
//
//	case SPARE:
//	{
//		int spareValue = 10 - CharToInt(board[index - 1]);
//		return spareValue + BonusCompute(index + 1, numBonus - 1);
//	}
//
//	case OPEN: case GUTTER: case BALL:
//		return BonusCompute(index + 1, numBonus - 1);
//
//	default:
//	{
//		//0���� 9������ ���� ó��
//		int value = CharToInt(board[index]);
//		return value + BonusCompute(index + 1, numBonus - 1);
//	}
//	}
//}



////���ʽ� ����: ���̴�
//
////����: C �������� ��� ���� ū type�� double�ε� �������� ǥ���� �� ����.
////�׷��� ���� ��� 2�� ���⿡ �ִٴ� ���� x�� y�� ������ sqrt(3) : 1 �̾�� �Ѵ�.
////���� �� ����� 1, 2, 4, 5, ...�� ���� ���� ���� �� ������ �����Ѵ�.
//
//#include <stdio.h>
//#include <math.h>	//sqrt() ����
//
//void Solution(double x, double y);
//
//int main()
//{
//	double x, y;
//
//	while (1)
//	{
//		scanf("%lf %lf", &x, &y);
//		Solution(x, y);
//		printf("\n");
//	}
//
//	return 0;
//}
//
//void Solution(double x, double y)
//{
//	//12, 3, 6, 9�� ���� ��Ȯ�� �� ó��
//	if (x == 0)
//	{
//		if (y > 0)
//		{
//			printf("12\n");
//		}
//		else
//		{
//			printf("6\n");
//		}
//		return;
//	}
//	else if (y == 0)
//	{
//		if (x > 0)
//		{
//			printf("3\n");
//		}
//		else
//		{
//			printf("9\n");
//		}
//		return;
//	}
//
//	//�ε���� ������ �̿��Ͽ� �� ��и鿡 �°� �� ó��
//	if (x > 0 && y > 0)
//	{
//		//1��и� ó��
//		if (y > sqrt(3) * x)
//		{
//			printf("12 1\n");
//		}
//		else if (y < x / sqrt(3))
//		{
//			printf("2 3\n");
//		}
//		else
//		{
//			printf("1 2\n");
//		}
//		return;
//	}
//	else if (x > 0 && y < 0)
//	{
//		//2��и� ó��
//		if (y < -sqrt(3) * x)
//		{
//			printf("5 6\n");
//		}
//		else if (y > -x / sqrt(3))
//		{
//			printf("3 4\n");
//		}
//		else
//		{
//			printf("4 5\n");
//		}
//		return;
//	}
//	else if (x < 0 && y < 0)
//	{
//		//3��и� ó��
//		if (y < sqrt(3) * x)
//		{
//			printf("6 7\n");
//		}
//		else if (y > x / sqrt(3))
//		{
//			printf("8 9\n");
//		}
//		else
//		{
//			printf("7 8\n");
//		}
//		return;
//	}
//	else if (x < 0 && y > 0)
//	{
//		//4��и� ó��
//		if (y > -sqrt(3) * x)
//		{
//			printf("11 12\n");
//		}
//		else if (y < -x / sqrt(3))
//		{
//			printf("9 10\n");
//		}
//		else
//		{
//			printf("10 11\n");
//		}
//		return;
//	}
//
//	return;
//}