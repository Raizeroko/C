#define _CRT_SECURE_NO_WARNINGS 1

//17.04 消失的数字
int missingNumber(int* nums, int numsSize) {
    int ans = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        ans = ans ^ i ^ nums[i];
    }
    ans ^= i;
    return ans;
}



//剑指 Offer 56 - I. 数组中数字出现的次数
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize) {
    int tmp = 0, ans = 0;
    int* ret = (int*)calloc(2, sizeof(int));
    int i;
    for (i = 0; i < numsSize; i++)
    {
        ans ^= nums[i]; //将nums中所有数组异或 
    }
    for (i = 0; (1 << i) <= ans; i++)
    {
        tmp = ans;
        tmp |= (1 << i);
        if (tmp == ans)  //如果或后与原来相等,说明该位为1,表明两个数在该位不同，记录该位
        {
            break;
        }
    }

    for (int j = 0; j < numsSize; j++)
    {
        tmp = nums[j];
        tmp |= (1 << i);
        if (tmp != nums[j])         //将nums中i位上为1的异或ret[1]，
        {                           //i位上为0的异或到ret[0]
            ret[0] ^= nums[j];
        }
        else
        {
            ret[1] ^= nums[j];
        }
    }
    *returnSize = 2;
    return ret;
}

