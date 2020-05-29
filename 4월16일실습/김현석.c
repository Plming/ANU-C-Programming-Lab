//C프로그래밍 실습 5주차 과제
//20200604 컴퓨터교육과 김현석

//01번 문제
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	float sum, avg;

	printf("실수를 입력하시오: ");
	scanf("%d", &x);

	printf("실수를 입력하시오: ");
	scanf("%d", &y);

	printf("실수를 입력하시오: ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합은 %f이고 평균은 %f입니다.", sum, avg);
	return 0;
}

////02번 문제
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float mile;
//	float meter;
//
//	printf("마일을 입력하시오: ");
//	scanf("%f", &mile);
//
//	meter = mile * 1609.0;
//
//	printf("%f마일은 %f미터입니다.", mile, meter);
//	return 0;
//}

////03번 문제
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float base, height, area;
//
//	printf("삼각형의 밑변: ");
//	scanf("%f", &base);
//
//	printf("삼각형의 높이: ");
//	scanf("%f", &height);
//
//	area = base * height / 2;
//	printf("삼각형의 넓이: %f", area);
//	return 0;
//}

////04번 문제
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float cel, fah;
//
//	printf("화씨값을 입력하시오: ");
//	scanf("%f", &fah);
//
//	cel = (5.0 / 9.0) * (fah - 32.0);
//	printf("섭씨값은 %f도입니다.", cel);
//	return 0;
//}

////05번 문제
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float x, result;
//	printf("실수를 입력하세요: ");
//	scanf("%f", &x);
//
//	result = (3.0 * x * x) + (7.0 * x) + 11.0;
//	printf("다항식의 값은 %f", result);
//	return 0;
//}

////06번 문제
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float weightEarth, weightMoon;
//	printf("몸무게를 입력하세요(단위: kg): ");
//	scanf("%f", &weightEarth);
//
//	weightMoon = weightEarth * 0.17;
//	printf("달에서의 몸무게는 %fkg입니다.", weightMoon);
//	return 0;
//}