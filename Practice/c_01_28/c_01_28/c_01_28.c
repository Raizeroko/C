#define _CRT_SECURE_NO_WARNINGS 1

//1609. 奇偶树（参考）
//
#define N 100002
bool isEvenOddTree(struct TreeNode* root) {
    struct TreeNode* queue[N];
    int front = 0;
    int rear = 0;
    int odd = 0;
    int pre;

    queue[rear++] = root;
    while (front != rear) {
        int cnt = rear - front;
        if (odd == 1) pre = INT_MAX;
        if (odd == 0) pre = INT_MIN;
        for (int i = 0; i < cnt; i++) {
            root = queue[front++];
            if ((odd == 1) && (root->val % 2 != 0 || pre <= root->val)) return false;
            if ((odd == 0) && (root->val % 2 != 1 || pre >= root->val)) return false;

            pre = root->val;
            if (root->left) queue[rear++] = root->left;
            if (root->right) queue[rear++] = root->right;
        }
        odd = (odd + 1) % 2;
    }

    return true;
}


//1609. 奇偶树(错）
//
bool _isEvenOddTree(struct TreeNode* root, int flag)
{
    if (root == NULL)
        return true;
    if (root->val % 2 != flag)
        return false;
    return _isEvenOddTree(root->left, flag ^ 1) && _isEvenOddTree(root->right, flag ^ 1);
}


bool isEvenOddTree(struct TreeNode* root) {
    return _isEvenOddTree(root, 1);
}


//1609. 奇偶树（对）
//
#define N 100002

bool isEvenOddTree(struct TreeNode* root) {
    int head = 0;
    int tail = 0;
    int len = 0;
    int tmp = 0;
    int flag = 1;
    //队列
    struct TreeNode* queue[N];
    queue[tail++] = root;

    //层序遍历
    while (head != tail)
    {
        len = tail - head;
        if (flag == 1)
            tmp = INT_MIN;
        if (flag == 0)
            tmp = INT_MAX;
        for (int i = 0; i < len; i++)
        {
            struct TreeNode* cur = queue[head++];
            if ((flag == 1) && (cur->val % 2 != flag || tmp >= cur->val))
                return false;
            if ((flag == 0) && (cur->val % 2 != flag || tmp <= cur->val))
                return false;
            tmp = cur->val;
            if (cur->left)
                queue[tail++] = cur->left;
            if (cur->right)
                queue[tail++] = cur->right;
        }
        flag ^= 1;
    }
    return true;
}

//1122. 数组的相对排序
//
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int cur = 0;
    for (int i = 0; i < arr2Size; i++)
    {
        for (int j = cur; j < arr1Size; j++)
        {
            if (arr1[j] == arr2[i])
            {
                swap(&arr1[cur], &arr1[j]);
                cur++;
            }
        }
    }

    qsort(&arr1[cur], arr1Size - cur, sizeof(int), cmp);
    *returnSize = arr1Size;
    return arr1;
}
