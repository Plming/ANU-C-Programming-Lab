#define _CRT_SECURE_NO_WARNINGS

//03�� ����
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ִ밪: %d", a > b ? a : (b > c) ? b : c);
}

////04�� ����
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
//	printf("Ű�� �Է��Ͻÿ�(cm): ");
//	scanf("%d", &height);
//
//	inch = (double)height / CM_PER_INCH;
//	feet = (int)inch / INCH_PER_FEET;
//	inch -= (double)INCH_PER_FEET*feet;
//
//	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.\n", height,feet,inch);
//	return 0;
//}

////05�� ����
//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	printf("���� �ڸ�: %d\n", n / 10);
//	printf("���� �ڸ�: %d\n", n % 10);
//	return 0;
//}

////08�� ����
//#include <stdio.h>
//#define PI 3.141592
//
//int main()
//{
//	double rad;
//	printf("���� �������� �Է��Ͻÿ�: ");
//	scanf("%lf", &rad);
//
//	printf("ǥ������ %lf�Դϴ�.\n", (double)4 * PI * rad * rad);
//	printf("ü���� %lf�Դϴ�.\n", ((double)4 / 3) * PI * rad * rad * rad);
//	return 0;
//}

////09�� ����
//#include <stdio.h>
//
//int main()
//{
//	double rodHeight, pyramidHeight;
//	double rodDistance, pyramidDistance;
//
//	printf("�������� ���̸� �Է��Ͻÿ�: ");
//	scanf("%lf", &rodHeight);
//	
//	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
//	scanf("%lf", &rodDistance);
//
//	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
//	scanf("%lf", &pyramidDistance);
//
//	pyramidHeight = rodHeight * pyramidDistance / rodDistance;
//	printf("�Ƕ�̵������ ���̴� %lf�Դϴ�.", pyramidHeight);
//
//	return 0;
//}

////10�� ����
//#include <stdio.h>
//
//int main()
//{
//	double posX, posY;
//	
//	printf("X ��ǥ�� �Է��Ͻÿ�: ");
//	scanf("%lf", &posX);
//	
//	printf("Y ��ǥ�� �Է��Ͻÿ�: ");
//	scanf("%lf", &posY);
//
//	(posX > 0 && posY > 0) ? printf("1��и�") :
//		(posX < 0 && posY>0) ? printf("2��и�") :
//		(posX < 0 && posY < 0) ? printf("3��и�") :
//		(posX > 0 && posY < 0) ? printf("4��и�") : NULL;
//
//	return 0;
//}

////11�� ����
//#include <stdio.h>
//#define PI 3.14
//
//int main()
//{
//	double distance;
//	double angle;
//
//	printf("�Ÿ��� �Է��Ͻÿ�: ");
//	scanf("%lf", &distance);
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%lf", &angle);
//
//	printf("������ �������� %lf", distance*(double)180/(angle*PI));
//	return 0;
//}