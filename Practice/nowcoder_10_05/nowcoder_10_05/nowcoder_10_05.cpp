#define _CRT_SECURE_NO_WARNINGS 1

//BC80 登录验证
//
//#include<stdio.h>
//
//int main()
//{
//    char a[10];
//    char b[10];
//    while (scanf("%s %s", &a, &b) != EOF)
//    {
//        if (strcmp(a, "admin") == 0 && strcmp(b, "admin") == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}



//BC81 学好C++
//
//#include<stdio.h>
//
//int main()
//{
//    printf("I will learn C++ well!\n");
//    return 0;
//}



//BC82 (a+b-c)*d问题
//
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d", (a + b - c) * d);
//    return 0;
//}



//BC83 被5整除的问题
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    if (input % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}



//BC84 计算y的值
//
//#include<stdio.h>
//
//int main()
//{
//    int x, y;
//    scanf("%d", &x);
//    if (x > 0)
//        printf("%d", -1);
//    else if (x == 0)
//        printf("%d", 0);
//    else
//        printf("%d", 1);
//    return 0;
//}



//包含9的数
//
#include<stdio.h>

int main()
{
    int count = 0;
    int tmp;
    for (int i = 1; i <= 2019; i++)
    {
        tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 9)
            {
                count++;
                break;
            }
            else
            {
                tmp /= 10;
            }
        }
    }
    printf("%d", count);
    return 0;
}



//BC86 奇偶统计
//
#include<stdio.h>

int main()
{
    int input = 0;
    scanf("%d", &input);
    if (input % 2 == 1)
        printf("%d %d", input / 2 + 1, input / 2);
    else
        printf("%d %d", input / 2, input / 2);
    return 0;
}



//BC87 统计成绩
//
#include<stdio.h>

int main()
{
    int input;

    float n[100];
    float max = 0, min = 100, sum = 0;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        scanf("%f", &n[i]);
        sum = sum + n[i];
        if (max < n[i])
            max = n[i];
        if (min > n[i])
            min = n[i];
    }
    printf("%.2f %.2f %.2f", max, min, sum / input);

    return 0;
}



//BC88 有序序列插入一个数
//
#include<stdio.h>

int main()
{
    int input;
    int tmp;
    int n[51];
    int insert;
    int i;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &n[i]);
    }
    scanf("%d", &insert);
    for (i = 0; i < input; i++)
    {
        if (insert < n[i])
        {
            for (int j = i; j < input + 1; j++)
            {
                tmp = n[j];
                n[j] = insert;
                insert = tmp;
            }
            break;
        }
    }
    if (i == input)
        n[input] = insert;
    for (int i = 0; i < input + 1; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}



//BC89 密码验证
//
#include<stdio.h>

int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", &a, &b);
    if (strcmp(a, b) == 0)
        printf("same\n");
    else
        printf("different\n");
    return 0;
}



//BC90 矩阵计算
//
#include<stdio.h>

int main()
{
    int row, line;
    int sum = 0, tmp;
    scanf("%d %d", &row, &line);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < line; j++)
        {
            scanf("%d", &tmp);
            if (tmp > 0)
            {
                sum = sum + tmp;
            }
        }
    }
    printf("%d", sum);
    return 0;
}