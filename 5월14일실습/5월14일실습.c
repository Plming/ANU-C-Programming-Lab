//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////Calculator
//int main()
//{
//	char op;
//	int x, y, result = 0;
//
//	printf("������ �Է��Ͻÿ�(��: 2 + 5)>> ");
//
//	scanf("%d %c %d", &x, &op, &y);
//	if (op == '+')
//		result = x + y;
//	else if (op == '-')
//		result = x - y;
//	else if (op == '*')
//		result = x * y;
//	else if (op == '/')
//		result = x / y;
//	else if (op == '%')
//		result = x % y;
//	else
//		printf("�������� �ʴ� �������Դϴ�. ");
//
//	printf("%d %c %d = %d ", x, op, y, result);
//	return 0;
//}

////Quadratic equation solver
//#include <math.h>
//
//int main()
//{
//	double a, b, c, dis;
//
//	printf("��� a, b, c�� ���ʴ�� �Է��Ͻÿ�: ");
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	if (a == 0)
//	{
//		printf("�������� ���� %lf�Դϴ�.", -c / b);
//	}
//	else
//	{
//		dis = (b * b) - (4.0 * a * c);
//		if (dis >= 0)
//		{
//			printf("�������� ���� %lf�� %lf�Դϴ�.", (-b + sqrt(dis)) / (2.0 * a), (-b - sqrt(dis)) / (2.0 * a));
//		}
//		else
//		{
//			printf("�Ǳ��� �������� �ʽ��ϴ�.");
//		}
//	}
//	return 0;
//}

////How many days in a month
//int main()
//{
//	int month, days;
//
//	printf("���� �Է��Ͻÿ�: ");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 2:
//		days = 20;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		days = 30;
//		break;
//	default:
//		days = 31;
//		break;
//	}
//
//	printf("%d���� �ϼ��� %d�Դϴ�", month, days);
//	return 0;
//}

////Calculator with switch()
//int main()
//{
//	char op;
//	int x, y, result = 0;
//
//	printf("������ �Է��Ͻÿ�(��: 2 + 5)>> ");
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
//		printf("�������� �ʴ� �������Դϴ�.");
//		break;
//	}
//
//	printf("%d %c %d = %d", x, op, y, result);
//	return 0;
//}

////Gugu with while
//int main()
//{
//	int n;
//	int i = 1;
//
//	printf("����ϰ� ���� ��: ");
//	scanf("%d", &n);
//
//	while (i <= 9)
//	{
//		printf("%d * %d = %2d\n", n, i, n * i);
//		i++;
//	}
//
//	return 0;
//}

////Squared number with while
//int main()
//{
//	int n;
//
//	printf("===============\n");
//	printf("    n n�� ����\n");
//	printf("===============\n");
//
//	n = 1;
//	while (n <= 10)
//	{
//		printf("%5d %5d\n", n, n * n);
//		n++;
//	}
//
//	return 0;
//}

////Summation with while
//int main()
//{
//	int i, n, sum;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	i = 1;
//	sum = 0;
//	
//	while (i <= n)
//	{
//		sum += i;
//		i++;
//	}
//
//	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
//	return 0;
//}

////Summation of even numbers
//int main()
//{
//	int i, n, sum;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	i = 0;
//	sum = 0;
//
//	while (i <= n)
//	{
//		sum += i;
//		i = i + 2;
//	}
//
//	printf("1���� %d������ ¦������ %d�Դϴ�.", n, sum);
//	return 0;
//}

////Summation for 5 nums from user
//int main()
//{
//	int i, n, sum;
//
//	i = 0;
//	sum = 0;
//
//	while (i < 5)
//	{
//		printf("���� �Է��Ͻÿ�: ");
//		scanf("%d", &n);
//		sum = sum + n;
//		i++;
//	}
//
//	printf("�հ踦 %d�Դϴ�.", sum);
//	return 0;
//}

////Average solver using sentinel
//int main()
//{
//	int grade, n;
//	double sum, average;
//
//	n = 0;
//	sum = 0;
//	grade = 0;
//
//	printf("�����Ϸ��� ������ �Է��Ͻÿ�.\n");
//
//	while (grade >= 0)
//	{
//		printf("������ �Է��Ͻÿ�: ");
//		scanf("%d", &grade);
//
//		sum += grade;
//		n++;
//	}
//
//	sum = sum - grade;
//	n--;
//
//	average = sum / n;
//	printf("������ ����� %lf�Դϴ�.", average);
//	return 0;
//}

////Euclid algoritm
//int main()
//{
//	int x, y, r;
//
//	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������): ");
//	scanf("%d %d", &x, &y);
//
//	while (y != 0)
//	{
//		r = x % y;
//		x = y;
//		y = r;
//	}
//	printf("�ִ� ������� %d�Դϴ�.", x);
//	return 0;
//}

////Half life
//int main()
//{
//	int halfLife;
//	double initial;
//	double current;
//	int years = 0;
//
//	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
//	scanf("%d", &halfLife);
//
//	initial = 100.0;
//	current = initial;
//
//	while (current > initial / 10.0)
//	{
//		years += halfLife;
//		current = current / 2.0;
//		printf("%d�� �Ŀ� ���� ��=%lf\n", years, current);
//	}
//
//
//	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð�=%d��\n", years);
//	return 0;
//}

////Find min value
////Must input Ctrl+Z three times for EOF
//#include <limits.h>
//
//int main(void)
//{
//	int number, min_value = INT_MAX;
//
//	printf("������  �Է��Ͻÿ�\n����� Ctrl+z\n");
//	while (scanf("%d", &number) != EOF)
//	{
//		if (number < min_value)
//		{
//			min_value = number;
//		}
//	}
//
//	printf("�ּҰ��� %d", min_value);
//	return 0;
//}