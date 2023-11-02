#define _CRT_SECURE_NO_WARNINGS 1


//面试题 16.05. 阶乘尾数
//
int trailingZeroes(int n) {
    int tmp = n;
    int ret = 0;
    while (tmp)
    {
        tmp /= 5;
        ret += tmp;
    }
    return ret;
}

//HJ7 取近似值
//
int main()
{
    double input;
    scanf("%lf", &input);
    double tmp = input;
    tmp *= 10;
    if ((int)tmp % 10 >= 5)
    {
        printf("%d", (int)input + 1);
    }
    else
    {
        printf("%d", (int)input);

    }
    return 0;
}