#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{     
//		if (i % 10 == 9)
//			a++;
//	}
//
//
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	float b = 0.0;
//	float a = 0.0;
//	int i = 0;
//	int c = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			c = -c;
//
//		}
//		else
//			c = 1;
//		b =b+1.0 / (i*c);
//		
//	}
//
//	printf("%f\n", b);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}
int main()
{
	int a = 0;
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			printf("%d*%d=%2d  ", a,i,a * i    );

	    }
		printf("\n");


	}
	return 0;
}