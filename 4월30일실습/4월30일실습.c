//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y, result;
//	printf("두개의 정수를 입력하시오: ");
//	scanf("%d %d", &x, &y);
//
//	result = x + y;
//	printf("%d + %d = %d\n", x, y, result);
//
//	result = x - y;
//	printf("%d - %d = %d\n", x, y, result);
//
//	result = x * y;
//	printf("%d * %d = %d\n", x, y, result);
//
//	result = x / y;
//	printf("%d / %d = %d\n", x, y, result);
//
//	result = x % y;
//	printf("%d %% %d = %d\n", x, y, result);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	double x, y, result;
//	printf("두개의 부동소수점 수를 입력하시오: ");
//	scanf("%lf %lf", &x, &y);
//
//	result = x + y;
//	printf("%lf + %lf = %lf\n", x, y, result);
//
//	result = x - y;
//	printf("%lf - %lf = %lf\n", x, y, result);
//
//	result = x * y;
//	printf("%lf * %lf = %lf\n", x, y, result);
//
//	result = x / y;
//	printf("%lf / %lf = %lf\n", x, y, result);
//
//	return 0;
//}

//#include <stdio.h>
//#define SEC_PER_MINUTE 60
//
//int main()
//{
//	int input, minute, second;
//
//	printf("초를 입력하시요: ");
//	scanf("%d", &input);
//
//	minute = input / SEC_PER_MINUTE;
//	second = input % SEC_PER_MINUTE;
//
//	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x = 10, y = 10;
//
//	printf("x=%d\n", x);
//	printf("++x의 값=%d\n", ++x);
//	printf("x=%d\n\n", x);
//
//	printf("y=%d\n", y);
//	printf("y++의 값=%d\n", y++);
//	printf("y=%d\n", y);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int user, change = 0;
//	int price, c5000, c1000, c500, c100;
//
//	printf("물건 값을 입력하시오: ");
//	scanf("%d", &price);
//
//	printf("사용자가 낸 돈: ");
//	scanf("%d", &user);
//
//	change = user - price;
//	c5000 = change / 5000;
//	change = change % 5000;
//
//	c1000 = change / 1000;
//	change %= 1000;
//
//	c500 = change / 500;
//	change %= 500;
//
//	c100 = change / 100;
//	change %= 100;
//
//	printf("오천원권: %d 장\n", c5000);
//	printf("천원권: %d 장\n", c1000);
//	printf("오백원 동전: %d 장\n", c500);
//	printf("백원 동전: %d 장\n", c100);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int x, y;
//
//	x = 1;
//
//	printf("수식 x+1의 값은 %d\n", x + 1);
//	printf("수식 y=x+1의 값은 %d\n", y = x + 1);
//	printf("수식 y=10+(x=2+7)의 값은 %d\n", y = 10 + (x = 2 + 7));
//	printf("수식 y=x=3의 값은 %d\n", y = x = 3);
//
//	return 0;
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int x = 10, y = 10, z = 33;
//
//	x += 1;
//	y *= 2;
//	z %= 10 + 20;
//
//	printf("x = %d	y = %d	z = %d\n", x, y, z);
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int x, y;
//
//	printf("두개의 정수를 입력하시오: ");
//	scanf("%d%d", &x, &y);
//
//	printf("x == y의 결과값: %d\n", x == y);
//	printf("x != y의 결과값: %d\n", x != y);
//	printf("x > y의 결과값: %d\n", x > y);
//	printf("x < y의 결과값: %d\n", x < y);
//	printf("x >= y의 결과값: %d\n", x >= y);
//	printf("x <= y의 결과값: %d\n", x <= y);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int x, y;
//
//    printf("두개의 정수를 입력하시오: ");
//    scanf("%d %d", &x, &y);
//
//    printf("%d && %d의 결과값: %d\n", x, y, x && y);
//    printf("%d || %d의 결과값: %d\n", x, y, x || y);
//    printf("!%d의 결과값: %d\n", x, !x);
//
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int year, result;
//
//	printf("연도를 입력하시오: ");
//	scanf("%d", &year);
//
//	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//	printf("result=%d \n", result);
//
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//	int x, y;
//
//	printf("첫번째 수=");
//	scanf("%d", &x);
//	printf("두번째 수=");
//	scanf("%d", &y);
//
//	printf("큰수=%d \n", (x > y) ? x : y);
//	printf("작은수=%d \n", (x < y) ? x : y);
//
//	return 0;
//}