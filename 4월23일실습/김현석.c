////02�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int data;
//	printf("16���� ������ �Է��Ͻÿ�: ");
//	scanf("%x", &data);
//
//	printf("8�����δ� %o�Դϴ�\n", data);
//	printf("10�����δ� %d�Դϴ�\n", data);
//	printf("16�����δ� %#x�Դϴ�\n", data);
//	return 0;
//}

////04�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	double w, h, d;
//	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
//	scanf("%lf %lf %lf", &w, &h, &d);
//	printf("������ ���Ǵ� %lf�Դϴ�", w * h * d);
//	return 0;
//}

////06�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	printf("%lf", (3.32e-3)+(9.76e-8));
//	return 0;
//}

////08�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
//	scanf("%d", &ch);
//
//	printf("����: %c�Դϴ�", (char)ch);
//	return 0;
//}

//10�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("\a");
	printf("ȭ�簡 �߻��Ͽ����ϴ�.");
	printf(" ");
	for (int i = 0; i < 10; i++)
	{
		putchar('\a');
	}
	return 0;
}