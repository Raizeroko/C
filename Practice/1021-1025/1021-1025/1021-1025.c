#define _CRT_SECURE_NO_WARNINGS 1



//PAT 1021
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char num[1001];
//	int count[10] = { 0 };
//	gets(num);
//	for (int i = 0; i < strlen(num); i++)
//	{
//		switch (num[i])
//		{
//		case '0':
//			count[0]++;
//			break;
//		case '1':
//			count[1]++;
//			break;
//		case '2':
//			count[2]++;
//			break;
//		case '3':
//			count[3]++;
//			break;
//		case '4':
//			count[4]++;
//			break;
//		case '5':
//			count[5]++;
//			break;
//		case '6':
//			count[6]++;
//			break;
//		case '7':
//			count[7]++;
//			break;
//		case '8':
//			count[8]++;
//			break;
//		case '9':
//			count[9]++;
//			break;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i] != 0)
//		{
//			printf("%d:%d\n", i, count[i]);
//		}
//	}
//	return 0;
//}



//PAT 1022
//
//#include<stdio.h>
//
//void function(int sum, int d)
//{
//	if (sum > d-1)
//		function(sum / d, d);
//	printf("%d", sum % d);
//}
//
//int main()
//{
//	int a, b, d, sum;
//	scanf("%d%d%d", &a, &b, &d);
//	sum = a + b;
//	function(sum, d);
//	return 0;
//}



//PAT 1023
//
//#include<stdio.h>
//
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int main()
//{
//	int arr[10];
//	int min = 10, i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < min && arr[i] != 0)
//		{
//			min = arr[i];
//			arr[i] = arr[0];
//			arr[0] = min;
//		}
//	}
//	qsort(arr + 1, i - 1, sizeof(int), cmp);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//PAT 1024
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[10000];
//	char num[10000] = { 0 }, E[10000] = {0};
//	char tmp;
//	int ans, pow, len;
//	int i, j;
//	gets(arr);
//	for (i = 0; arr[i] != 'E'; i++)//将E前的字符拷贝到数组num中
//	{
//			num[i] = arr[i];
//	}
//	num[i] = '\0';
//	//puts(num);
//	for (i++, j=0; arr[i] != '\0'; i++,j++)//将E后的字符拷贝到E数组中
//	{
//		E[j] = arr[i];
//	}
//	E[j] = '\0';
//	/*puts(E);*/
//	pow = (E[1]-'0') * 10 + (E[2]-'0');
//	/*printf("%d\n", pow);*/
//	if (E[0] == '+')
//	{
//		for (int k = 2; k < pow+1; k++)
//		{
//			if (num[k+1] == '\0')
//			{
//				num[k] = '0';
//				num[k+1] = '0';
//				num[k + 2] = '\0';
//			}
//			tmp = num[k];
//			num[k] = num[k + 1];
//			num[k + 1] = tmp;
//		}
//		if (num[0] == '+')
//			puts(num + 1);
//		else
//			puts(num);
//	}
//	else
//	{
//		/*len = strlen(num);
//		printf("%d", len);*/
//		for (int k = 0; k < pow; k++)
//		{
//			len = strlen(num);
//			tmp = num[2];
//			num[2] = num[1];
//			num[1] = tmp;
//			for (int l = len ; num[l] != '.'; l--)
//			{
//				num[l+1] = num[l];
//			}
//			num[2] = '0';
//			tmp = num[2];
//			num[2] = num[1];
//			num[1] = tmp;
//		}
//		if (num[0] == '+')
//			puts(num + 1);
//		else
//			puts(num);
//	}
//	return 0;
//}



//PAT 1027
//
#include<stdio.h>

int main()
{
	int input;
	char sym;
	scanf("%d %c", &input, &sym);
	for(int i = 0;i)
	return 0;
}