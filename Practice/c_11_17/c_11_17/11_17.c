#define _CRT_SECURE_NO_WARNINGS 1

//KY11 二叉树遍历
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef char BTDataType;

typedef struct BTNode {
	char val;
	struct BTNode* left;
	struct BTNode* right;
}BTNode;

BTNode* BinaryTreeCreat(BTDataType* src, int size, int* pi)
{
	assert(src);
	assert(size > 0);
	if (src[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	if (root == NULL)
		return NULL;
	root->val = src[(*pi)++];
	root->left = BinaryTreeCreat(src, size, pi);
	root->right = BinaryTreeCreat(src, size, pi);
	return root;
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->left);
	printf("%c ", root->val);
	BinaryTreeInOrder(root->right);
}

void BinaryTreeDestroy(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeDestroy(root->left);
	BinaryTreeDestroy(root->right);
	free(root);

}

int main()
{
	char src[100] = { 0 };
	gets(src);
	int size = strlen(src);
	int i = 0;
	BTNode* root = BinaryTreeCreat(src, size, &i);
	BinaryTreeInOrder(root);
	BinaryTreeDestroy(root);
	root = NULL;
}


//110. 平衡二叉树
//
int BinaryTreeLevel(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	int left = BinaryTreeLevel(root->left);
	int right = BinaryTreeLevel(root->right);
	return left > right ? left + 1 : right + 1;
}

bool isBalanced(struct TreeNode* root) {
	if (root == NULL)
		return true;

	int leftlevel = BinaryTreeLevel(root->left);
	int rightlevel = BinaryTreeLevel(root->right);

	if (abs(leftlevel - rightlevel) > 1)
		return false;

	return isBalanced(root->left) && isBalanced(root->right);

}


//572. 另一棵树的子树
//
bool isSameTree(struct TreeNode* root, struct TreeNode* subRoot)
{
	if (root == NULL && subRoot == NULL)
		return true;
	if (root == NULL || subRoot == NULL)
		return false;
	if (root->val != subRoot->val)
		return false;
	return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
	if (root == NULL)
		return false;
	if (isSameTree(root, subRoot))
		return true;

	return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

}


//101. 对称二叉树
//
bool _isSymmetric(struct TreeNode* left, struct TreeNode* right)
{
	if (left == NULL && right == NULL)
		return true;
	if (left == NULL || right == NULL)
		return false;
	if (left->val != right->val)
		return false;
	return _isSymmetric(left->left, right->right) && _isSymmetric(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
	if (root == NULL)
		return true;
	return _isSymmetric(root->left, root->right);
}


