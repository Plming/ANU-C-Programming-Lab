//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	char c;
//	int i;
//	float f;
//
//	c = 10000;
//	i = 1.23456 + 10;
//	f = 10 + 20;
//
//	printf("c = %d, i = %d, f = %f\n", c, i, f);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	double f;
//
//	f = 5 / 4;
//	printf("%f\n", f);
//
//	f = (double)5 / 4;
//	printf("%f\n", f);
//
//	f = 5.0 / 4;
//	printf("%f\n", f);
//
//	f = (double)5 / (double)4;
//	printf("%f\n", f);
//
//	i = 1.3 + 1.8;
//	printf("%d\n", i);
//
//	i = (int)1.3 + (int)1.8;
//	printf("%d\n", i);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	double f_temp;
//	double c_temp;
//
//	printf("ȭ���µ��� �Է��Ͻÿ�");
//	scanf("%lf", &f_temp);
//	c_temp = (double)5 / 9 * (f_temp - 32);
//	printf("�����µ��� %f�Դϴ�.", c_temp);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &number);
//
//	/*
//	if (number < 0)
//	{
//		number = -number;
//	}
//	*/
//
//	number = abs(number);
//	printf("���밪�� %d �Դϴ�.\n", number);
//
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &number);
//
//	if ((number % 2) == 0)
//	{
//		printf("�Էµ� ������ ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("�Էµ� ������ Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int n1, n2, n3;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n1);
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n2);
//
//	if (n2 == 0)
//	{
//		printf("0���� ���� ���� �����ϴ�.\n");
//	}
//	else
//	{
//		n3 = n1 / n2;
//		printf("����� %d�Դϴ�.\n", n3);
//	}
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int year;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &year);
//
//	if ((((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0))
//	{
//		printf("%d���� �����Դϴ�.\n", year);
//	}
//	else
//	{
//		printf("%d���� ������ �ƴմϴ�.\n", year);
//	}
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int score;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &score);
//
//	if (score >= 90)
//	{
//		printf("�հ�: ����A\n");
//	}
//	else if (score >= 80)
//	{
//		printf("�հ�: ����B\n");
//	}
//	else if (score >= 70)
//	{
//		printf("�հ�: ����C\n");
//	}
//	else if (score >= 60)
//	{
//		printf("�հ�: ����D\n");
//	}
//	else
//	{
//		printf("���հ�: ����F\n");
//	}
//
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	char ch;
//
//	printf("���ڸ� �Է��Ͻÿ�: ");
//	scanf("%c", &ch);
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		printf("%c�� �빮���Դϴ�.\n", ch);
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("%c�� �ҹ����Դϴ�.\n", ch);
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("%c�� �����Դϴ�.\n", ch);
//	}
//	else
//	{
//		printf("%c�� ��Ÿ�����Դϴ�.\n", ch);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char op;
//	int x, y, result;
//
//	printf("������ �Է��Ͻÿ�");
//	printf("(��: 2 + 5) ");
//	printf(">>");
//
//	scanf("%d %c %d", &x, &op, &y);
//
//	if (op == '+')
//	{
//		result = x + y;
//	}
//	else if (op == '-')
//	{
//		result = x - y;
//	}
//	else if (op == '*')
//	{
//		result = x * y;
//	}
//	else if (op == '/')
//	{
//		result = x / y;
//	}
//	else if (op == '%')
//	{
//		result = x % y;
//	}
//	else
//	{
//		printf("�������� �ʴ� �������Դϴ�. ");
//		result = 0;
//	}
//
//	printf("%d %c %d = %d ", x, op, y, result);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 0:
//		printf("����\n");
//		break;
//	case 1:
//		printf("�ϳ�\n");
//		break;
//	case 2:
//		printf("��\n");
//		break;
//	default:
//		printf("����\n");
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x, y, result;
//	char op;
//
//	printf("���� ������ ����\n>> ");
//	scanf("%d %c %d", &x, &op, &y);
//
//	switch (op)
//	{
//	case '+':
//		result = x + y;
//		break;
//	case '-':
//		result = x - y;
//		break;
//	case '*':
//		result = x * y;
//		break;
//	case '/':
//		result = x / y;
//		break;
//	case '%':
//		result = x % y;
//		break;
//	default:
//		printf("�������� �ʴ� �������Դϴ�. ");
//		result = 0;
//		break;
//	}
//	printf("%d %c %d = %d ", x, op, y, result);
//	return 0;
//}