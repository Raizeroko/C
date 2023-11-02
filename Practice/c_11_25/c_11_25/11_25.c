#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//35. 搜索插入位置
//
//int searchInsert(int* nums, int numsSize, int target) {
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] >= target)
//            return i;
//    }
//    return numsSize;
//}

//58. 最后一个单词的长度
//
int lengthOfLastWord(char* s) {
    int i = 0;
    int space = 0;
    int spacelong = 0;
    int flag = 0;

    while (s[i] != '\0')
    {
        flag = 0;
        spacelong = 0;
        while (s[i] == ' ')
        {
            flag = 1;
            spacelong++;
            i++;
        }
        if (flag == 1)
            i--;
        if (s[i] != '\0' && s[i - 1] == ' ')
            space = i;
        i++;
    }
    if (i == 0)
        return 0;
    return  i - space - 1;
}

int main()
{
    char s[] = "Hello World ";
    printf("%d", lengthOfLastWord(s));
    return 0;
}

//66. 加一
//
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    int* res = (int*)malloc((digitsSize + 1) * sizeof(int));
    if (res == NULL) {
        return res;
    }
    memset(res, 0, (digitsSize + 1) * sizeof(int));
    res[0] = 1;
    return res;
}