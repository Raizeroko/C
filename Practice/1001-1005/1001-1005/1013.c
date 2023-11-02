#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//int is_prime(int p)
//{
//	int i;
//	for (i = 2; i <= sqrt(p); i++)
//	{
//		if (p % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int left;
//	int right;
//	int i, tmp = 0,count = 0, j= 2;
//	scanf("%d%d", &left, &right);
//	for (i = 1; i <= right;j++)
//	{
//		tmp = is_prime(j);
//		if (tmp == 1)
//		{
//			if (i >= left)
//			{
//				printf("%d", j);
//				count++;
//				if (count < 10 && i != right)
//				{
//					printf(" ");
//				}
//				else 
//				{
//					printf("\n");
//					count = 0;
//				}
//			}
//			i++;
//		}
//	}
//}