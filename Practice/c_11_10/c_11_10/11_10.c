#define _CRT_SECURE_NO_WARNINGS 1

//104. 二叉树的最大深度
//
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    int leftdepth = maxDepth(root->left);
    int rightdepth = maxDepth(root->right);
    return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
}
//