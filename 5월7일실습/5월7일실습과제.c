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
//	printf("화씨온도를 입력하시오");
//	scanf("%lf", &f_temp);
//	c_temp = (double)5 / 9 * (f_temp - 32);
//	printf("섭씨온도는 %f입니다.", c_temp);
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
//	printf("정수를 입력하시오:");
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
//	printf("절대값은 %d 입니다.\n", number);
//
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int number;
//
//	printf("정수를 입력하시오:");
//	scanf("%d", &number);
//
//	if ((number % 2) == 0)
//	{
//		printf("입력된 정수는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("입력된 정수는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int n1, n2, n3;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n1);
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n2);
//
//	if (n2 == 0)
//	{
//		printf("0으로 나눌 수는 없습니다.\n");
//	}
//	else
//	{
//		n3 = n1 / n2;
//		printf("결과는 %d입니다.\n", n3);
//	}
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int year;
//
//	printf("연도를 입력하시오: ");
//	scanf("%d", &year);
//
//	if ((((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0))
//	{
//		printf("%d년은 윤년입니다.\n", year);
//	}
//	else
//	{
//		printf("%d년은 윤년이 아닙니다.\n", year);
//	}
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int score;
//
//	printf("성적을 입력하시오: ");
//	scanf("%d", &score);
//
//	if (score >= 90)
//	{
//		printf("합격: 학점A\n");
//	}
//	else if (score >= 80)
//	{
//		printf("합격: 학점B\n");
//	}
//	else if (score >= 70)
//	{
//		printf("합격: 학점C\n");
//	}
//	else if (score >= 60)
//	{
//		printf("합격: 학점D\n");
//	}
//	else
//	{
//		printf("불합격: 학점F\n");
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
//	printf("문자를 입력하시오: ");
//	scanf("%c", &ch);
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		printf("%c는 대문자입니다.\n", ch);
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("%c는 소문자입니다.\n", ch);
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("%c는 숫자입니다.\n", ch);
//	}
//	else
//	{
//		printf("%c는 기타문자입니다.\n", ch);
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
//	printf("수식을 입력하시오");
//	printf("(예: 2 + 5) ");
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
//		printf("지원되지 않는 연산자입니다. ");
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
//	printf("정수를 입력하시오:");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 0:
//		printf("없음\n");
//		break;
//	case 1:
//		printf("하나\n");
//		break;
//	case 2:
//		printf("둘\n");
//		break;
//	default:
//		printf("많음\n");
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
//	printf("정수 연산자 정수\n>> ");
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
//		printf("지원되지 않는 연산자입니다. ");
//		result = 0;
//		break;
//	}
//	printf("%d %c %d = %d ", x, op, y, result);
//	return 0;
//}