#define _CRT_SECURE_NO_WARNINGS 1


//模拟实现memcpy
//
//#include<stdio.h>
//
//void* my_memcpy(void* dest, const void* sor, unsigned int sz)
//{
//	char* p = (char*)dest;
//	while (sz--)
//	{
//		*(char*)dest = *(char*)sor;
//		((char*)dest)++;
//		((char*)sor)++;
//	}
//	return p;
//}
//
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr2);
//	printf("copy前\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	my_memcpy(arr1, arr2, sz);
//	printf("\ncopy后\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//}



//模拟实现strstr
//
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* s1, * s2;
//	char* cp = str1;
//	if (!*str2)
//		return NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcde";
//	char arr2[] = "bbc";
//	char* s;
//	s = my_strstr(arr1, arr2);
//	if (s != NULL)
//		puts(s);
//	else
//		printf("不存在");
//	return 0;
//}



//模拟实现strcat
//
//#include<stdio.h>
//
//char* my_strcat(char* dest, const char* sor)
//{
//	char* p = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*sor)
//	{
//		*dest = *sor;
//		dest++;
//		sor++;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	puts(arr1);
//	return 0;
//}



//模拟实现strcmp
//
//#include<stdio.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{	
//	while (*str1 == *str2)
//	{
//		if (!*str1)
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdr";
//	int back;
//	back = my_strcmp(arr1, arr2);
//	if (back > 0)
//		printf("arr1>arr2.");
//	else if (back < 0)
//		printf("arr1<arr2");
//	else
//		printf("arr1=arr2");
//
//}



//模拟实现strcpy
//
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* sor)
//{
//	assert(dest);
//	assert(sor);
//	char* cp = dest;
//	while (*sor)
//	{
//		*dest = *sor;
//		dest++;
//		sor++;
//	}
//	*dest = *sor;
//	return cp;
//}
//
//int main()
//{
//	char arr1[10] = {'a','b','c','d'};
//	char arr2[] = "abcdefgh";
//	my_strcpy(arr1,arr2);
//	puts(arr1);
//	return 0;
//}



//模拟实现strlen
//
#include<stdio.h>

int my_strlen(const char* arr)
{
	int sz = 0;
	while(*arr++)
	{
		sz++;
	}
	return sz;
}

int main()
{
	char arr[] = "abcdefg";
	int sz = my_strlen(arr);
	printf("%d", sz);
	return 0;
}
//


//模拟memmve实现
//
//#include<stdio.h>
//#include<string.h>
//
//void* my_memmove(void* dest, const void* sor, unsigned int num)
//{
//	char* cp = dest;
//	char* p1 = (char*)dest;
//	char* p2 = (char*)sor;
//	if (dest > sor)
//	{
//		while (num--)
//		{
//			*(p1 + num) = *(p2 + num);
//		}
//		return cp;
//	}
//	else
//	{
//		while (num--)
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		}
//		return cp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
//	//memmove(arr+2, arr, 16);
//	my_memmove(arr , arr + 2, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}