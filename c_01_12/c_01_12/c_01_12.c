#define _CRT_SECURE_NO_WARNINGS 1

//HJ99 自守数
#include<stdio.h>

bool IsATNumber(int input)
{

    int tmp = input * input;
    while (input)
    {
        if (input % 10 != tmp % 10)
        {
            return false;
        }
        input /= 10;
        tmp /= 10;
    }
    return true;

}
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        int ret = 0;
        for (int i = 0; i <= input; i++)
        {
            if (IsATNumber(i))
            {
                ret++;
            }
        }
        printf("%d\n", ret);
    }
    return 0;
}

//返回小于N的质数个数
#include<stdio.h>

bool isPNumber(const int input)
{
    if (input == 2)
        return true;
    for (int i = 2; i < input; i++)
    {
        if (input % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int ret = 0;
    int input;
    scanf("%d", &input);
    for (int i = 2; i <= input; i++)
    {
        if (isPNumber(i))
        {
            ret++;
        }
    }
    printf("%d", ret);
    return 0;
}
