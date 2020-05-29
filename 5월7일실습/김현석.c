#define _CRT_SECURE_NO_WARNINGS

//문제 01
#include <stdio.h>

int main()
{
	char ch;
	
	printf("문자를 입력하시오: ");
	ch = getchar();

	switch (ch)
	{
	case 'a':
		printf("모음입니다.");
		break;
	case 'e':
		printf("모음입니다.");
		break;
	case 'i':
		printf("모음입니다.");
		break;
	case 'o':
		printf("모음입니다.");
		break;
	case 'u':
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}

	return 0;
}

////문제 02
//#include <stdio.h>
//int main()
//{
//	int x, y;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &x);
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &y);
//
//	if ((x % y) == 0)
//	{
//		printf("약수입니다.");
//	}
//	else
//	{
//		printf("약수가 아닙니다.");
//	}
//
//	return 0;
//}

////문제 03
//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//
//	printf("3개의 정수를 입력하시오: ");
//	scanf("%d %d %d", &x, &y, &z);
//
//	if (x < y && x < z)	//X is the smallest integer
//	{
//		printf("제일 작은 정수는 %d입니다.", x);
//	}
//	else if (y < z)	//Y is the smallest integer
//	{
//		printf("제일 작은 정수는 %d입니다.", y);
//	}
//	else	//Z is the smallest integer
//	{
//		printf("제일 작은 정수는 %d입니다.", z);
//	}
//
//	return 0;
//}

////문제 04
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
//		printf("선택하시오(1: 가위, 2: 바위, 3:보) ");
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
//	printf("컴퓨터: %d\n", comValue);
//	if (status == WIN)
//	{
//		printf("사용자가 이겼습니다.");
//	}
//	else if (status == LOSE)
//	{
//		printf("사용자가 졌습니다.");
//	}
//	else
//	{
//		printf("비겼습니다.");
//	}
//
//	return 0;
//}

////문제 05
//#include <stdio.h>
//
//#define PROPER_HEIGHT 140
//#define PROPER_AGE 10
//
//int main()
//{
//	int height, age;
//
//	printf("키를 입력하시오(cm): ");
//	scanf("%d", &height);
//
//	printf("나이를 입력하시오: ");
//	scanf("%d", &age);
//
//	if (PROPER_HEIGHT <= height && PROPER_AGE <= age)
//	{
//		printf("타도 좋습니다.");
//	}
//	else
//	{
//		printf("죄송합니다.");
//	}
//
//	return 0;
//}

////문제 06
//#include <stdio.h>
//
//int main()
//{
//	int monValue;
//
//	printf("월번호를 입력하시오: ");
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
//		printf("잘못된 값입니다.");
//		break;
//	}
//
//	return 0;
//}

////문제 07
//#include <stdio.h>
//
//int main()
//{
//	double height, weight;
//	double properWeight;
//
//	printf("키와 체중을 입력하세요: ");
//	scanf("%lf %lf", &height, &weight);
//
//	properWeight = (height - 100) * 0.9;
//
//	if (weight > properWeight)
//	{
//		printf("과체중입니다.");
//	}
//	else if (weight < properWeight)
//	{
//		printf("저체중입니다.");
//	}
//	else
//	{
//		printf("정상입니다.");
//	}
//	return 0;
//}

////문제 08
//#include <stdio.h>
//
//int main()
//{
//	int time, age;
//	int fare;
//
//	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
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
//	printf("요금은 %d원 입니다.", fare);
//	return 0;
//}

////문제 09
//#include <stdio.h>
//
//int main()
//{
//	double x, y;
//	printf("x의 값을 입력하시오: ");
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
//	printf("f(x)의 값은 %lf", y);
//	return 0;
//}

////문제 10
//#include <stdio.h>
//
//int main()
//{
//	double x, y;
//
//	printf("좌표(x, y): ");
//	scanf("%lf %lf", &x, &y);
//
//	if (x > 0 && y > 0)
//	{
//		printf("제1사분면");
//	}
//	else if (x < 0 && y > 0)
//	{
//		printf("제2사분면");
//	}
//	else if (x < 0 && y < 0)
//	{
//		printf("제3사분면");
//	}
//	else if (x > 0 && y < 0)
//	{
//		printf("제4사분면");
//	}
//	return 0;
//}