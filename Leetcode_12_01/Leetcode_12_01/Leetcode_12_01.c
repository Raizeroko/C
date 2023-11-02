#define _CRT_SECURE_NO_WARNINGS 1

//389. 找不同
char findTheDifference(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    char tmp = 0;
    int i;
    for (i = 0; i < len1 && i < len2; i++)
    {
        tmp = tmp ^ s[i] ^ t[i];
    }
    if (i != len1)
    {
        tmp ^= s[i];
    }
    else
    {
        tmp ^= t[i];
    }
    return tmp;
}

//392. 判断子序列
//
bool isSubsequence(char* s, char* t) {
    char* cur1 = s;
    char* cur2 = t;
    while (*cur1 != '\0' && *cur2 != '\0')
    {
        if (*cur1 == *cur2)
            cur1++;

        cur2++;
    }
    if (*cur1 == '\0')
        return true;
    return false;
}

//404. 左叶子之和
//
int _sumOfLeftLeaves(struct TreeNode* root, int pos) {

    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL && pos == 0)
        return root->val;
    return _sumOfLeftLeaves(root->left, 0) + _sumOfLeftLeaves(root->right, 1);
}

int sumOfLeftLeaves(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    return _sumOfLeftLeaves(root, 0);
}

//405. 数字转换为十六进制数
//
void reverse(char* str)
{
    int len = strlen(str);

    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}

char* toHex(int num) {
    unsigned int _num = num;
    char Hexadecimal[] = "0123456789abcdef";
    char* ret = (char*)calloc(9, sizeof(char));
    if (_num == 0)
    {
        ret[0] = '0';
        return ret;
    }
    int i = 0;
    while (_num)
    {
        int tmp = _num % 16;
        ret[i] = Hexadecimal[tmp];
        i++;
        _num /= 16;
    }
    reverse(ret);
    return ret;
}

//409. 最长回文串(未过，通过测试用力48/95)
//
int cmp(const void* a, const void* b)
{
    return *(char*)b - *(char*)a;
}

int longestPalindrome(char* s) {
    int len = strlen(s);
    qsort(s, len - 1, sizeof(char), cmp);
    int ret = 0;
    for (int i = 0; i < len - 1;)
    {
        if (s[i] == s[i + 1])
        {
            i += 2;
            ret += 2;
        }
        else
        {
            i++;
        }
    }
    if (len > 2 || len == 1)
        return ret + 1;
    else
        return ret;
}


