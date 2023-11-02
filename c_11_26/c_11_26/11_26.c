#define _CRT_SECURE_NO_WARNINGS 1

//69. Sqrt(x)
//
int mySqrt(int x) {
    if (x == 1)
        return 1;
    int left = 0;
    int right = x;
    while (right - left > 1)
    {
        int mid = (left + right) / 2;
        if (x / mid < mid)
            right = mid;
        else
            left = mid;
    }
    return left;
}


//70. 爬楼梯
//
int climbStairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    int prev1 = 1;
    int prev2 = 2;
    int cur = 3;
    for (int i = 3; i <= n; i++)
    {
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }
    return cur;
}


//83. 删除排序链表中的重复元素
//
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* next = head;
    if (head == NULL)
        return head;
    while (cur->next)
    {
        if (cur->val == cur->next->val)
        {
            next = cur->next->next;
            free(cur->next);
            cur->next = next;
        }
        else
        {
            cur = cur->next;
        }

    }
    return head;
}

//111. 二叉树的最小深度
//
int minDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right != NULL)
        return minDepth(root->right) + 1;
    else if (root->right == NULL && root->left != NULL)
        return minDepth(root->left) + 1;
    else
    {
        int LeftDepth = minDepth(root->left) + 1;
        int RightDepth = minDepth(root->right) + 1;
        return LeftDepth < RightDepth ? LeftDepth : RightDepth;
    }
}

//112. 路径总和
//
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL)
        return false;
    targetSum -= root->val;
    if (targetSum == 0 && root->left == NULL && root->right == NULL)
        return true;

    return hasPathSum(root->left, targetSum) ||
        hasPathSum(root->right, targetSum);
}

//118. 杨辉三角
//
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    int** a = malloc(sizeof(int*) * numRows);
    //int a[numRows+1][numRows+1];
    *returnSize = numRows;
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++) {
        a[i] = malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        a[i][0] = a[i][i] = 1;
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    return a;
}

//125. 验证回文串(isalnum函数学习)
//
bool isPalindrome(char* s) {
    if (strlen(s) == 1) return 1;

    int l = 0;
    int r = strlen(s) - 1;
    while (l <= r) {
        while (l < r && !isalnum(s[l]))
            l++;
        while (l < r && !isalnum(s[r]))
            r--;

        if (tolower(s[l]) != tolower(s[r]))
            return false;
        l++;
        r--;
    }
    return true;
}

//155. 最小栈
//
typedef struct {
    int* data;
    int top;
    int capacity;
    int min;
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack = (MinStack*)malloc(sizeof(MinStack));
    stack->data = (int*)malloc(sizeof(int) * 2);
    stack->top = 0;
    stack->capacity = 2;
    stack->min = 0;
    return stack;
}

void minStackPush(MinStack* obj, int val) {

    if (obj->top == obj->capacity)
    {
        int newcapacity = obj->capacity * 2;
        int* newdata = (int*)realloc(obj->data, sizeof(int) * newcapacity);
        if (newdata)
        {
            obj->capacity = newcapacity;
            obj->data = newdata;
        }
    }
    obj->data[obj->top] = val;
    if (val < obj->data[obj->min])
    {
        obj->min = obj->top;
    }
    obj->top++;
}

void minStackPop(MinStack* obj) {
    obj->top--;
    int min = 0;

    for (int i = 0; i < obj->top; i++)
    {
        if (obj->data[min] > obj->data[i])
            min = i;
    }
    obj->min = min;
}

int minStackTop(MinStack* obj) {
    assert(obj->top != 0);
    return obj->data[obj->top - 1];
}

int minStackGetMin(MinStack* obj) {
    assert(obj->top != 0);

    return obj->data[obj->min];
}

void minStackFree(MinStack* obj) {
    free(obj->data);
    obj->min = 0;
    obj->top = 0;
    obj->capacity = 0;
    free(obj);

}