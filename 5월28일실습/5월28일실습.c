#define _CRT_SECURE_NO_WARNINGS

//5�� 28�� �ǽ�����
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
		printf("���: %3d", i - 1);
	}
	else
	{
		printf("���: limit�� ���� ����");
	}
	return 0;
}

////06�� ����
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
//	printf("������ �����Ͻÿ�: ");
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
//			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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
//					printf("0���� ���� �� �����ϴ�.\n\n");
//					break;
//				}
//				printf("%d\n\n", a / b);
//				break;
//			}
//		}
//	} while (op != 'Q');
//	return 0;
//}

////07�� ����
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

////08�� ����
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int length;
//	do
//	{
//		printf("������ ����(����: -1): ");
//		scanf("%d", &length);
//		for (i = 0; i < length; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	} while (length != -1);
//	return 0;
//}

////09�� ����
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
//	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
//	return 0;
//}

////10�� ����
//#include <stdio.h>
//
//int main()
//{
//	double r;
//	int n;
//	double result = 1.0;
//
//	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
//	scanf("%lf", &r);
//
//	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		result = result * r;
//	}
//
//	printf("������� %lf\n", result);
//	return 0;
//}

////11�� ����
//#include <stdio.h>
//
//int main()
//{
//	int i, n;
//	int sum = 0;
//	printf("n�� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i * i;
//	}
//	printf("��갪�� %d�Դϴ�.\n", sum);
//	return 0;
//}

////12�� ����
//#include <stdio.h>
//
//int main()
//{
//	int currentTerm = 0;
//	int nextTerm = 1;
//	int temp;
//	int i, n;
//
//	printf("�� ��° �ױ��� ���ұ��? ");
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

////13�� ����
//#include <stdio.h>
//
//int main()
//{
//	int n, r, perm = 1;
//
//	printf("n�� ��: ");
//	scanf("%d", &n);
//
//	printf("r�� ��: ");
//	scanf("%d", &r);
//
//	for (int i = n; i >= n - r + 1; i--)
//	{
//		perm *= i;
//	}
//
//	printf("������ ���� %d�Դϴ�.\n", perm);
//	return 0;
//}

////14�� ����
//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	printf("������ �Է��Ͻÿ�: ");
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