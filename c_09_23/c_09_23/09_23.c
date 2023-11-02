#define _CRT_SECURE_NO_WARNINGS 1



//atoi实现
//
//#include<stdio.h>
//#include<string.h>
//
//int my_atoi(const char* str)
//{
//    int n = 0;
//    int i = 0;
//    int len = strlen(str);
//    if (str[0] == '-')    //负数
//    {
//        for (i = 1; i < len; i++)         
//        {                      
//            if (str[i] >= '0' && str[i] <= '9')  //字符转数字
//            {
//                n *= 10;
//                n -= str[i] - '0';
//                continue;
//            }
//            else if (i == 1)                      //当第一位不是数字
//            {
//                return 0;
//            }
//            else
//            {
//                return n;
//            }
//        }
//    }
//    else                                          //正数
//    {
//        for (i = 0; i < len; i++)
//        {                      
//            if (str[i] >= '0' && str[i] <= '9')   //字符转数字
//            {
//                n *= 10;
//                n += str[i] - '0';
//                continue;
//            }
//            else if (i == 0)                       //当第一位不是数字
//            {
//                return 0;
//            }
//            else
//            {
//                return n;
//            }
//        }
//    }
//    
//    return n;
//}
//
//int main()
//{
//    int n;
//    char* str = "-112344abc";
//    n = my_atoi(str);
//    printf("n=%d\n", n);
//    return 0;
//}



//strncpy
//
//#include<stdio.h>
//
//char* my_strncpy(char* dest, const char* src, unsigned int sz)
//{
//	unsigned int i;
//	for (i = 0; i < sz && src[i] != '\0'; i++)
//	{
//		if (dest[i] != '\0')
//		{
//			dest[i] = src[i];
//		}
//		else
//			return NULL;
//	}
//	if (dest[i] != '\0')
//	{
//		dest[i] = '\0';
//		return *dest;
//	}
//	return NULL;
//	
//}
//
//int main()
//{
//	char a[] = "aaaaaaaaa";
//	char b[] = "abcdefgh";
//	my_strncpy(a, b, 5);
//	puts(a);
//	return 0;
//}



//strncat
//
//#include<stdio.h>
//
//char* my_strncat(char* dest, const char* src, unsigned int sz)
//{
//	unsigned int i = 0;
//	while (*dest)
//		dest++;
//	while (*dest = *src)
//	{
//		if (i < sz)
//		{
//			*dest++ = *src++;;
//			
//			i++;
//		}
//		else
//		{
//			*dest = '\0';
//			return dest;
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	char a[20] = "aaaabc";
//	char b[] = "defghij";
//	my_strncat(a, b, 5);
//	puts(a);
//	return 0;
//}



//找出单身狗
//
//#include<stdio.h>
//
//int Find_dog(int* str, int sz)
//{
//	int n = str[0];
//	for (int i = 1; i < sz; i++)
//	{
//		n = n ^ str[i];
//	}
//	return n;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int dog;
//	dog = Find_dog(a,sz);
//	printf("%d", dog);
//	return 0;
//}



//改造通讯录
//
