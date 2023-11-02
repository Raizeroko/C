#define _CRT_SECURE_NO_WARNINGS 1

//657. 机器人能否返回原点
//
bool judgeCircle(char* moves) {
    int len = strlen(moves);
    int location[] = { 0,0 };
    for (int i = 0; i < len; i++)
    {
        if (moves[i] == 'U')
        {
            location[1]++;
        }
        else if (moves[i] == 'D')
        {
            location[1]--;
        }
        else if (moves[i] == 'L')
        {
            location[0]++;
        }
        else if (moves[i] == 'R')
        {
            location[0]--;
        }
    }
    if (location[0] == 0 && location[1] == 0)
        return true;
    return false;
}

//680. 验证回文字符串 Ⅱ
//
bool validPalindrome(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;
    int flag = 0;
    //printf("%d %d", left, right);
    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
            printf("%c %c ", s[left], s[right]);
        }
        else if (flag == 0)
        {
            if (left + 1 < right)
            {
                printf("%d %d ", s[left], s[right]);
                if (s[left] == s[right - 1])
                {
                    right--;
                    flag++;
                }
                else
                {
                    left++;
                    flag++;
                }
            }
            else
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

//693. 交替位二进制数
//
bool hasAlternatingBits(int n) {
    int tmp = n;
    int len = 0;
    while (tmp)
    {
        len++;
        tmp /= 2;
    }
    //printf("%d", len);
    int cmp = 0;
    for (int i = len - 1; i >= 0; i -= 2)
    {
        cmp += (int)pow(2, i);
    }
    if (cmp == n)
        return true;
    return false;
}


