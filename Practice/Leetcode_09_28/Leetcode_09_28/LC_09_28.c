#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

//1.两数之和
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i, j;
//    int* p = NULL;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        for (j = i + 1; j < numsSize; j++)
//        {
//            if (target == nums[i] + nums[j])
//            {
//                p = (int*)malloc(2 * sizeof(int));
//                p[0] = i;
//                p[1] = j;
//                *returnSize = 2;
//                return p;
//            }
//        }
//    }
//    return NULL;
//}



//7.整数反转
//
//int reverse(int x) {
//    int i;
//    int new_x = 0;
//    while (x / 10)
//    {
//        i = x % 10;
//        new_x = i + new_x * 10;
//        x /= 10;
//    }
//    if (new_x > 214748364 || (new_x == 214748364 && x % 10 >= 7) ||
//        new_x < -214748364 || new_x == -214748364 && x % 10 <= -8)
//    {
//        return 0;
//    }
//    i = x % 10;
//    new_x = i + new_x * 10;
//    return new_x;
//
//}



//9.回文数
//
//bool isPalindrome(int x) {
//    long new_x = 0;
//    if (x < 0 || (x % 10 == 0 && x != 0))
//        return false;
//    else if (x <= 9)
//        return true;
//    while (x / 10)
//    {
//        new_x = new_x * 10 + x % 10;
//        x /= 10;
//        if (new_x == x || new_x == x / 10)
//            return true;
//
//    }
//    return false;
//
//}


