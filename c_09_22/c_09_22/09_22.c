#define _CRT_SECURE_NO_WARNINGS 1



//BC1 实践出真知
//
//#include<stdio.h>
//
//int main()
//{
//    printf("Practice makes perfect!");
//    return 0;
//}



//BC2 我是大V
// 
//#include<stdio.h>
//
//int main()
//{
//    printf("v   v\n");
//    printf(" v v \n");
//    printf("  v  \n");
//    return 0;
//}



//BC3 有容乃大
//
//#include<stdio.h>
//
//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}



//BC6 小飞机
//
//#include<stdio.h>
//
//int main()
//{
//    int i;
//    for (i = 0; i < 6; i++)
//    {
//        if (i < 2)
//            printf("     **     \n");
//        else if (i > 3)
//            printf("    *  *    \n");
//        else
//            printf("************\n");
//    }
//    return 0;
//}



//BC7 缩短二级制
//
//#include<stdio.h>
//
//int main()
//{
//    printf("%#o %#x", 1234, 1234);
//    return 0;
//}



//BC8 十六进制转十进制
//
//#include<stdio.h>
//
//int main()
//{
//    printf("%15d", 0xABCDEF);
//    return 0;
//}



//BC9 Printf返回值
//
//#include<stdio.h>
//
//int main()
//{
//    printf("%d", printf("Hello world!\n"));
//    return 0;
//}



//BC10 成绩输入输出
//
//#include<stdio.h>
//
//int main()
//{
//	int s1, s2, s3;
//	scanf("%d%d%d", &s1, &s2, &s3);
//	printf("score1=%d,score2=%d,score3=%d", s1, s2, s3);
//	return 0;
//}



//BC11 学生基本信息输入输出
//
//#include<stdio.h>
//
//int main()
//{
//	int num;
//	float c, math, english;
//	scanf("%d;%f,%f,%f", &num, &c, &math, &english);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", num, c, math, english);
//	return 0;
//}



//BC12 字符金字塔
//
//#include<stdio.h>
//
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    for (int i = 0; i < 5; i++)
//    {
//        for (int k = 4 - i; k >= 0; k--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%c ", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//BC13 ASCⅡ码
//
//#include<stdio.h>
//
//int main()
//{
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//	return 0;
//}



//atoi使用
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//    int n;
//    char* str = "12345.67";
//    n = atoi(str);
//    printf("n=%d\n", n);
//    return 0;
//}



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



