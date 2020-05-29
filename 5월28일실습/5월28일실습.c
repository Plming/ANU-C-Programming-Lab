#define _CRT_SECURE_NO_WARNINGS

//5월 28일 실습과제
#include <stdio.h>

int main()
{
	const int times = 3;
	const int limit = 200;
	int startNum;
	int endNum;
	int sum = 0;
	int i;
	int flag = 0;

	printf("startNum: ");
	scanf("%d", &startNum);

	printf("endNum: ");
	scanf("%d", &endNum);

	for (i = startNum; i <= endNum; i++)
	{
		if (sum > limit)
		{
			flag = 1;
			break;
		}

		if (i % 3 != 0)
		{
			continue;
		}

		sum += i;
		printf("[%3d] %5d\n", i, sum);
	}

	if (flag)
	{
		printf("결과: %3d", i - 1);
	}
	else
	{
		printf("결과: limit을 넘지 못함");
	}
	return 0;
}

////06번 문제
//#include <stdio.h>
//
//void showHelp()
//{
//	printf("**************\n");
//	printf("A---- Add\n");
//	printf("S---- Subtract\n");
//	printf("M---- Multiply\n");
//	printf("D---- Divide\n");
//	printf("Q---- Quit\n");
//	printf("**************\n");
//	printf("연산을 선택하시오: ");
//}
//
//int main()
//{
//	char op;
//	int a = 0, b = 1;
//
//	do
//	{
//		showHelp();
//		scanf(" %c", &op);
//
//		if (op == 'Q')
//		{
//			break;
//		}
//		else if (op == 'A' || op == 'S' || op == 'M' || op == 'D')
//		{
//			printf("두수를 공백으로 분리하여 입력하시오: ");
//			scanf("%d %d", &a, &b);
//
//			switch (op)
//			{
//			case 'A':
//				printf("%d\n\n", a + b);
//				break;
//			case 'S':
//				printf("%d\n\n", a - b);
//				break;
//			case 'M':
//				printf("%d\n\n", a * b);
//				break;
//			case 'D':
//				if (b == 0)
//				{
//					printf("0으로 나눌 수 없습니다.\n\n");
//					break;
//				}
//				printf("%d\n\n", a / b);
//				break;
//			}
//		}
//	} while (op != 'Q');
//	return 0;
//}

////07번 문제
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 2; i < 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//}

////08번 문제
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int length;
//	do
//	{
//		printf("막대의 높이(종료: -1): ");
//		scanf("%d", &length);
//		for (i = 0; i < length; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	} while (length != -1);
//	return 0;
//}

////09번 문제
//#include <stdio.h>
//
//int main()
//{
//	const int limit = 10000;
//	int i = 1;
//	int sum = 0;
//	while (1)
//	{
//		sum += i;
//		if (sum > limit)
//		{
//			sum -= i;
//			--i;
//			break;
//		}
//		i++;
//	}
//	printf("1부터 %d까지의 합이 %d입니다.", i, sum);
//	return 0;
//}

////10번 문제
//#include <stdio.h>
//
//int main()
//{
//	double r;
//	int n;
//	double result = 1.0;
//
//	printf("실수의 값을 입력하시오: ");
//	scanf("%lf", &r);
//
//	printf("거듭제곱횟수를 입력하시오: ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		result = result * r;
//	}
//
//	printf("결과값은 %lf\n", result);
//	return 0;
//}

////11번 문제
//#include <stdio.h>
//
//int main()
//{
//	int i, n;
//	int sum = 0;
//	printf("n의 값을 입력하시오: ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i * i;
//	}
//	printf("계산값은 %d입니다.\n", sum);
//	return 0;
//}

////12번 문제
//#include <stdio.h>
//
//int main()
//{
//	int currentTerm = 0;
//	int nextTerm = 1;
//	int temp;
//	int i, n;
//
//	printf("몇 번째 항까지 구할까요? ");
//	scanf("%d", &n);
//
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d, ", currentTerm);
//		temp = currentTerm + nextTerm;
//		currentTerm = nextTerm;
//		nextTerm = temp;
//	}
//
//	return 0;
//}

////13번 문제
//#include <stdio.h>
//
//int main()
//{
//	int n, r, perm = 1;
//
//	printf("n의 값: ");
//	scanf("%d", &n);
//
//	printf("r의 값: ");
//	scanf("%d", &r);
//
//	for (int i = n; i >= n - r + 1; i--)
//	{
//		perm *= i;
//	}
//
//	printf("순열의 값은 %d입니다.\n", perm);
//	return 0;
//}

////14번 문제
//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	while (1)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//
//		printf("%d", n % 10);
//		n /= 10;
//	}
//
//	return 0;
//}