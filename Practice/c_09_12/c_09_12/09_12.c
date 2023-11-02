#define _CRT_SECURE_NO_WARNINGS 1



//调整数组使奇数全部位于偶数前面
//
//#include<stdio.h>
//
//void function(int* arr, int sz)
//{
//	int tmp = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = i; j < sz - i - 1; j++)
//		{
//			if (*(arr + j) % 2 == 1 && *(arr + j +1 )%2 != 1)
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	function(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//指针实现strlen
//
//#include<stdio.h>
//
//my_strlen(const void* arr)
//{
//	int count = 0;
//	char* p = (char*)arr;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//
//}
//
//int main()
//{	
//	char arr[20];
//	int len;
//	gets(arr);
//	len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



//strcpy实现
//
//#include<stdio.h>
//
//void my_strcpy(char* arr1, const char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[30] = {0};
//	char arr2[20] = "abcdefg";
//	my_strcpy(arr1, arr2);
//	puts(arr1);
//	return 0;
//}



//打印杨辉三角
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[20][20] = {0};
//	int input;
//	scanf("%d", &input);
//	for (int i = 0; i < input; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//猜凶手
//
//#include<stdio.h>
//
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; (int)killer++)
//	{
//		if(( (killer != 'A') +
//			 (killer == 'C') +
//			 (killer == 'D') +
//			 (killer != 'D')) == 3)
//			printf("%c", killer);
//	}
//	return 0;
//}


//获得月份天数
//
//#include<stdio.h>
//
//int main()
//{
//    int year, month;
//    while (scanf("%d%d", &year, &month) != EOF)
//        if (month % 2 == 1)
//        {
//            if (month < 8)
//                printf("%d\n", 31);
//            else
//                printf("%d\n", 30);
//        }
//        else
//        {
//            if (month < 8)
//            {
//                if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 4 == 0))
//                    printf("%d\n", 29);
//                else if (month == 2)
//                    printf("%d\n", 28);
//                else
//                    printf("%d\n", 30);
//            }
//            else
//                printf("%d", 31);
//        }
//
//    return 0;
//}



//猜名次
//
//#include<stdio.h>
//
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (((((B == 2) + (A == 3) == 1) +
//							((B == 2) + (E == 4) == 1) +
//							((C == 1) + (D == 2) == 1) +
//							((C == 5) + (D == 3) == 1) +
//							((E == 4) + (A == 1) == 1)) == 5)
//							&& A*B*C*D*E == 120)
//							printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//
//					}
//				}
//			}
//		}
//	}
//	
//
//	return 0;
//}



//左旋字符串
//
//#include<stdio.h>
//
//void left_move(char* arr, int len, int move)
//{
//	int left, right;
//	int tmp;
//	for (int i = 0; i < 3; i++)
//	{
//		if (i == 0)
//		{
//			left = 0;
//			right = move -1;
//		}
//		else if (i == 1)
//		{
//			left = move;
//			right = len - 1;
//		}
//		else if (i == 2)
//		{
//			left = 0;
//			right = len - 1;
//		}
//		while (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//}
//
//int main()
//{
//	char arr[10] = "ABCD";
//	int len = strlen(arr);
//	left_move(arr, len, 1);
//	puts(arr);
//	left_move(arr, len, 1);
//	puts(arr);
//	return 0;
//}



//p判断一个串是不是另一个串的旋转后的字符串
//
//#include<stdio.h>
//#include<string.h>
//
//void left_move(char* arr, int len, int move)
//{
//	int left, right;
//	int tmp;
//	for (int i = 0; i < 3; i++)
//	{
//		if (i == 0)
//		{
//			left = 0;
//			right = move -1;
//		}
//		else if (i == 1)
//		{
//			left = move;
//			right = len - 1;
//		}
//		else if (i == 2)
//		{
//			left = 0;
//			right = len - 1;
//		}
//		while (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int	my_strstr_lmove(char* arr1, char* arr2, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		left_move(arr1, len, 1);
//		if (!strncmp(arr1, arr2, len))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[10] = "AABCD";
//	char s2[10] = "BCDAA";
//	char s3[10] = "abcd";
//	char s4[10] = "ABCD";
//	char tmp[10] = { 0 };
//	int len = strlen(s2), ans1 = 0, ans2 = 0;
//	strcpy(tmp, s1);
//	ans1 = my_strstr_lmove(tmp, s2, len);
//	if (ans1 == 1)
//		printf("%s 是 %s 旋转后的字串\n", s2, s1);
//	else if (ans1 == 0)
//		printf("%s 不是 %s 旋转后的字串\n", s2, s1);
//	len = strlen(s4);
//	strcpy(tmp, s3);
//	ans2 = my_strstr_lmove(tmp, s4, len);
//	if (ans2 == 1)
//		printf("%s 是 %s 旋转后的字串\n", s4, s3);
//	else if (ans2 == 0)
//		printf("%s 不是 %s 旋转后的字串\n", s4, s3);
//	return 0;
//}



//杨氏矩阵
//
//#include<stdio.h>
//
//int find(int (*arr)[3], int x)
//{
//	int i = 0;
//	int j = 2;
//	while (i < 3 && j >= 0)
//	{
//		if (x == arr[i][j])
//			return 1;
//		else if (x < arr[i][j])
//			j--;
//		else
//			i++;
//			
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int input, tmp =0;
//	scanf("%d", &input);
//	tmp = find(arr, input);
//	if (tmp == 1)
//		printf("该数字存在\n");
//	else
//		printf("该数字不存在\n");
//	return 0;
//}



//qsort使用练习
//
//#include<stdio.h>
//#include<string.h>
//
//int int_cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int char_cmp(const void* a, const void* b)
//{
//	return *(char*)a- *(char*)b;
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,2,6,8,4,7,0,9 };
//	char arr2[] = "fedchasdf";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int len = strlen(arr2);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	puts(arr2);
//	qsort(arr1, sz, sizeof(int), int_cmp);
//	qsort(arr2, len, sizeof(char), char_cmp);
//	printf("排序后：\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	puts(arr2);
//	return 0;
//}



//自己实现qsort函数(冒泡算法）
//
#include<stdio.h>
#include<string.h>

void my_qsort(void* arr, int size, int type, int (*cmp)(const void*, const void*))
{
	char* p = (char*)arr;
	char* p1, * p2;
	char tmp ;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (cmp((p + j*type), (p + (j+1)*type)) > 0)
			{
				p1 = p + j * type;
				p2 = p + (j+1) * type;
				for (int k = 0; k < type; k++)
				{
					tmp = *p1;
					*p1 = *p2;
					*p2 = tmp;
					p1++; p2++;
				}
			}
		}
	}
	
}

int int_cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int char_cmp(const void* a, const void* b)
{
	return *(char*)a - *(char*)b;
}

int main()
{
	int arr1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	char arr2[] = "ihgfedcba";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int len = strlen(arr2);
	printf("排序前\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	puts(arr2);
	my_qsort(arr1, sz, sizeof(int), int_cmp);
	my_qsort(arr2, len, sizeof(char), char_cmp);
	printf("排序后：\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	puts(arr2);
	return 0;
}