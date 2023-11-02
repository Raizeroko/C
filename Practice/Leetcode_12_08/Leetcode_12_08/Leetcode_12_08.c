#define _CRT_SECURE_NO_WARNINGS 1

//504. 七进制数
//
void reverse(char* str)
{
    int len = strlen(str);
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        int tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}


//509. 斐波那契数
//
int fib(int n) {
    int fibp = 0;
    int fib = 1;
    int i = 2;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    while (i <= n)
    {
        int tmp = fib;
        fib = fib + fibp;
        fibp = tmp;
        i++;
    }
    return fib;
}

char* convertToBase7(int num) {
    int flag = 0;
    if (num < 0)
        flag = -1;
    num = abs(num);
    printf("%d", num);
    int tmp = num;
    int size = 0;
    while (tmp)
    {
        tmp /= 7;
        size++;
    }
    char* ret = (char*)calloc((size + 2), sizeof(char));
    ret[0] = '0';
    tmp = num;
    int i = 0;
    while (tmp)
    {
        ret[i] = tmp % 7 + '0';
        i++;
        tmp /= 7;
    }
    if (flag == -1)
        ret[i] = '-';
    reverse(ret);
    return ret;
}

//507. 完美数
//
bool checkPerfectNumber(int num) {
    int tmp = 1;
    int ret = 0;
    while (tmp * tmp < num)
    {
        if (num % tmp == 0)
        {
            ret += tmp + num / tmp;
        }
        tmp++;
    }
    ret -= num;
    if (ret == num)
        return true;
    return false;
}



