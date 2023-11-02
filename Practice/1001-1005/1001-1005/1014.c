//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[61], arr2[61], arr3[61], arr4[61];
//	char day[7][4] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
//	int i;
//	int count = 0;
//	gets(arr1); gets(arr2); gets(arr3); gets(arr4);
//	for (i = 0; i < strlen(arr1) && i < strlen(arr2); i++)
//	{
//		if (count == 0)
//		{
//			if (arr1[i] == arr2[i] && arr1[i] >= 'A' && arr1[i] <= 'G')
//			{
//				printf("%s ", day[arr1[i] - 'A']);
//				count++;
//
//			}
//		}
//		else
//		{
//			if (arr1[i] == arr2[i] && arr1[i] >= 'A' && arr1[i] <= 'N')
//			{
//				printf("%2d", (arr1[i] - '7'));
//				break;
//			}
//			else if (arr1[i] == arr2[i] && arr1[i] >= '0' && arr1[i] <= '9')
//			{
//				printf("%02d", (arr1[i] - '0'));
//				break;
//			}
//		}
//
//	}
//	for (i = 0; i < strlen(arr3) && i < strlen(arr4); i++)
//	{
//		if (arr3[i] == arr4[i] && ((arr3[i] >= 'a' && arr3[i] <= 'z') || (arr3[i] >= 'a' && arr3[i] <= 'z')))
//		{
//			printf(":%02d", i);
//			break;
//		}
//
//	}
//	return 0;
//}
