////02번 문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int data;
//	printf("16진수 정수를 입력하시오: ");
//	scanf("%x", &data);
//
//	printf("8진수로는 %o입니다\n", data);
//	printf("10진수로는 %d입니다\n", data);
//	printf("16진수로는 %#x입니다\n", data);
//	return 0;
//}

////04번 문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	double w, h, d;
//	printf("상자의 가로 세로 높이를 한번에 입력: ");
//	scanf("%lf %lf %lf", &w, &h, &d);
//	printf("상자의 부피는 %lf입니다", w * h * d);
//	return 0;
//}

////06번 문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	printf("%lf", (3.32e-3)+(9.76e-8));
//	return 0;
//}

////08번 문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	printf("아스키 코드값을 입력하시오: ");
//	scanf("%d", &ch);
//
//	printf("문자: %c입니다", (char)ch);
//	return 0;
//}

//10번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("\a");
	printf("화재가 발생하였습니다.");
	printf(" ");
	for (int i = 0; i < 10; i++)
	{
		putchar('\a');
	}
	return 0;
}