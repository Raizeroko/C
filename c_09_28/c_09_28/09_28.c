#define _CRT_SECURE_NO_WARNINGS 1

//BC55 简单计算器
//
//#include<stdio.h>
//
//int main()
//{
//    double a, b;
//    char opt;
//    scanf("%lf%c%lf", &a, &opt, &b);
//    switch (opt)
//    {
//    case '+':
//        printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//        break;
//    case '-':
//        printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//        break;
//    case '*':
//        printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//        break;
//    case '/':
//        if (b == 0)
//        {
//            printf("Wrong!Division by zero!");
//            break;
//        }
//        printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//        break;
//    default:
//        printf("Invalid operation!");
//        break;
//    }
//    return 0;
//}



//BC56 找段图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}



//BC57 正方形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC58 直角三角形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC59 翻转直角三角形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC60 带空格直角三角形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (int k = 0; k <= i; k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC61 金字塔图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input - i - 1; j++)
//            {
//                printf(" ");
//            }
//            for (int k = 0; k <= i; k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC62 翻转金字塔图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int k = 0; k < i; k++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j < input - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC63 菱形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i <= input; i++)
//        {
//            for (int k = 0; k < input - i; k++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int k = 0; k < input - i; k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC64 K形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i <= input; i++)
//        {
//            for (int j = 0; j <= input - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j <= i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC65 箭形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i <= input; i++)
//        {
//            for (int j = 0; j < input - i; j++)
//            {
//                printf("  ");
//            }
//            for (int k = 0; k <= i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < input; i++)
//        {
//            for (int k = 0; k <= i; k++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j < input - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC66 反斜线形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//        return 0;
//    }
//}



//BC67 正斜线形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input - i - 1; j++)
//                printf(" ");
//            printf("*\n");
//        }
//    }
//    return 0;
//}



//BC68 X形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input; j++)
//            {
//                if (i == j || i + j == input - 1)
//                    printf("*");
//                else
//                    printf(" ");
//
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC69 空心正方形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input = 0;
//    for (int k = 3; k <= 20; k++)
//    {
//        scanf("%d", &input);
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input; j++)
//            {
//                if (j == 0 || i == 0 || j == input - 1 || i == input - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//


//BC70 空心三角形图案
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    while (scanf("%d", &input) != EOF)
//    {
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input; j++)
//            {
//                if (j == 0 || i == input - 1 || i == j)
//                {
//                    printf("* ");
//                }
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//
//
//    }
//    return 0;
//}



//BC71 新年快乐
//
//#include<stdio.h>
//
//int main()
//{
//    printf("Happy New Year*2019*");
//    return 0;
//}



//BC72 平均身高
//
//#include <stdio.h>
//
//int main()
//{
//    float stu[5];
//    float sum = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%f", &stu[i]);
//        sum = sum + stu[i];
//    }
//    printf("%.2f", sum / 5);
//    return 0;
//}



//BC73 挂科危险
//
#include<stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    if (input >= 10)
        printf("Danger++");
    else if (input >= 4)
        printf("Danger");
    else if(input >= 0)
        printf("Good");
    return 0;
}



//BC74 HTTP状态码
//
#include<stdio.h>

int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        switch (input)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        }
    }
    return 0;
}



//BC75 数字三角形
//
#include<stdio.h>

int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j <= i; j++)
                printf("%d ", j + 1);
            printf("\n");
        }
    }
    return 0;
}