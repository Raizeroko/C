#define _CRT_SECURE_NO_WARNINGS 1

//BC111 小乐乐与进制转换
//
//#include<stdio.h>
//
//void function(int x)
//{
//    if (x > 5)
//        function(x / 6);
//    printf("%d", x % 6);
//}
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    function(input);
//    return 0;
//}



//BC112 小乐乐求和
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    long long int sum = 0;
//    scanf("%ld", &input);
//    for (int i = 1; i <= input; i++)
//    {
//        sum = sum + i;
//    }
//    printf("%lld", sum);
//    return 0;
//}



//BC113 小乐乐定闹钟
//
//#include<stdio.h>
//
//int main()
//{
//    int hour, min, time;
//    scanf("%d:%d %d", &hour, &min, &time);
//    min += time % 60;
//    if (min >= 60)
//    {
//        hour = hour + time / 60 + 1;
//        hour %= 24;
//        min %= 60;
//    }
//    else
//    {
//        hour = hour + time / 60;
//        hour %= 24;
//
//    }
//    printf("%02d:%02d", hour, min);
//    return 0;
//}



//BC114 小乐乐排电梯
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int times, ans;
//    scanf("%d", &input);
//    times = input / 12;
//    ans = times * 4 + 2;
//    printf("%d", ans);
//    return 0;
//}



//BC115 小乐乐与欧几里得
//
//#include<stdio.h>
//
//int main()
//{
//    long long tmp = 0;
//    long long n, m, t = 0, max = 0, min = 0;
//    scanf("%lld%lld", &n, &m);
//    tmp = n * m;
//    if (n < m)
//    {
//        t = n;
//        n = m;
//        m = t;
//    }
//    while (n % m != 0)
//    {
//        t = n % m;
//        n = m;
//        m = t;
//    }
//    max = m;
//    min = tmp / max;
//    tmp = max + min;
//    printf("%lld", tmp);
//
//    return 0;
//}



//BC116 小乐乐改数字
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, sum = 0, m;
//    int a[9], i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        m = n % 10;
//        n /= 10;
//        if (m % 2 == 0)
//            a[i] = 0;
//        else
//            a[i] = 1;
//        sum += a[i] * pow(10, i);
//        i++;
//    }
//    printf("%d", sum);
//    return 0;
//}



//BC117 小乐乐走台阶
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    int method[100];
//    method[1] = 1;
//    method[0] = 1;
//    for (int i = 2; i <= input; i++)
//    {
//        method[i] = method[i - 1] + method[i - 2];
//    }
//    printf("%d", method[input]);
//    return 0;
//}



//BC118 小乐乐与序列
//
//#include <stdio.h>
//
//int main()
//{
//    int n, i, input, max = 0;
//    int a[100001] = { 0 };
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &input);
//        a[input] = input;
//        if (input >= max)
//        {
//            max = input;
//        }
//    }
//
//    for (i = 1; i <= max; i++)
//    {
//        if (a[i])
//        {
//            printf("%d ", a[i]);
//        }
//    }
//    return 0;
//}



//BC119 小乐乐与字符串
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char n1[8001];
//    char n2[] = "CHN";
//    int len = strlen(n1);
//    int num = 0, i = 0, j = 0, pos = 0;
//    gets(n1);
//
//    while (n1[i])
//    {
//        if (j == 3)
//        {
//            j = 0;
//            num++;
//            pos = i;
//        }
//        if (n1[i] == n2[j])
//        {
//            if (j == 0)
//                pos = i;
//            i++;
//            j++;
//        }
//        else
//        {
//            i = ++pos;
//            j = 0;
//        }
//    }
//    if (j == 3)
//        num++;
//    printf("%d", num);
//
//    return 0;
//}



//BC119 小乐乐与字符串
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[8000];
//    gets(a);
//    long int c = 0, h = 0, n = 0;
//
//    for (int i = 0; i <= strlen(a); i++)
//    {
//        if (a[i] == 'C')
//        {
//            c++;
//        }
//        else if (a[i] == 'H')
//        {
//            h += c;
//        }
//        else if (a[i] == 'N')
//        {
//            n += h;
//        }
//    }
//    printf("%ld", n);
//
//    return 0;
//}



//BC120 小乐乐与二段数
//



//BC121 小乐乐学编程
//
//#include<stdio.h>
//
//int main()
//{
//    printf("Practice makes perfect!");
//}



//BC122 小乐乐算平均分
//
//#include<stdio.h>
//
//int main()
//{
//    float a[3];
//    float sum = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%f", &a[i]);
//        sum += a[i];
//    }
//
//    printf("%.2f %.2f", sum, sum / 3);
//
//    return 0;
//}



//BC123 小乐乐找最大数
//
//#include<stdio.h>
//
//int main()
//{
//    int n[4];
//    int max;
//    scanf("%d", &n[0]);
//    max = n[0];
//    for (int i = 1; i < 4; i++)
//    {
//        scanf("%d", &n[i]);
//        if (n[i] > max)
//        {
//            max = n[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}



//BC124 小乐乐是否被叫家长
//
//#include<stdio.h>
//
//int main()
//{
//    int n[3];
//    int sum = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &n[i]);
//        sum += n[i];
//    }
//    if (sum / 3 >= 60)
//        printf("NO");
//    else
//        printf("YES");
//}



//BC125 小乐乐转换成绩
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    if (input > 100 || input < 0)
//        printf("F");
//    else if (input >= 90)
//        printf("A");
//    else if (input >= 80)
//        printf("B");
//    else if (input >= 70)
//        printf("C");
//    else if (input >= 60)
//        printf("D");
//    else
//        printf("E");
//
//    return 0;
//}
//


//BC126 小乐乐算多少人被请家长
//
//#include<stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    int a, b, c;
//    while (~scanf("%d%d%d", &a, &b, &c)) {
//        if ((a + b + c) / 3 < 60 && a != 0) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//


//BC127 小乐乐算最高分
//
//#include <stdio.h>
//
//int main()
//{
//    int n, max = -1;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int temp;
//        scanf("%d", &temp);
//        max = max > temp ? max : temp;
//    }
//    printf("%d", max);
//    return 0;
//}



//BC128 小乐乐计算求和
//
//#include<stdio.h>
//
//int main(void)
//{
//    int n = 0;
//    int renum = 0;
//    scanf("%d", &n);
//
//    for (int i = n; i >= 1; i--)
//    {
//        int num = 1;
//        for (int j = 1; j <= n; j++)
//        {
//            num *= j;
//        }
//        n--;
//        renum += num;
//    }
//    printf("%d", renum);
//
//    return 0;
//}



//BC129 小乐乐计算函数
//
#include<stdio.h>

float max(float a, float b, float c)
{
    float max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main()
{
    float a, b, c;
    float m;
    scanf("%f %f %f", &a, &b, &c);
    m = max(a + b, b, c) / (max(a, b + c, c) + max(a, b, b + c));
    printf("%.2f", m);
    return 0;
}



//BC130 小乐乐查找数字
//
#include<stdio.h>
int main()
{

    int n = 0, i = 0, x, sum = 0;
    scanf("%d", &n);
    int arr[100];

    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (x == arr[i])
            sum = sum + 1;
    }
    printf("%d\n", sum);

    return 0;
}



//BC131 KiKi学程序设计基础
//
#include<stdio.h>

int main()
{
    printf("printf(\"Hello world!\\n\");\n");
    printf("cout << \"Hello world!\" << endl;");
}



//BC132 KiKi算期末成绩
//
#include<stdio.h>

int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("%.1lf", a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5);
}



//BC133 KiKi说祝福语
//
#include<stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        printf("Happy new year!Good luck!\n");
}



//BC134 KiKi的最高分
//
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}



//BC135 KiKi求质数个数
//
#include<stdio.h>

int is_prime(int x)
{
    for (int i = 3; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int ans = 0;
    for (int i = 100; i < 1000; i++)
    {
        if (is_prime(i))
        {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}



//BC136 KiKi去重整数并排序
//
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10000] = { 0 };
    int m;
    while (~scanf("%d", &m)) {
        arr[m] = m;
    }

    for (int i = 0; i < 10000; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}



//BC137 KiKi判断上三角矩阵
//
#include <stdio.h>

int main()
{
    int n, a[12][12];
    int i, j;
    scanf("%d", &n);
    int flag = 0;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
            if (i > j && a[i][j] != 0) 
            {
                flag = 1;
            }
        }
    }
    if (flag) printf("NO\n");
    else printf("YES\n");
}



//BC138 KiKi学结构体和指针
//
#include<stdio.h>

int main()
{
    int n, a[100], m, i, k;
    scanf("%d", &n);
    k = n;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        if (a[i] == m)
            k--;
    }
    printf("%d\n", k);
    for (i = 0; i < n; i++)
    {
        if (a[i] != m)
            printf("%d ", a[i]);
    }
    printf("\n");
}



//BC139 KiKi定义电子日历类
//
#include<stdio.h>

struct TDate
{
    int month;
    int day;
    int year;
}a;
int main()
{
    scanf("%d%d%d", &a.year, &a.month, &a.day);
    printf("%d/%d/%d", a.day, a.month, a.year);
}



//BC140 KiKi设计类继承
//
#include<stdio.h>

int main()
{
    int a1, a2, b, c;
    scanf("%d %d", &a1, &a2);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d\n", a1 * a2);
    printf("%g\n", (float)(b * b * 3.14));
    printf("%d", c * c);
    return 0;
}