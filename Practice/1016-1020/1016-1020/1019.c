//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp1(const void* a, const void* b)//正序
//{
//	return *(int*)a - *(int*)b;
//}
//
//int cmp2(const void* a, const void* b)//逆序
//{
//	return *(int*)b - *(int*)a;
//}
//
//
//
//int main()
//{
//	int input, big=0, small=0;
//	int a[4];
//
//	scanf("%d", &input);
//	if (input > 9999 || input < 0)
//	{
//		return 0;
//	}
//	if (input % 1111 == 0)
//	{
//		printf("%04d - %04d = %04d", input, input, 0);
//		return 0;
//	}
//	while (input != 6174)
//	{
//		
//		big = 0;
//		small = 0;
//		for (int i = 0; i < 4; i++)//取出input每一位
//		{
//			a[i] = input % 10;
//			input /= 10;
//		}
//		qsort(a, 4, sizeof(int), cmp1);//正序
//		for (int i = 0; i < 4; i++)
//		{
//			small = small * 10 + a[i];
//		}
//		qsort(a, 4, sizeof(int), cmp2);//逆序
//
//		for (int i = 0; i < 4; i++)
//		{
//			big = big * 10 + a[i];
//		}
//		input = big - small;
//		if(input != 6174)
//			printf("%04d - %04d = %04d\n", big, small, input);
//		else
//			printf("%04d - %04d = %04d", big, small, input);
//	}
//	return 0;
//}