#define _CRT_SECURE_NO_WARNINGS 1

//700. ¶þ²æËÑË÷Ê÷ÖÐµÄËÑË÷
//
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if (root == NULL)
        return NULL;
    if (root->val == val)
        return root;
    if (root->val > val)
        return searchBST(root->left, val);
    return searchBST(root->right, val);
}