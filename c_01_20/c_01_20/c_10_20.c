#define _CRT_SECURE_NO_WARNINGS 1

//1480. 一维数组的动态和
//
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* ret = (int*)malloc(sizeof(int) * numsSize);
    memcpy(ret, nums, numsSize * sizeof(int));
    for (int i = 1; i < numsSize; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ret[i] += nums[j];
        }
    }
    *returnSize = numsSize;
    return ret;
}   

//35. 搜索插入位置
//
int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++)
    {
        if (target == nums[i])
        {
            return i;
        }
        else if (nums[i] > target)
        {
            return i;
        }
    }
    return numsSize;
}