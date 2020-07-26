#define _CRT_SECURE_NO_WARNINGS

//별 찍기
#include <stdio.h>

void print_stars()
{
	for (int i = 0; i < 30; i++)
	{
		printf("*");
	}
}

int main()
{
	print_stars();
	printf("\nHello World!\n");
	print_stars();
	printf("\n");

	return 0;
}

////큰 수 반환
//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a, b;
//
//	printf("두 개의 정수를 입력하시오: ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b));
//	return 0;
//}

////정수 입력받기, 더하기 함수
//#include <stdio.h>
//
//int get_integer()
//{
//	int value;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &value);
//
//	return value;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x = get_integer();
//	int y = get_integer();
//
//	int sum = add(x, y);
//	printf("두 수의 합은 %d입니다.\n", sum);
//	return 0;
//}

////팩토리얼 계산
//#include <stdio.h>
//
//int factorial(int n)
//{
//	long result = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//
//	return result;
//}
//
//int main()
//{
//	int n;
//
//	printf("알고 싶은 팩토리얼 값은? ");
//	scanf("%d", &n);
//
//	printf("%d!의 값은 %d입니다.\n", n, factorial(n));
//
//	return 0;
//}

////섭씨 화씨 변환
//#include <stdio.h>
//
//void printOptions()
//{
//	printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
//	printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
//	printf(" 'q' 종료\n");
//}
//
//double celToFeh(double cel)
//{
//	return 9.0 / 5.0 * cel + 32;
//}
//
//double fehToCel(double feh)
//{
//	return (feh - 32.0) * 5.0 / 9.0;
//}
//
//int main()
//{
//	char choice;
//	double temp;
//
//	while (1)
//	{
//		printOptions();
//		printf("메뉴에서 선택하세요. ");
//		choice = getchar();
//
//		if (choice == 'q')
//		{
//			break;
//		}
//		else if (choice == 'c')
//		{
//			printf("섭씨온도: ");
//			scanf("%lf", &temp);
//			printf("화씨온도: %lf\n", celToFeh(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("화씨온도: ");
//			scanf("%lf", &temp);
//			printf("섭씨온도: %lf\n", fehToCel(temp));
//		}
//
//		getchar();
//	}
//
//	return 0;
//}

////팩토리얼로 조합 계산하기
//#include <stdio.h>
//
//int get_integer();
//int combination(int n, int r);
//int factorial(int n);
//
//int main()
//{
//	int a, b;
//
//	a = get_integer();
//	b = get_integer();
//
//	printf("C(%d, %d) = %d\n", a, b, combination(a, b));
//	return 0;
//}
//
//int get_integer()
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	return n;
//}
//
//int factorial(int n)
//{
//	int i;
//	long result = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//
//	return result;
//}
//
//int combination(int n, int r)
//{
//	return factorial(n) / (factorial(r) * factorial(n - r));
//}