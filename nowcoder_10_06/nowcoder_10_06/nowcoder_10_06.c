#define _CRT_SECURE_NO_WARNINGS 1

//BC91 成绩输入输出问题
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &input);
//        printf("%d ", input);
//    }
//    return 0;
//}





//BC92 逆序输出
//
//#include<stdio.h>
//
//int main()
//{
//    int n[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &n[i]);
//    }
//
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", n[i]);
//    }
//    return 0;
//}



//BC93 统计数据正负个数
//
//#include<stdio.h>
//
//int main()
//{
//    int pos = 0, neg = 0;
//    int input;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &input);
//        if (input > 0)
//            pos++;
//        else
//            neg++;
//    }
//    printf("positive:%d\n", pos);
//    printf("negative:%d\n", neg);
//    return 0;
//}
//


//BC94 N个数之和
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int sum = 0, tmp;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &tmp);
//        sum += tmp;
//    }
//    printf("%d", sum);
//    return 0;
//}



//BC95 最高分与最低分之差
//
//#include<stdio.h>
//
//int main()
//{
//    int max = 0, min = 100;
//    int input;
//    int tmp;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &input);
//        if (input > max)
//            max = input;
//        if (input < min)
//            min = input;
//    }
//    printf("%d", max - min);
//    return 0;
//} 



//BC96 有序序列判断
//
//#include<stdio.h>
//
//int choose(int x, int y)
//{
//    return x - y;
//}
//
//int main()
//{
//    int input, Case;
//    int arr[50];
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    Case = choose(arr[0], arr[1]);
//    if (Case > 0)
//    {
//        for (int i = 0; i < input - 1; i++)
//        {
//            if (arr[i] < arr[i + 1])
//            {
//                printf("unsorted");
//                return 0;
//            }
//
//        }
//        printf("sorted");
//    }
//    else
//    {
//        for (int i = 0; i < input - 1; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                printf("unsorted");
//                return 0;
//            }
//        }
//        printf("sorted");
//
//    }
//    return 0;
//}



//BC97 有序序列插入一个整数
//
//#include<stdio.h>
//
//int main()
//{
//    int n[51];
//    int input;
//    int insert;
//    int tmp = 0;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &n[i]);
//    }
//    scanf("%d", &insert);
//    for (int i = 0; i < input;)
//    {
//        if (insert < n[i] && tmp == 0)
//        {
//            printf("%d ", insert);
//            tmp = 1;
//        }
//        else
//        {
//            printf("%d ", n[i]);
//            i++;
//        }
//    }
//    if (tmp == 0)
//        printf("%d ", insert);
//    return 0;
//}



//BC98 序列中删除指定数字
//
//#include<stdio.h>
//
//int main()
//{
//    int input, j = 0;
//    int arr[51];
//    int del;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    for (int i = 0; i < input; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//
//    }
//    for (int i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//BC99 序列中整数去重
//
//#include<stdio.h>
//
//int main() {
//    int n, i, j, p = 0, flag = 1;
//    scanf("%d", &n);
//    int a[n];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//        for (j = 0; j < i; j++)
//        {
//            if (a[i] == a[j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//            printf("%d ", a[i]);
//        flag = 1;
//    }
//    return 0;
//}



//BC100 有序序列合并
//
//#include<stdio.h>
//
//int main()
//{
//    int n, m, i, j;
//    int arr1[5000], arr2[5000];
//    scanf("%d%d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    for (i = 0, j = 0; i < n && j < m;)
//    {
//        if (arr1[i] <= arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i != n)
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    else if (j != m)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    return 0;
//}



//BC101 班级成绩输入输出
//
//#include<stdio.h>
//
//int main()
//{
//    float n[5][5];
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%f", &n[i][j]);
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        float sum = 0;
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%.1f ", n[i][j]);
//            sum += n[i][j];
//        }
//        printf("%.1f\n", sum);
//
//    }
//    return 0;
//}



//BC102 矩阵元素定位
//
//#include<stdio.h>
//
//int main()
//{
//    int row, col;
//    int n[100][100];
//    int x, y;
//    scanf("%d %d", &row, &col);
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            scanf("%d", &n[i][j]);
//        }
//    }
//    scanf("%d %d", &x, &y);
//
//    printf("%d", n[x - 1][y - 1]);
//    return 0;
//}



//BC103 序列重组矩阵
//
//#include<stdio.h>
//
//int main()
//{
//    int n[100];
//    int row, col;
//    scanf("%d %d", &row, &col);
//    for (int i = 0; i < row * col; i++)
//        scanf("%d", &n[i]);
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            printf("%d ", n[i * col + j]);
//        }
//        printf("\n");
//    }
//}



//BC104 最高身高
//
//#include<stdio.h>
//
//int main()
//{
//    int row, col;
//    int n[10][10];
//    int max = 0, maxi, maxj;
//
//    scanf("%d %d", &row, &col);
//    for (int i = 0; i < row; i++)
//    {
//
//        for (int j = 0; j < col; j++)
//        {
//            scanf("%d", &n[i][j]);
//            if (max < n[i][j])
//            {
//                max = n[i][j];
//                maxi = i;
//                maxj = j;
//            }
//        }
//    }
//    printf("%d %d", maxi + 1, maxj + 1);
//    return 0;
//}



//BC105 矩阵相等判定
//
//#include <stdio.h>
//
//int main()
//{
//    int n, m, flag = 1;
//    scanf("%d%d", &n, &m);
//    int a[n][m], b[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i][j] != b[i][j])
//            {
//                flag = 0;
//            }
//        }
//    }
//    if (flag)
//    {
//        printf("Yes");
//    }
//    else
//    {
//        printf("No");
//    }
//    return 0;
//}



//BC106 上三角矩阵判定
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int n[10][10];
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//    {
//        for (int j = 0; j < input; j++)
//        {
//            scanf("%d", &n[i][j]);
//        }
//    }
//    for (int i = 1; i < input; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (n[i][j] != 0)
//            {
//                printf("NO\n");
//                return 0;
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}



//BC107 矩阵转置
//
//#include<stdio.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int j = 0; j < m; j++)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//BC108 矩阵交换
//
#include <stdio.h>
int main()
{
    int a[15][15], b[15][15];
    int i, j, n, m, flag = 1, k;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &k);
    while (k--) {
        char ch;
        getchar();
        ch = getchar();
        int x, y;
        scanf("%d%d", &x, &y);
        x--;
        y--;
        if (ch == 'r') {
            for (j = 0; j < m; j++) {
                int t = a[x][j];
                a[x][j] = a[y][j];
                a[y][j] = t;
            }
        }
        else if (ch == 'c') {
            for (i = 0; i < n; i++) {
                int t = a[i][x];
                a[i][x] = a[i][y];
                a[i][y] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}



//BC109 杨辉三角
//
#include<stdio.h>

int main()
{
    int input;
    int n[30][30];
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                n[i][j] = 1;
            else
                n[i][j] = n[i - 1][j - 1] + n[i - 1][j];
            printf("%5d", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}



//BC110 井字棋
//
#include <stdio.h>
int main()
{
    char a[3][3];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] = getchar();
            getchar();
        }
    }
    int flag = 0;
    for (i = 0; i < 3; i++) {
        if (a[i][0] == 'K' && a[i][1] == 'K' && a[i][2] == 'K') {
            flag = 1;
            break;
        }
    }
    for (i = 0; i < 3; i++) {
        if (a[0][i] == 'K' && a[1][i] == 'K' && a[2][i] == 'K') {
            flag = 1;
            break;
        }
    }
    if (a[0][0] == 'K' && a[1][1] == 'K' && a[2][2] == 'K') flag = 1;
    if (a[0][2] == 'K' && a[1][1] == 'K' && a[2][0] == 'K') flag = 1;
    if (a[0][0] == 'B' && a[1][1] == 'B' && a[2][2] == 'B') flag = -1;
    if (a[0][2] == 'B' && a[1][1] == 'B' && a[2][0] == 'B') flag = -1;
    for (i = 0; i < 3; i++) {
        if (a[i][0] == 'B' && a[i][1] == 'B' && a[i][2] == 'B') {
            flag = -1;
            break;
        }
    }
    for (i = 0; i < 3; i++) {
        if (a[0][i] == 'B' && a[1][i] == 'B' && a[2][i] == 'B') {
            flag = -1;
            break;
        }
    }
    if (flag == 1) printf("KiKi wins!\n");
    else if (flag == 0) printf("No winner!\n");
    else printf("BoBo wins!\n");
}