#define _CRT_SECURE_NO_WARNINGS 1

//561. 数组拆分 I
//
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int arrayPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int tmp = 0;
    for (int i = 0; i < numsSize; i += 2)
    {
        tmp += nums[i];
    }
    return tmp;
}

//563. 二叉树的坡度
//
int _findslope(struct TreeNode* root)
{
    if (root == NULL)
        return 0;

    return root->val + _findslope(root->left) + _findslope(root->right);
}

int findslope(struct TreeNode* root)
{
    if (root == NULL)
        return 0;

    return abs(_findslope(root->left) - _findslope(root->right));
}

int findTilt(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    return findslope(root) + findTilt(root->left) + findTilt(root->right);
}

//605. 种花问题
//
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if (flowerbedSize == 1 && flowerbed[0] == 0)
        return true;
    if (flowerbedSize > 1)
    {
        if (flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            n--;
            flowerbed[0] = 1;
        }
        if (flowerbed[flowerbedSize - 1] == 0 && flowerbed[flowerbedSize - 2] == 0)
            n--;
        flowerbed[flowerbedSize - 1] = 1;
    }
    for (int i = 1; i < flowerbedSize - 1; i++)
    {
        if (flowerbed[i] != 1 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
        {
            n--;
            flowerbed[i] = 1;
            printf("%d ", i);
        }
    }
    if (n <= 0)
        return true;
    return false;
}