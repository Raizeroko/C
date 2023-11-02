#define _CRT_SECURE_NO_WARNINGS 1

//617. 合并二叉树
//
struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if (root1 == NULL && root2 == NULL)
        return NULL;
    if (root1 == NULL || root2 == NULL)
    {
        if (root1 == NULL)
            return root2;
        else
            return root1;
    }

    root1->val += root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
}

//628. 三个数的最大乘积
//
int cmp(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}

int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    printf("%d %d %d %d %d", nums[0], nums[1], nums[2], nums[numsSize - 1], nums[numsSize - 2]);
    int max1 = nums[0] * nums[1] * nums[2];
    int max2 = nums[0] * nums[numsSize - 1] * nums[numsSize - 2];
    //if(nums[numsSize - 1] < 0 && nums[numsSize - 2] < 0 && nums[0]>0)
        //int max2 = nums[0]*nums[numsSize - 1]*nums[numsSize -2];

    return max1 > max2 ? max1 : max2;
}

//645. 错误的集合
//
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int* ret = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int tmp = 0;
    int flag = 0;
    int firsti = 0;
    for (int i = 0; i < numsSize; i++)
    {
        tmp = tmp ^ (i + 1) ^ nums[i];
        if (i + 1 != nums[i] && nums[i] > i + 1)
            ret[0] = nums[i];
        else if (flag == 0 && i + 1 != nums[i] && nums[i] < i + 1)
        {
            flag = 1;
            firsti = nums[i];
        }
    }
    if (flag == 1)
    {
        ret[0] = firsti;
    }
    ret[1] = tmp ^ ret[0];
    return ret;
}




