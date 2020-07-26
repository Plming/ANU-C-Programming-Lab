//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////Calculator
//int main()
//{
//	char op;
//	int x, y, result = 0;
//
//	printf("수식을 입력하시오(예: 2 + 5)>> ");
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
//		printf("지원되지 않는 연산자입니다. ");
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
//	printf("계수 a, b, c를 차례대로 입력하시오: ");
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	if (a == 0)
//	{
//		printf("방정식의 근은 %lf입니다.", -c / b);
//	}
//	else
//	{
//		dis = (b * b) - (4.0 * a * c);
//		if (dis >= 0)
//		{
//			printf("방정식의 근은 %lf와 %lf입니다.", (-b + sqrt(dis)) / (2.0 * a), (-b - sqrt(dis)) / (2.0 * a));
//		}
//		else
//		{
//			printf("실근이 존재하지 않습니다.");
//		}
//	}
//	return 0;
//}

////How many days in a month
//int main()
//{
//	int month, days;
//
//	printf("달을 입력하시오: ");
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
//	printf("%d월의 일수는 %d입니다", month, days);
//	return 0;
//}

////Calculator with switch()
//int main()
//{
//	char op;
//	int x, y, result = 0;
//
//	printf("수식을 입력하시오(예: 2 + 5)>> ");
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
//		printf("지원되지 않는 연산자입니다.");
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
//	printf("출력하고 싶은 단: ");
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
//	printf("    n n의 제곱\n");
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
//	printf("정수를 입력하시오: ");
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
//	printf("1부터 %d까지의 합은 %d입니다.", n, sum);
//	return 0;
//}

////Summation of even numbers
//int main()
//{
//	int i, n, sum;
//
//	printf("정수를 입력하시오: ");
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
//	printf("1부터 %d까지의 짝수합은 %d입니다.", n, sum);
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
//		printf("값을 입력하시오: ");
//		scanf("%d", &n);
//		sum = sum + n;
//		i++;
//	}
//
//	printf("합계를 %d입니다.", sum);
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
//	printf("종료하려면 음수를 입력하시오.\n");
//
//	while (grade >= 0)
//	{
//		printf("성적을 입력하시오: ");
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
//	printf("성적의 평균은 %lf입니다.", average);
//	return 0;
//}

////Euclid algoritm
//int main()
//{
//	int x, y, r;
//
//	printf("두개의 정수를 입력하시오(큰수, 작은수): ");
//	scanf("%d %d", &x, &y);
//
//	while (y != 0)
//	{
//		r = x % y;
//		x = y;
//		y = r;
//	}
//	printf("최대 공약수는 %d입니다.", x);
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
//	printf("반감기를 입력하시오(년): ");
//	scanf("%d", &halfLife);
//
//	initial = 100.0;
//	current = initial;
//
//	while (current > initial / 10.0)
//	{
//		years += halfLife;
//		current = current / 2.0;
//		printf("%d년 후에 남은 양=%lf\n", years, current);
//	}
//
//
//	printf("1/10 이하로 되기까지 걸린 시간=%d년\n", years);
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
//	printf("정수를  입력하시오\n종료는 Ctrl+z\n");
//	while (scanf("%d", &number) != EOF)
//	{
//		if (number < min_value)
//		{
//			min_value = number;
//		}
//	}
//
//	printf("최소값은 %d", min_value);
//	return 0;
//}