//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include<stdio.h>
//
//int main()
//{
//    int N = 0, n = 0, a[5] = { 0 }, count = 0, count2 = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &n);
//        if (n % 10 == 0) a[0] = a[0] + n;//如果能被5整除而且是偶数
//        if (n % 5 == 1)
//        {
//            count++;
//            if (count % 2 != 0) a[1] = a[1] + n;//交错求和
//            else a[1] = a[1] - n;
//        }
//        if (n % 5 == 2) a[2] = a[2] + 1;//被5整除余二的个数
//        if (n % 5 == 3)//先记录余数为3的总和和个数最后输出平均数即可
//        {
//            a[3] = a[3] + n;
//            count2++;
//        }
//        if (n % 5 == 4 && n > a[4]) a[4] = n;//求除5余数为4的最大数
//    }
//    if (a[0] != 0) printf("%d ", a[0]);
//    else printf("N ");
//    if (count) printf("%d ", a[1]);//这里要判断count的值因为0这个特殊值的存在
//    else printf("N ");
//    if (a[2] != 0) printf("%d ", a[2]);
//    else printf("N ");
//    if (a[3] != 0) printf("%.1f ", a[3] * 1.0 / count2);
//    else printf("N ");
//    if (a[4] != 0) printf("%d", a[4]);
//    else printf("N");
//}
