#define _CRT_SECURE_NO_WARNINGS 1

//167. 两数之和 II - 输入有序数组
//
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;
    int* ret = (int*)malloc(sizeof(int) * 2);
    while (right > 0)
    {
        for (int i = 0; i < right; i++)
        {
            if (numbers[i] + numbers[right] == target)
            {
                ret[0] = i + 1;
                ret[1] = right + 1;
                *returnSize = 2;
                return ret;

            }
            if (numbers[i] + numbers[right] > target)
            {
                break;
            }
        }
        right--;
    }
    return ret;
}

//168. Excel表列名称
//
char* convertToTitle(int columnNumber) {
    char* ret = (char*)malloc(sizeof(char) * 10);
    int i = 9;
    while (columnNumber)
    {
        columnNumber -= 1;
        ret[i - 1] = columnNumber % 26 + 'A';
        columnNumber /= 26;
        i--;
    }
    ret[9] = '\0';
    return ret + i;
}

//191. 位1的个数
//
int hammingWeight(uint32_t n) {
    int output = 0;
    for (int i = 0; i < 32; i++)
    {
        if (n & 1 == 1)
            output++;
        n = n >> 1;
    }
    return output;
}

//205. 同构字符串
//
void GetK(char* s, int* k)
{
    int len = strlen(s);
    k[0] = 1;
    int level = 2;
    for (int i = 1; i < len; i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                flag = 0;
                k[i] = k[j];

            }
        }
        if (flag)
        {
            k[i] = level;
            level++;
        }
    }
}

bool isIsomorphic(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    int* k1 = (int*)malloc(sizeof(int) * len1);
    int* k2 = (int*)malloc(sizeof(int) * len1);
    GetK(s, k1);
    GetK(t, k2);
    for (int i = 0; i < len1; i++)
    {
        if (k1[i] != k2[i])
            return false;
    }
    return true;
}
