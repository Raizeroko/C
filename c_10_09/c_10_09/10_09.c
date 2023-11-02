#define _CRT_SECURE_NO_WARNINGS 1


//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//
//#include<stdio.h>
//
//#define ODD	0x55555555	//01010101 01010101 01010101 01010101
//#define EVEN 0xaaaaaaaa	//10101010 10101010 10101010 10101010
//#define EXOE(X)	(((X&ODD)<<1)|((X&EVEN)>>1))	//将奇数位左移或上偶数位右移
//
//void PrintBinary(int n)				//打印整形二进制					
//{
//	for (int i = 32 - 1 ; i >= 0; i--)
//	{
//		printf("%d", ((n & (1 << i)) != 0));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int input;
//	int output;
//	scanf("%d", &input);
//	PrintBinary(input);
//	output = EXOE(input);
//	printf("%d\n", output);
//	PrintBinary(output);
//
//	return 0;
//}



//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//
//#include<stdio.h>
//
//#define offsetof(a,b) ((char*)(&b)-(char*)(&a))	//结构体首地址减去需要计算的成员地址
//
//typedef struct stu {
//	char a;
//	int b;
//	double c;
//};    //定义一个结构体
//
//int main()
//{
//	struct stu kid;  //定义结构体变量
//	printf("%d", offsetof(kid, kid.c));  
//
//	return 0;
//}



//strcat自己链接自己尝试
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[20] = "hello ";
//	char b[] = "world";
//	strcat(a, b);
//	puts(a);
//	return 0;
//}



//my_strcat修改
//
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* sor)
//{
//	assert(dest);
//	assert(sor);
//	assert(dest != sor);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//	return dest;
//
//}
//
//int main()
//{
//	char a[20] = "Hello ";
//	char b[] = "world";
//	my_strcat(a, b);
//	puts(a);
//	return 0;
//}



//memmove修改
//
//#include<stdio.h>
//#include<assert.h>
//
//void* my_memmove(void* dest, const void* sor, unsigned int num)
//{
//	assert(dest);
//	assert(sor);
//	char* cp = (char*)dest;
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
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 0,0,0,0,0,0,0 };
//	my_memmove(arr1+2, arr1, 16);
//	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}