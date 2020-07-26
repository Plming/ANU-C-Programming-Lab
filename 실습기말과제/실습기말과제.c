/*
C 프로그래밍 실습 기말 과제
20200604 컴퓨터교육과 김현석
*/

//scanf()관련; 지우지 마시오!!
#define _CRT_SECURE_NO_WARNINGS	


//01번 문제: 10진법 시계
#include <stdio.h>

int main()
{
	int hour, min;
	const int minPerDay = 1440;	//60진법 시계에서 하루는 1440분
	const int decimalMinPerDay = 2000;	//10진법 시계에서 하루는 2000분
	int time;

	scanf("%d %d", &hour, &min);

	//60진법 시계에서 흐른 시간을 분으로 변환
	time = 60 * hour + min;

	//60진법 체계의 분을 10진법 체계의 분으로 변환
	time = time * decimalMinPerDay / minPerDay;

	//10진법 시계에서 흐른 시간을 구했으므로, 시각을 구할 수 있다.
	printf("%d %d", time / 100, time % 100);
	return 0;
}



////02번 문제: 망고
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
//	//입력 받기
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%lf", &weight[i]);
//	}
//
//	//A와 B 비교
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
//	//C와 D 비교
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
//	//최대값 찾기
//	if (weight[rank[2]] > weight[rank[0]])
//	{
//		temp = rank[0];
//		rank[0] = rank[2];
//		rank[2] = temp;
//	}
//
//	//최소값 찾기
//	if (weight[rank[3]] > weight[rank[1]])
//	{
//		temp = rank[3];
//		rank[3] = rank[1];
//		rank[1] = temp;
//	}
//
//	//이외 값 비교
//	if (weight[rank[2]] > weight[rank[1]])
//	{
//		temp = rank[2];
//		rank[2] = rank[1];
//		rank[1] = temp;
//	}
//
//	//출력
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c ", 'A' + rank[i]);
//	}
//
//	return 0;
//}



////03번 문제: 산타와 장난감
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
//	int numToys = 0;	//만들어야 하는 기차와 비행기의 총 갯수
//	int h, m, k, n;
//	int time;	//분 단위로 시간을 바꾸어 저장
//
//	scanf("%d %d %d %d", &h, &m, &k, &n);
//
//	//기차와 비행기에 따라 numToys를 다르게 계산
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
//	//현재 시간을 분 단위로 바꿈
//	time = 60 * h + m;
//	//numToys 만큼의 장난감을 만드는데 걸리는 시간을 누적
//	time += 2 * numToys;
//
//	printf("%d %d", time / 60, time % 60);
//	return 0;
//}



////04번 문제: 꽝수 찾기
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



////05번 문제: 금강산
//#include <stdio.h>
//
//int main()
//{
//	int m, n, goalValue;
//	int i, j, k;
//	int currentValue;	//현재 보고있는 산봉우리의 번호
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



////06번 문제: 큰 아이의 나이
//#include <stdio.h>
//
//int main()
//{
//	int big;	//첫째의 나이
//	int med;	//둘째의 나이
//	int little;	//셋째의 나이
//	int val;	//세 아이의 나이의 곱과 합의 차
//	int n;
//
//	scanf("%d", &n);
//
//	//삼형제의 모든 나이의 경우의 수를 전부 확인
//	for (big = 1;; big++)
//	{
//		for (med = 1; med <= big; med++)
//		{
//			for (little = 1; little <= med; little++)
//			{
//				val = (big * med * little) - (big + med + little);
//				if (val == n || -val == n)
//				{
//					//쌍둥이가 있는지 확인
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



////07번 문제: 볼링점수 계산
//#include <stdio.h>
//
//enum scoreType
//{
//	STRIKE = 'X',
//	BALL = 'B',	//STRIKE 뒤에 오는 무의미한 값
//	SPARE = '/',
//	OPEN = '-',
//	GUTTER = 'G'
//};
//
//char board[22];
//
////char형 '0'~'9' 숫자 데이터를 int형 정수로 반환
//int CharToInt(char num);
//
////점수판에서 해당 index의 점수를 반환
//int ScoreCompute(int index);
//
////다음 인덱스를 참조해서 보너스 점수를 반환
////index: 인덱스
////numBonus: 보너스의 갯수 (ex.스트라이크=2개, 스페어=1개)
//int BonusCompute(int index, int numBonus);
//
//int main()
//{
//	int score = 0;
//	int i;
//
//	scanf("%s", board);
//
//	//0에서 9프레임까지 계산
//	for (i = 0; i < 18; i++)
//	{
//		score += ScoreCompute(i);
//
//		//스트라이크와 스페어의 보너스 점수 계산
//		if (board[i] == STRIKE)
//		{
//			//i+1은 B이기 때문에 i+2를 인수로 전달
//			score += BonusCompute(i + 2, 2);
//		}
//		else if (board[i] == SPARE)
//		{
//			score += BonusCompute(i + 1, 1);
//		}
//	}
//
//	//10프레임 계산
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
//		//HACK: i가 0일때 -1번 인덱스를 참조할 수 있지만, 정상적인 입력에선 SPARE는 i가 1 이상일 때만 나오므로 문제 없음
//		int spareValue;
//		spareValue = 10 - CharToInt(board[index - 1]);
//		return spareValue;
//	}
//
//	case OPEN: case GUTTER: case BALL:
//		return 0;
//
//	default:
//		//0부터 9까지의 문자 처리	 
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
//			//예외: 10프레임에는 XXX와 같은 입력이 주어질 수 있음
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
//		//0부터 9까지의 점수 처리
//		int value = CharToInt(board[index]);
//		return value + BonusCompute(index + 1, numBonus - 1);
//	}
//	}
//}



////보너스 문제: 레이더
//
////참고: C 수업에서 배운 가장 큰 type인 double로도 무리수를 표현할 수 없다.
////그러나 예를 들어 2시 방향에 있다는 것은 x와 y의 비율이 sqrt(3) : 1 이어야 한다.
////따라서 이 답안은 1, 2, 4, 5, ...와 같은 답이 나올 수 없음을 전제한다.
//
//#include <stdio.h>
//#include <math.h>	//sqrt() 정의
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
//	//12, 3, 6, 9와 같은 명확한 답 처리
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
//	//부등식의 영역을 이용하여 각 사분면에 맞게 답 처리
//	if (x > 0 && y > 0)
//	{
//		//1사분면 처리
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
//		//2사분면 처리
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
//		//3사분면 처리
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
//		//4사분면 처리
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