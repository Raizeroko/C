#define _CRT_SECURE_NO_WARNINGS 1

//234. 回文链表
//
struct ListNode* FindMid(struct ListNode* head)
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

struct ListNode* Reverse(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* next = cur->next;
    struct ListNode* prev = head;
    cur->next = NULL;
    while (next)
    {
        prev = cur;
        cur = next;
        next = next->next;
        cur->next = prev;
    }
    return cur;
}

bool isPalindrome(struct ListNode* head) {
    //找中
    struct ListNode* mid = FindMid(head);
    //反转链表
    struct ListNode* cur2 = Reverse(mid);
    //判断回文
    struct ListNode* cur1 = head;
    while (cur1 && cur2)
    {
        if (cur1->val != cur2->val)
        {
            return false;
        }
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    return true;
}

//235. 二叉搜索树的最近公共祖先
//
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL)
        return NULL;
    if (root->val > p->val && root->val > q->val)
        return lowestCommonAncestor(root->left, p, q);
    if (root->val < p->val && root->val < q->val)
        return lowestCommonAncestor(root->right, p, q);
    return root;
}

//237. 删除链表中的节点
//
void deleteNode(struct ListNode* node) {
    struct ListNode* next = node->next;
    node->val = next->val;
    node->next = next->next;
    free(next);
}

//242. 有效的字母异位词
//
void count(char* str, int* count)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        count[(str[i] - 'a')]++;
    }
}

bool isAnagram(char* s, char* t) {
    //计数
    int* scount = (int*)malloc(sizeof(int) * 26);
    int* tcount = (int*)malloc(sizeof(int) * 26);
    count(s, scount);
    count(t, tcount);
    for (int i = 0; i < 26; i++)
    {
        if (scount[i] != tcount[i])
            return false;
    }
    return true;
}

//258. 各位相加
//
int addDigits(int num) {

    int tmp = num;
    while (tmp >= 10)
    {
        //各位相加
        num = tmp;
        tmp = 0;
        while (num > 0)
        {
            tmp = tmp + num % 10;
            num /= 10;
        }
    }
    return tmp;
}

//263. 丑数
//
bool isUgly(int n) {
    if (n == 0)
        return false;
    if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n != 1)
        return false;
    if (n % 2 == 0)
        return isUgly(n / 2);
    if (n % 3 == 0)
        return isUgly(n / 3);
    if (n % 5 == 0)
        return isUgly(n / 5);
    return n == 1 ? true : false;
}

//268. 丢失的数字
//
int missingNumber(int* nums, int numsSize) {
    int tmp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        tmp = tmp ^ nums[i] ^ i;
    }
    return tmp ^ numsSize;
}

//278. 第一个错误的版本
//
int firstBadVersion(int n) {
    long int right = n;
    long int left = 1;
    long int mid = (left + right) / 2;

    while (right - left > 1)
    {
        if (!isBadVersion(mid))
            left = mid;
        else
            right = mid;

        mid = (left + right) / 2;
    }
    if (isBadVersion(left))
        return left;
    return right;
}

//283. 移动零
//
void moveZeroes(int* nums, int numsSize) {
    int i = 0, j = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j++] = nums[i];
        }
    }
    while (j < numsSize)
    {
        nums[j++] = 0;
    }
}

//292. Nim 游戏
// 
bool canWinNim(int n) {
    if (n % 4 == 0)
        return false;
    else
        return true;
}

//326. 3的幂
//
bool isPowerOfThree(int n) {
    while (n > 1)
    {
        if (n % 3 != 0)
            return false;
        n /= 3;
    }
    if (n == 1)
        return true;
    else
        return false;
}

//344. 反转字符串
//
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right)
    {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

//345. 反转字符串中的元音字母
//
char* reverseVowels(char* s) {
    int i = 0, j = strlen(s) - 1;
    char* match = "aeiouAEIOU";


    while (i < j) {
        while (i < j && strchr(match, s[i]) == NULL)
            i++;
        while (i < j && strchr(match, s[j]) == NULL)
            j--;

        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
    return s;
}

//367. 有效的完全平方数
//
bool isPerfectSquare(int num) {
    if (num == 1)
        return true;
    int tmp = num;
    for (long int i = 0; i < tmp / 2; i++)
    {
        num = num - (i * 2 + 1);
        if (num == 0)
            return true;
    }
    return false;
}

//374. 猜数字大小
//
int left = 1;
long int right = n;
long int mid = (left + right) / 2;
while (right - left > 1)
{
    if (guess(mid) == 0)
        return mid;
    else if (guess(mid) == -1)
        right = mid;
    else
        left = mid;
    mid = (right + left) / 2;
}
if (guess(left) == 0)
return left;
else
return right;
}

//383. 赎金信
//
bool canConstruct(char* ransomNote, char* magazine) {
    int a[26];
    int b[26];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for (int i = 0; ransomNote[i]; i++) {
        a[ransomNote[i] - 'a']++;
    }
    for (int j = 0; magazine[j]; j++) {
        b[magazine[j] - 'a']++;
    }
    int k = 0;
    for (; k < 26;) {
        if (a[k] > b[k])
            break;
        k++;
    }
    if (k == 26)   return true;
    else return false;
}

//387. 字符串中的第一个唯一字符
//
int firstUniqChar(char* s) {
    int len = strlen(s);
    int i = 0;
    if (len == 0)
        return -1;

    int table[26] = { 0 };
    for (i = 0; i < len; i++)
        table[s[i] - 'a']++;

    for (i = 0; i < len; i++) {
        if (table[s[i] - 'a'] == 1)
            return i;
    }

    return -1;
}