#define _CRT_SECURE_NO_WARNINGS 1

//441. 排列硬币
//
int arrangeCoins(int n) {
    if (n == 1)
        return 1;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        n -= i;
    }
    return i - 1;
}

//448. 找到所有数组中消失的数字
//
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* ret = (int*)calloc(numsSize, sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        ++ret[nums[i] - 1];
    }
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (ret[i] == 0)
        {
            ret[*returnSize] = i + 1;
            (*returnSize)++;
        }
    }
    return ret;
}

//461. 汉明距离
//
int hammingDistance(int x, int y) {
    int ret = 0;
    while (x || y)
    {
        int tx = x & 1;
        int ty = y & 1;
        if (tx ^ ty == 1)
            ret++;

        x /= 2;
        y /= 2;
    }
    return ret;
}



