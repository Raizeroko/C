#define _CRT_SECURE_NO_WARNINGS 1

//1022. 从根到叶的二进制数之和
//
int _sumRootToLeaf(struct TreeNode* root, int tmp)
{
    int sum = 0;
    tmp = (tmp << 1) + root->val;
    if (root->left == NULL && root->right == NULL)
        return tmp;
    if (root->left)
        sum += _sumRootToLeaf(root->left, tmp);
    if (root->right)
        sum += _sumRootToLeaf(root->right, tmp);

    return sum;
}

int sumRootToLeaf(struct TreeNode* root) {
    if (root == NULL)
        return;
    return _sumRootToLeaf(root, 0);
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