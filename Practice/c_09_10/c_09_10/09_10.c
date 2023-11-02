#define _CRT_SECURE_NO_WARNINGS 1



//
//
//#include <stdio.h>
// 
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}



//找出两个数中较大的数
// 
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}



//static掌握的判断
// 
//#include <stdio.h>
// 
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}



//5个数的平均数
// 
//#include<stdio.h>
// 
//int main()
//{
//    int stu[5];
//    float avg = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &stu[i]);
//        avg = avg + stu[i];
//    }
//    avg /= avg;
//    printf("%.1f", avg);
//    return 0;
//}



//三个数排序
// 
//#include<stdio.h>
//
//int cmp(const void* a, const void* b)
//{
//	return *((int*)b) - *((int*)a);
//}
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 3, sizeof(int), cmp);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//1-100中被三整除的数
//
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//b输出的值？？？？？
//
//#include<stdio.h>
// 
//int main()
//{
//    int a = 1;
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    printf("%d", b);
//    return 0;
//}



//找最大公倍数
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		for (int i = a; i > 0; i--)
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//	}
//	else
//	{
//		for (int i = b; i > 0; i--)
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//	}
//	return 0;
//}



//找1000-2000的闰年
//
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////100-200中的素数
//
//int is_prime(int x)
//{
//	for (int i = 3; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//#include<stdio.h>
//int main()
//{
//	int tmp;
//	for (int i = 100; i <= 200; i++)
//	{
//		tmp = is_prime(i);
//		if (tmp == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//1-100中有几个9
//
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int tmp = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		tmp = i;
//		while (tmp % 10)
//		{
//			if (tmp % 10 == 9)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}



//1/1-1/2+1/3-1/4+........+1/n
//
//#include<stdio.h>
//
//int main()
//{
//	double sum = 0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum = sum + 1 / (double)i;
//	}
//	for (int i = 2; i <= 100; i += 2)
//	{
//		sum = sum - 1 / (double)i;
//	}
//	printf("%lf", sum);
//	return 0;
//} 
 


//找最大值
//
//#include<stdio.h>
//
//int maxf(int* arr, int num)
//{
//	int max = arr[0];
//	for (int i = 1; i < num; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//} 
// 
//int main()
//{
//	int arr[10];
//	int max;
//	int num = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = maxf(arr, num);
//	printf("%d", max);
//	return 0;
//}



//九九乘法表
//
//#include<stdio.h>
// 
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//二分查找
//#include<stdio.h>
//
//int half_find(int* arr, int sz, int input)
//{
//	int left = 0, right = sz -1, mid =0;
//	while (left <= right)
//	{
//		 mid = (left + right) / 2;
//		if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return  mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { -1,1,2,5,7,9,20,23,41,32 };
//	int ans,input;
//	scanf("%d", &input);
//	int sz = (sizeof(arr)/sizeof(int));
//	ans = half_find(arr, sz, input);
//	if (ans != -1)
//	{
//		printf("%d", ans);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}


//判断是不是闰年

//#include<stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if ((input % 4 == 0 & input % 100 != 0) || input % 400 == 0)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}



//交换两个数
//
//#include<stdio.h>
// 
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}




//随输入打印乘法表
//
//#include<stdio.h>
//
//int main()
//{
//	int i,j,input;
//	scanf("%d", &input);
//	for (i = 1; i < input; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d* %-2d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//



//用递归实现打印整数的每一位
//
//#include<stdio.h>
//
//int function(int x)
//{
//	if (x > 9)
//	{
//		function(x / 10);
//	}
//		printf("%d ", x % 10);
//
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	function(input);
//	return 0;
//}



//用递归实现求阶乘
//
//#include<stdio.h>
//
//int function(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//	return x*function(x-1);
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	printf("%d",function(input));
//}



//递归实现strlen
//
//#include<stdio.h>
//
//int my_strlen(char* a)
//{
//	if (*a != '\0')
//		return 1 + my_strlen(a + 1);
//	else 
//		return 0;
//}
//
//int main()
//{
//	int len;
//	char arr[] = "abcdefg";
//	len = my_strlen(arr);
//	printf("%d", len);
//}



//用递归实现字符逆序
//
//#include<stdio.h>
//
//int my_strlen(char* a)
//{
//	if (*a != '\0')
//		return 1 + my_strlen(a + 1);
//	else 
//		return 0;
//}
//
//void reverse_string(char str[])
//{
//	int len = my_strlen(str);
//	int tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str) > 1)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("Before........\n");
//	printf("%s", arr);
//	reverse_string(arr);
//	printf("\nAfter reverse.\n");
//	printf("%s", arr);
//	return 0;
//}



//递归实现整数各位相加和
//
//#include<stdio.h>
//
//int DigitSum(int x)
//{
//	if (x > 10)
//		return x%10 + DigitSum(x / 10);
//	else
//		return x % 10;
//}
//
//int main()
//{
//	int input;
//	int sum;
//	scanf("%d", &input);
//	sum = DigitSum(input);
//	printf("%d", sum);
//	return 0;
//}



//递归实现n的k次方
//
//#include<stdio.h>
//
//int function(int n, int k)
//{
//	if (k > 1)
//		return n * function(n, k - 1);
//	else
//		return n;
//}
//
//int main()
//{
//	int n, k, ans;
//	scanf("%d%d", &n, &k);
//	ans = function(n, k);
//	printf("%d", ans);
//	return 0;
//}



//递归实现斐波那契数
//
//#include<stdio.h>
//
//fibona(int x)
//{
//	if (x < 3)
//		return 1;
//	else
//		return fibona(x - 1) + fibona(x - 2);
//}
//
//int main()
//{
//	int input;
//	int ans;
//	scanf("%d", &input);
//	ans = fibona(input);
//	printf("%d", ans);
//	return 0;
//}



