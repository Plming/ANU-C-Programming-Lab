#define _CRT_SECURE_NO_WARNINGS

//�� ���
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

////ū �� ��ȯ
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
//	printf("�� ���� ������ �Է��Ͻÿ�: ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b));
//	return 0;
//}

////���� �Է¹ޱ�, ���ϱ� �Լ�
//#include <stdio.h>
//
//int get_integer()
//{
//	int value;
//
//	printf("������ �Է��Ͻÿ�: ");
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
//	printf("�� ���� ���� %d�Դϴ�.\n", sum);
//	return 0;
//}

////���丮�� ���
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
//	printf("�˰� ���� ���丮�� ����? ");
//	scanf("%d", &n);
//
//	printf("%d!�� ���� %d�Դϴ�.\n", n, factorial(n));
//
//	return 0;
//}

////���� ȭ�� ��ȯ
//#include <stdio.h>
//
//void printOptions()
//{
//	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
//	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
//	printf(" 'q' ����\n");
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
//		printf("�޴����� �����ϼ���. ");
//		choice = getchar();
//
//		if (choice == 'q')
//		{
//			break;
//		}
//		else if (choice == 'c')
//		{
//			printf("�����µ�: ");
//			scanf("%lf", &temp);
//			printf("ȭ���µ�: %lf\n", celToFeh(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("ȭ���µ�: ");
//			scanf("%lf", &temp);
//			printf("�����µ�: %lf\n", fehToCel(temp));
//		}
//
//		getchar();
//	}
//
//	return 0;
//}

////���丮��� ���� ����ϱ�
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
//	printf("������ �Է��Ͻÿ�: ");
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