////난수 생성
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX 45
//
//int main()
//{
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d\n", 1 + rand() % MAX);
//	}
//
//	return 0;
//}

////배열로 점수 저장 및 출력
//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 5
//
//int main()
//{
//	int i;
//	int scores[SIZE];
//
//	for (i = 0; i < SIZE; i++)
//	{
//		scores[i] = rand() % 101;
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("scores[%d] = %d\n", i, scores[i]);
//	}
//
//	return 0;
//}

////평균 계산
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#define NUM_STUDENTS 10
//
//int main()
//{
//	int scores[NUM_STUDENTS];
//	int sum = 0;
//	int i, average;
//
//	for (i = 0; i < NUM_STUDENTS; i++)
//	{
//		printf("%d번째 학생의 성적을 입력하시오: ", i + 1);
//		scanf("%d", &scores[i]);
//
//		sum += scores[i];
//	}
//	average = sum / NUM_STUDENTS;
//
//	printf("성적 평균 = %d\n", average);
//	return 0;
//}

////주사위 시뮬레이터
//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 6
//
//int main()
//{
//	int freq[SIZE] = { 0, };
//	int i;
//
//	for (i = 0; i < 10000; i++)
//	{
//		freq[rand() % 6]++;
//	}
//
//	printf("===============\n");
//	printf("  면     빈도\n");
//	printf("===============\n");
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%3d \t %3d\n", i, freq[i]);
//	}
//
//	return 0;
//}

////2차원 배열
//#include <stdio.h>
//#include <stdlib.h>
//#define ROWS 3
//#define COLS 5
//
//int main()
//{
//	int s[ROWS][COLS];
//	int i, j;
//	
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			s[i][j] = rand() % 100;
//		}
//	}
//
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			printf("%02d ", s[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////행렬합
//#include <stdio.h>
//#define ROWS 3
//#define COLS 3
//
//int main()
//{
//	int A[ROWS][COLS] =
//	{ {2,3,0}
//	,{8,9,1}
//	,{7,0,5} };
//
//	int B[ROWS][COLS] =
//	{ {1,0,0}
//	,{1,0,0}
//	,{1,0,0} };
//
//	int C[ROWS][COLS];
//	int r, c;
//
//	for (r = 0; r < ROWS; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			C[r][c] = A[r][c] + B[r][c];
//		}
//	}
//
//	for (r = 0; r < ROWS; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			printf("%d ", C[r][c]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}