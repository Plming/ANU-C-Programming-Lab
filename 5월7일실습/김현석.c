#define _CRT_SECURE_NO_WARNINGS

//���� 01
#include <stdio.h>

int main()
{
	char ch;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();

	switch (ch)
	{
	case 'a':
		printf("�����Դϴ�.");
		break;
	case 'e':
		printf("�����Դϴ�.");
		break;
	case 'i':
		printf("�����Դϴ�.");
		break;
	case 'o':
		printf("�����Դϴ�.");
		break;
	case 'u':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}

	return 0;
}

////���� 02
//#include <stdio.h>
//int main()
//{
//	int x, y;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &x);
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &y);
//
//	if ((x % y) == 0)
//	{
//		printf("����Դϴ�.");
//	}
//	else
//	{
//		printf("����� �ƴմϴ�.");
//	}
//
//	return 0;
//}

////���� 03
//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//
//	printf("3���� ������ �Է��Ͻÿ�: ");
//	scanf("%d %d %d", &x, &y, &z);
//
//	if (x < y && x < z)	//X is the smallest integer
//	{
//		printf("���� ���� ������ %d�Դϴ�.", x);
//	}
//	else if (y < z)	//Y is the smallest integer
//	{
//		printf("���� ���� ������ %d�Դϴ�.", y);
//	}
//	else	//Z is the smallest integer
//	{
//		printf("���� ���� ������ %d�Դϴ�.", z);
//	}
//
//	return 0;
//}

////���� 04
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//enum eValue
//{
//	SCISSORS = 1,
//	ROCK,
//	PAPER
//};
//
//enum eStatus
//{
//	LOSE = 0,
//	WIN,
//	DRAW
//};
//
//int main()
//{
//	int playerValue, comValue;
//	int status = 0;	//Win, Lose or Draw
//	srand(time(NULL));	//Set random seed to time
//	comValue = (rand() % 3) + 1;
//
//	do
//	{
//		printf("�����Ͻÿ�(1: ����, 2: ����, 3:��) ");
//		scanf("%d", &playerValue);
//	} while (playerValue != SCISSORS
//		&& playerValue != ROCK
//		&& playerValue != PAPER);	//Get player's proper choice
//
//	if (playerValue == SCISSORS)
//	{
//		switch (comValue)
//		{
//		case SCISSORS:
//			status = DRAW;
//			break;
//		case ROCK:
//			status = LOSE;
//			break;
//		case PAPER:
//			status = WIN;
//			break;
//		}
//	}
//	else if (playerValue == ROCK)
//	{
//		switch (comValue)
//		{
//		case SCISSORS:
//			status = WIN;
//			break;
//		case ROCK:
//			status = DRAW;
//			break;
//		case PAPER:
//			status = LOSE;
//			break;
//		}
//	}
//	else //playerValue == PAPER
//	{
//		switch (comValue)
//		{
//		case SCISSORS:
//			status = LOSE;
//			break;
//		case ROCK:
//			status = WIN;
//			break;
//		case PAPER:
//			status = DRAW;
//			break;
//		}
//	}
//
//	printf("��ǻ��: %d\n", comValue);
//	if (status == WIN)
//	{
//		printf("����ڰ� �̰���ϴ�.");
//	}
//	else if (status == LOSE)
//	{
//		printf("����ڰ� �����ϴ�.");
//	}
//	else
//	{
//		printf("�����ϴ�.");
//	}
//
//	return 0;
//}

////���� 05
//#include <stdio.h>
//
//#define PROPER_HEIGHT 140
//#define PROPER_AGE 10
//
//int main()
//{
//	int height, age;
//
//	printf("Ű�� �Է��Ͻÿ�(cm): ");
//	scanf("%d", &height);
//
//	printf("���̸� �Է��Ͻÿ�: ");
//	scanf("%d", &age);
//
//	if (PROPER_HEIGHT <= height && PROPER_AGE <= age)
//	{
//		printf("Ÿ�� �����ϴ�.");
//	}
//	else
//	{
//		printf("�˼��մϴ�.");
//	}
//
//	return 0;
//}

////���� 06
//#include <stdio.h>
//
//int main()
//{
//	int monValue;
//
//	printf("����ȣ�� �Է��Ͻÿ�: ");
//	scanf("%d", &monValue);
//
//	switch (monValue)
//	{
//	case 1:
//		printf("Jan");
//		break;
//	case 2:
//		printf("Feb");
//		break;
//	case 3:
//		printf("Mar");
//		break;
//	case 4:
//		printf("Apr");
//		break;
//	case 5:
//		printf("May");
//		break;
//	case 6:
//		printf("Jun");
//		break;
//	case 7:
//		printf("Jul");
//		break;
//	case 8:
//		printf("Aug");
//		break;
//	case 9:
//		printf("Sep");
//		break;
//	case 10:
//		printf("Oct");
//		break;
//	case 11:
//		printf("Nov");
//		break;
//	case 12:
//		printf("Dec");
//		break;
//	default:
//		printf("�߸��� ���Դϴ�.");
//		break;
//	}
//
//	return 0;
//}

////���� 07
//#include <stdio.h>
//
//int main()
//{
//	double height, weight;
//	double properWeight;
//
//	printf("Ű�� ü���� �Է��ϼ���: ");
//	scanf("%lf %lf", &height, &weight);
//
//	properWeight = (height - 100) * 0.9;
//
//	if (weight > properWeight)
//	{
//		printf("��ü���Դϴ�.");
//	}
//	else if (weight < properWeight)
//	{
//		printf("��ü���Դϴ�.");
//	}
//	else
//	{
//		printf("�����Դϴ�.");
//	}
//	return 0;
//}

////���� 08
//#include <stdio.h>
//
//int main()
//{
//	int time, age;
//	int fare;
//
//	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
//	scanf("%d %d", &time, &age);
//
//	if (time >= 17)
//	{
//		fare = 10000;
//	}
//	else
//	{
//		if (age > 12 && age < 65)
//		{
//			fare = 34000;
//		}
//		else
//		{
//			fare = 25000;
//		}
//	}
//	printf("����� %d�� �Դϴ�.", fare);
//	return 0;
//}

////���� 09
//#include <stdio.h>
//
//int main()
//{
//	double x, y;
//	printf("x�� ���� �Է��Ͻÿ�: ");
//	scanf("%lf", &x);
//
//	if (x > 0)
//	{
//		y = 7 * x + 2;
//	}
//	else
//	{
//		y = x * x - 9 * x + 2;
//	}
//
//	printf("f(x)�� ���� %lf", y);
//	return 0;
//}

////���� 10
//#include <stdio.h>
//
//int main()
//{
//	double x, y;
//
//	printf("��ǥ(x, y): ");
//	scanf("%lf %lf", &x, &y);
//
//	if (x > 0 && y > 0)
//	{
//		printf("��1��и�");
//	}
//	else if (x < 0 && y > 0)
//	{
//		printf("��2��и�");
//	}
//	else if (x < 0 && y < 0)
//	{
//		printf("��3��и�");
//	}
//	else if (x > 0 && y < 0)
//	{
//		printf("��4��и�");
//	}
//	return 0;
//}