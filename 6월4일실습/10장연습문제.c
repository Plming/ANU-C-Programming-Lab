#define _CRT_SECURE_NO_WARNINGS

//01�� ����
#include <stdio.h>

int main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int daysLength = sizeof(days) / sizeof(days[0]);
	int i;

	for (i = 0; i < daysLength; i++)
	{
		printf("%2d���� %d�ϱ��� �ֽ��ϴ�.\n", i + 1, days[i]);
	}

	return 0;
}

////02�� ����
//#include <stdio.h>
//#include <stdlib.h>
//#define LEN 10
//
//int main()
//{
//	int arr[LEN];
//	int i;
//
//	int max = 0;
//	int min = RAND_MAX;
//
//	for (i = 0; i < LEN; i++)
//	{
//		arr[i] = rand();
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//
//	printf("�ִ��� %d\n", max);
//	printf("�ּڰ��� %d\n", min);
//
//	return 0;
//}

////03�� ����
//#include <stdio.h>
//
//int array_equal(int a[], int b[], int size);
//
//int main()
//{
//	int a[] = { 1,2,3,0,0,0,0,0,0,0 };
//	int b[] = { 0,0,0,0,0,0,0,0,0,0 };
//
//	int length = sizeof(a) / sizeof(a[0]);
//
//	if (array_equal(a, b, length))
//	{
//		printf("2���� �迭�� ����.\n");
//	}
//	else
//	{
//		printf("2���� �迭�� �ٸ�.\n");
//	}
//
//	return 0;
//}
//
//int array_equal(int a[], int b[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		if (a[i] != b[i])
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

////04�� ����
//#include <stdio.h>
//#define SIZE 10
//
//void array_copy(int a[], int b[], int size);
//
//int main()
//{
//	int a[SIZE] = { 1,2,3,0,0,0,0,0,0,0 };
//	int b[SIZE];
//	int length = sizeof(a) / sizeof(a[0]);
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	array_copy(a, b, length);
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//	return 0;
//}
//
//void array_copy(int a[], int b[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		b[i] = a[i];
//	}
//	return;
//}

////05�� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int freq[10] = { 0, };
//	int i;
//	int maxDigit = 0;
//	srand(time(NULL));
//
//	for (i = 0; i < 100; i++)
//	{
//		freq[rand() % 10]++;
//	}
//
//	for (i = 1; i < 10; i++)
//	{
//		if (freq[i] > freq[maxDigit])
//		{
//			maxDigit = i;
//		}
//	}
//
//	printf("���� ���� ���� �� = %d\n", maxDigit);
//	return 0;
//}

////06�� ����
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][5] =
//	{
//		{12,56,32,16,98},
//		{99,56,34,41,3},
//		{65,3,87,78,21}
//	};
//	int i, j;
//	int sum = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		sum = 0;
//		for (j = 0; j < 5; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d���� �հ�: %d\n", i, sum);
//	}
//
//	for (j = 0; j < 5; j++)
//	{
//		sum = 0;
//		for (i = 0; i < 3; i++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d���� �հ�: %d\n", j, sum);
//	}
//
//	return 0;
//}

////07�� ����
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int arr[10][3];
//	int val;
//	int numInput;
//
//	for (int digit = 0; digit < 10; digit++)
//	{
//		for (int pow = 0; pow < 3; pow++)
//		{
//			switch (pow)
//			{
//			case 0:
//				val = digit + 1;
//				break;
//			case 1:
//				val = (digit + 1) * (digit + 1);
//				break;
//			case 2:
//				val = (digit + 1) * (digit + 1) * (digit + 1);
//				break;
//			}
//			arr[digit][pow] = val;
//		}
//	}
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &numInput);
//
//	//���� �迭���� ���� Ž��
//	for (int i = 0; i < 10; i++)
//	{
//		if (numInput == arr[i][2])
//		{
//			printf("%d�� ���������� %d\n", numInput, arr[i][0]);
//			return 0;
//		}
//	}
//
//	//���� ���� ��� pow()�� ���� ���
//	printf("%d�� ���������� %lf\n", numInput, pow(numInput, 1.0 / 3));
//
//	return 0;
//}

////08�� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//double meanCompute(double data[], int size);
//double sigmaCompute(double mean, double data[], int size);
//
//int main()
//{
//	double data[10];
//	double sum = 0;
//	double mean;
//	double sigma;
//	const int length = sizeof(data) / sizeof(data[0]);
//
//	srand(time(NULL));
//
//	//data ������ ��ü �� ���
//	for (int i = 0; i < 10; i++)
//	{
//		data[i] = (double)rand();
//		printf("�����͸� �Է��Ͻÿ�: %d\n", (int)data[i]);
//	}
//
//	mean = meanCompute(data, length);
//	sigma = sigmaCompute(mean, data, length);
//
//	printf("��հ��� %lf�Դϴ�.\n", mean);
//	printf("ǥ���������� %lf�Դϴ�.\n", sigma);
//
//	return 0;
//}
//
//double meanCompute(double data[], int size)
//{
//	double sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += data[i];
//	}
//	return sum / size;
//}
//
//double sigmaCompute(double mean, double data[], int size)
//{
//	double sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += (data[i] - mean) * (data[i] - mean);
//	}
//	return sum / size;
//}

////09�� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define NUM_STUDENTS 10
//#define NUM_EXAMS 3
//
//int main()
//{
//	int data[NUM_STUDENTS][NUM_EXAMS];
//	int i, j;
//	int max, min;
//	srand(time(NULL));
//
//	for (i = 0; i < NUM_STUDENTS; i++)
//	{
//		for (j = 0; j < NUM_EXAMS; j++)
//		{
//			data[i][j] = rand() % 101;
//		}
//	}
//
//	for (j = 0; j < NUM_EXAMS; j++)
//	{
//		max = 0;
//		min = RAND_MAX;
//		for (i = 0; i < NUM_STUDENTS; i++)
//		{
//			if (data[i][j] > max)
//			{
//				max = data[i][j];
//			}
//			if (data[i][j] < min)
//			{
//				min = data[i][j];
//			}
//		}
//		printf("���� #%d�� �ִ����� = %d\n", j, max);
//		printf("���� #%d�� �ּ����� = %d\n", j, min);
//	}
//	return 0;
//}

////10�� ����
//#include <stdio.h>
//#define DIMENSION 3
//
//void vector_add(double x[], double y[], double out[]);
//double vector_dot_prod(double x[], double y[]);
//
//int main()
//{
//	double A[DIMENSION] = { 5,6,7 };
//	double B[DIMENSION] = { 2,6,4 };
//	double C[DIMENSION];
//
//	vector_add(A, B, C);
//	printf("������ �� = [ %lf, %lf, %lf ]\n", C[0], C[1], C[2]);
//
//	printf("������ ���� = %lf\n", vector_dot_prod(A, B));
//	return 0;
//}
//
//void vector_add(double x[], double y[], double out[])
//{
//	int i;
//
//	for (i = 0; i < DIMENSION; i++)
//	{
//		out[i] = x[i] + y[i];
//	}
//
//	return;
//}
//
//double vector_dot_prod(double x[], double y[])
//{
//	int i;
//	double dotProduct = 0;
//
//	for (i = 0; i < DIMENSION; i++)
//	{
//		dotProduct += x[i] * y[i];
//	}
//
//	return dotProduct;
//}