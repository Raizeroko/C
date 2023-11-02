#define _CRT_SECURE_NO_WARNINGS 1


//BC52 衡量人体胖瘦程度
//
//#include<stdio.h>
//
//int main()
//{
//    float a, b;
//    float bmi;
//    while (scanf("%f%f", &a, &b) != EOF)
//    {
//        b = b / 100;
//        bmi = a / (b * b);
//        if (bmi > 27.9)
//            printf("Obese\n");
//        else if (bmi > 23.9)
//            printf("Overweight\n");
//        else if (bmi > 18.5)
//            printf("Normal\n");
//        else
//            printf("Underweight\n");
//    }
//    return 0;
//}



//BC53 计算一元二次方程
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    double a, b, c;
//    double delta;
//    double x1, x2;
//    double i1;
//    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            delta = b * b - 4 * a * c;
//            if (delta == 0)
//            {
//                x1 = (((-b) + sqrt(delta)) / (2 * a));
//                printf("x1=x2=%.2lf\n", x1);
//            }
//            else if (delta > 0)
//            {
//                x1 = ((-b) - sqrt(delta)) / (2 * a);
//                x2 = ((-b) + sqrt(delta)) / (2 * a);
//                printf("x1=%.2f;x2=%.2f\n", x1, x2);
//            }
//            else
//            {
//                x2 = x1 = -b / (2 * a);
//                i1 = sqrt(-delta) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x1, i1, x2, i1);
//            }
//        }
//
//    }
//    return 0;
//}



//BC76 公务员考试
//
//#include<stdio.h>
//
//int main()
//{
//    int arr[7];
//    int sum = 0, max = 0, min = 0, i, j;
//    for (i = 0; i < 7; i++)
//    {
//
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    max = arr[0];
//    min = arr[0];
//    for (i = 1; i < 7; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        else if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    sum = sum - max - min;
//    printf("%.2f", (float)sum / 5);
//    return 0;
//}



//BC77 有序序列插入一个数
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int n[53];
//    int insert;
//    int tmp = 0;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &n[i]);
//    }
//    scanf("%d", &insert);
//    for (int i = 0; i < input; i++)
//    {
//        if (insert < n[i] && tmp == 0)
//        {
//            printf("%d ", insert);
//            tmp = 1;
//        }
//        printf("%d ", n[i]);
//    }
//    if (tmp == 0)
//        printf("%d ", insert);
//    return 0;
//}



//BC78 筛选法求素数
//
//#include<stdio.h>
//int main()
//{
//    int a[100], cnt = 0, i, n, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        cnt = 0;
//        for (i = 0; i <= n; i++)
//        {
//            a[i] = i;
//        }
//        for (i = 2; i < n; i++)
//        {
//            for (j = 4; j <= n; j++)
//            {
//                if (a[j] % i == 0 && i != j)
//                    a[j] = 0;
//            }
//        }
//
//        for (i = 2; i <= n; i++)
//        {
//            if (a[i] != 0)
//            {
//                printf("%d ", a[i]);
//            }
//            else
//                cnt++;
//        }
//        printf("\n%d\n", cnt);
//    }
//
//    return 0;
//}



//BC79 图像相似度
//
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    int a[100][100];
    int b[100][100];
    int k = 0;
    double similar;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == b[i][j])
            {
                k = k + 1;
            }
        }
    }
    similar = k * 100.00 / (m * n);
    printf("%.2lf", similar);

    return 0;
}