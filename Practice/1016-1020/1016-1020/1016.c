//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<math.h>
//int find(int a, int aa)
//{
//	int bit = 0;
//	for (int i = 0; a > 0; a /= 10)
//	{
//		if (a % 10 == aa)
//		{
//			bit++;
//		}
//	}
//	return bit;
//}
//
//int main()
//{
//	int a, aa, b, bb;
//	int x = 0,y = 0,sum;
//	scanf("%d%d%d%d", &a, &aa, &b, &bb);
//	a = find(a, aa);
//	b = find(b, bb);
//	for (int i = 0; i < a; i++)
//	{
//		x = x + (int)pow(10, i) * aa;
//	}
//	for (int i = 0; i < b; i++)
//	{
//		y = y + (int)pow(10, i) * bb;
//	}
//	sum = x + y;
//	printf("%d", sum);
//	return 0;
//}
//