#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>	//Sleep() definition

//���� 01
int main()
{
	int n;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		printf("%d ", i);
		Sleep(1000);
	}
	printf("\a");
	return 0;
}

////���� 02
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);
//}

////���� 03
//int main()
//{
//	int n;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	printf("���: ");
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

////���� 04
//int main()
//{
//	int i, j;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 7; j++)
//		{
//			if (i + j >= 6)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

////���� 05
//int main()
//{
//	int n;
//	int i, j;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}