#define _CRT_SECURE_NO_WARNINGS

//03번 문제
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("최대값: %d", a > b ? a : (b > c) ? b : c);
}

////04번 문제
//#include <stdio.h>
//#define INCH_PER_FEET 12
//#define CM_PER_INCH 2.54
//
//int main()
//{
//	int height;
//	int feet;
//	double inch;
//
//	printf("키를 입력하시오(cm): ");
//	scanf("%d", &height);
//
//	inch = (double)height / CM_PER_INCH;
//	feet = (int)inch / INCH_PER_FEET;
//	inch -= (double)INCH_PER_FEET*feet;
//
//	printf("%dcm는 %d피트 %lf인치입니다.\n", height,feet,inch);
//	return 0;
//}

////05번 문제
//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	printf("십의 자리: %d\n", n / 10);
//	printf("일의 자리: %d\n", n % 10);
//	return 0;
//}

////08번 문제
//#include <stdio.h>
//#define PI 3.141592
//
//int main()
//{
//	double rad;
//	printf("구의 반지름을 입력하시오: ");
//	scanf("%lf", &rad);
//
//	printf("표면적은 %lf입니다.\n", (double)4 * PI * rad * rad);
//	printf("체적은 %lf입니다.\n", ((double)4 / 3) * PI * rad * rad * rad);
//	return 0;
//}

////09번 문제
//#include <stdio.h>
//
//int main()
//{
//	double rodHeight, pyramidHeight;
//	double rodDistance, pyramidDistance;
//
//	printf("지팡이의 높이를 입력하시오: ");
//	scanf("%lf", &rodHeight);
//	
//	printf("지팡이 그림자의 길이를 입력하시오: ");
//	scanf("%lf", &rodDistance);
//
//	printf("피라미드까지의 거리를 입력하시오: ");
//	scanf("%lf", &pyramidDistance);
//
//	pyramidHeight = rodHeight * pyramidDistance / rodDistance;
//	printf("피라미드까지의 높이는 %lf입니다.", pyramidHeight);
//
//	return 0;
//}

////10번 문제
//#include <stdio.h>
//
//int main()
//{
//	double posX, posY;
//	
//	printf("X 좌표를 입력하시오: ");
//	scanf("%lf", &posX);
//	
//	printf("Y 좌표를 입력하시오: ");
//	scanf("%lf", &posY);
//
//	(posX > 0 && posY > 0) ? printf("1사분면") :
//		(posX < 0 && posY>0) ? printf("2사분면") :
//		(posX < 0 && posY < 0) ? printf("3사분면") :
//		(posX > 0 && posY < 0) ? printf("4사분면") : NULL;
//
//	return 0;
//}

////11번 문제
//#include <stdio.h>
//#define PI 3.14
//
//int main()
//{
//	double distance;
//	double angle;
//
//	printf("거리를 입력하시오: ");
//	scanf("%lf", &distance);
//
//	printf("각도를 입력하시오: ");
//	scanf("%lf", &angle);
//
//	printf("지구의 반지름은 %lf", distance*(double)180/(angle*PI));
//	return 0;
//}