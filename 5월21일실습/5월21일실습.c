#define _CRT_SECURE_NO_WARNINGS

//Binary search
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	const int answer = (rand() % 99) + 1;
	int guess;
	int tries = 0;
	
	do
	{
		printf("정답을 추측하여 보시오(0보다 크고 100보다 작은: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)  // 사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 정답보다 높습니다.\n");
		else if (guess < answer)  // 사용자가 입력한 정수가 정답보다 낮으면
			printf("제시한 정수가 정답보다 낮습니다.\n");
	} while (guess != answer);
	printf("축하합니다. 시도횟수=%d\n", tries);
	return 0;
}

////factorial with iteration
//#include <stdio.h>
//
//int main()
//{
//	long fact = 1;
//	int i, n;
//
//	printf("정수를 입력하시요: ");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		fact *= i;
//	}
//
//	printf("%d!은 %d입니다.\n", n, fact);
//
//	return 0;
//}

////factorial with while()
//#include <stdio.h>
//
//int main()
//{
//	long fact = 1;
//	int i = 1, n;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	while (i <= n)
//	{
//		fact *= i;
//		i++;
//	}
//
//	printf("%d!은 %d입니다.\n", n, fact);
//	return 0;
//}

////draw rectangle
//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	for (y = 0; y < 5; y++)
//	{
//		for (x = 0; x < 10; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////brute force to find pythagorian triple
//#include <stdio.h>
//
//int main()
//{
//	for (int a = 1; a <= 100; a++)
//	{
//		for (int b = 1; b <= 100; b++)
//		{
//			for (int c = 1; c <= 100; c++)
//			{
//				if (a * a + b * b == c * c)
//				{
//					printf("%d %d %d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}

////money computer
//#include <stdio.h>
//
//#define RATE 0.07
//#define INVESTMENT 10000000
//#define YEARS 10
//
//int main()
//{
//	int i;
//	double total = INVESTMENT;
//
//	printf("===========\n");
//	printf("연도 원리금\n");
//	printf("===========\n");
//
//	for (i = 1; i <= YEARS; i++)
//	{
//		total = total * (1 + RATE);
//		printf("%2d %10.1f\n", i, total);
//	}
//
//	return 0;
//}

////how much over 10 times
//#include <stdio.h>
//#define RATE 0.05
//#define INVESTMENT 1000000
//
//int main()
//{
//	double currentValue = INVESTMENT;
//	int years = 0;
//
//	while (currentValue < (double)INVESTMENT * 10)
//	{
//		currentValue *= 1+RATE;
//		years++;
//	}
//
//	printf("%d년 후에 원금의 10배가 넘는 원리금 %10.1f원을 찾을 수 있습니다.\n", years, currentValue);
//	return 0;
//}