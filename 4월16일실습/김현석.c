//C���α׷��� �ǽ� 5���� ����
//20200604 ��ǻ�ͱ����� ������

//01�� ����
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	float sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("���� %f�̰� ����� %f�Դϴ�.", sum, avg);
	return 0;
}

////02�� ����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float mile;
//	float meter;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%f", &mile);
//
//	meter = mile * 1609.0;
//
//	printf("%f������ %f�����Դϴ�.", mile, meter);
//	return 0;
//}

////03�� ����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float base, height, area;
//
//	printf("�ﰢ���� �غ�: ");
//	scanf("%f", &base);
//
//	printf("�ﰢ���� ����: ");
//	scanf("%f", &height);
//
//	area = base * height / 2;
//	printf("�ﰢ���� ����: %f", area);
//	return 0;
//}

////04�� ����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float cel, fah;
//
//	printf("ȭ������ �Է��Ͻÿ�: ");
//	scanf("%f", &fah);
//
//	cel = (5.0 / 9.0) * (fah - 32.0);
//	printf("�������� %f���Դϴ�.", cel);
//	return 0;
//}

////05�� ����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float x, result;
//	printf("�Ǽ��� �Է��ϼ���: ");
//	scanf("%f", &x);
//
//	result = (3.0 * x * x) + (7.0 * x) + 11.0;
//	printf("���׽��� ���� %f", result);
//	return 0;
//}

////06�� ����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float weightEarth, weightMoon;
//	printf("�����Ը� �Է��ϼ���(����: kg): ");
//	scanf("%f", &weightEarth);
//
//	weightMoon = weightEarth * 0.17;
//	printf("�޿����� �����Դ� %fkg�Դϴ�.", weightMoon);
//	return 0;
//}