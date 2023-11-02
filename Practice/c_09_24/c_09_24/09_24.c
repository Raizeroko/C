#define _CRT_SECURE_NO_WARNINGS 1



//BC14 出生日期输入输出
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[9];
//	char year[5], month[3], day[3];
//	gets(a);
//	strncpy(year, a, 4);
//	year[4] = '\0';
//	strncpy(month, a + 4, 2);
//	month[2] = '\0';
//	strncpy(day, a + 6, 2);
//	day[2] = '\0';
//	printf("year=%s\n", year);
//	printf("month=%s\n", month);
//	printf("date=%s\n", day);
//
//	return 0;
//}



//BC15按照格式输入并交换输出
//
//#include<stdio.h>
//
//int main()
//{
//	int a,b;
//	scanf("a=%d,b=%d",&a,&b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}



//BC16字符转ASCII码
//
//#include<stdio.h>
//
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}



//BC17 计算表达式的值
//
//#include<stdio.h>
//
//int main()
//{
//    int a = 40, c = 212;
//    int sum = 0;
//    sum = (-8 + 22) * a - 10 + (c / 2);
//    printf("%d", sum);
//    return 0;
//}



//BC18 计算带余除法
//
//#include<stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}



//BC19 反向输出一个四位数
//
//#include<stdio.h>
//
//void function(int a)
//{
//	while (a > 9)
//	{
//		printf("%d", a % 10);
//		a /= 10;
//	}
//		printf("%d", a % 10);
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	function(a);
//	return 0;
//}



//BC20 kiki算数
//
//#include<stdio.h>
//
//int main()
//{
//	unsigned int a,b;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a + b) % 100);
//	return 0;
//}



//BC21 浮点数的个位数字
//
//#include<stdio.h>
//
//int main()
//{
//	float n;
//	int a;
//	scanf("%f", &n);
//	a = (int)n % 10;
//	printf("%d", a);
//	return 0;
//}



//BC22 你能活到多少秒
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	long long int year;
//	scanf("%lld", &year);
//	year = year * 3.156 * pow(10, 7);
//	printf("%lld", year);
//	return 0;
//}



//BC23 时间转换
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int hour = 0, min = 0, sec = 0;
//    scanf("%d", &input);
//    sec = input % 60;
//    min = input / 60 % 60;
//    hour = input / 3600 % 10;
//    printf("%d %d %d", hour, min, sec);
//    return 0;
//}



//BC24 总成绩和平均分计算
//
//#include<stdio.h>
//
//int main()
//{
//    float a, b, c, sum;
//    scanf("%f%f%f", &a, &b, &c);
//    sum = a + b + c;
//    printf("%.2f %.2f", sum, sum / 3);
//    return 0;
//}



//BC25 计算体重指数
//
//#include<stdio.h>
//
//int main()
//{
//	float a, b;
//	scanf("%f%f", &a, &b);
//	b = b / 100;
//	printf("%.2f", a / (b * b));
//	return 0;
//}



//BC26 计算三角形的周长和面积
// 
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a, b, c;
//	double p,s;
//	
//	scanf("%lf%lf%lf", &a, &b, &c);
//	p = (a + b + c) / 2;            //海伦公式
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference=%.2lf area=%.2lf", p * 2, s);
//	return 0;
//}



//BC27 计算球体的体积
//
//#define PI 3.1415926
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double v;
//	scanf("%lf", &v);
//	v = (double)4 / (double)3 * PI * pow(v, 3);
//	printf("%.3lf", v);
//	return 0;
//}



//BC28 大小写转换
//
//#include<stdio.h>
//
//int main()
//{
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		getchar();
//		printf("%c\n", a + 32);
//	}
//	return 0;
//}



//BC29 2的n次方计算
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	int i = 1;
//	while (scanf("%d", &input) != EOF)
//	{
//		printf("%d\n", (i<<input));
//	}
//	return 0;
//}



//BC30 KiKi和酸奶
//
#include<stdio.h>

int main()
{
	int n, h, m;
	scanf("%d%d%d", &n, &h, &m);
	if (m % h == 0)
	{
		printf("%d", n - m / h);
	}
	else
	{
		printf("%d", n - (m / h) -1);
	}
	return 0;
}


//柔性数组
//
//#include<stdio.h>
//
//struct s
//{
//	int i;
//	int a[];
//
//};
//
//int main()
//{
//	struct s p;
//	p.i = 100;
//	printf("%d", p.i);
//	return 0;
//}