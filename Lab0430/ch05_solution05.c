#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    printf("십의 자리: %d\n", n / 10);
    printf("일의 자리: %d\n", n % 10);
    return 0;
}