#define _CRT_SECURE_NO_WARNINGS 1

//NC4 判断链表中是否有环
//
#include <stdbool.h>
#include<stdio.h>

struct ListNode {
    int val;
	struct ListNode *next;
 };

bool hasCycle(struct ListNode* head)
{
    struct ListNode* fast = head->next;
    struct ListNode* slow = head;
    if (fast == NULL || slow == NULL)    //排除链表为空，或链表只有一个元素且不带环
        return false;
    while (fast->next)
    {
        if (fast == slow)
            return true;
        else {
            fast = fast->next;
            if (fast->next == NULL)
                return false;
            fast = fast->next;
            slow = slow->next;
        }
    }
    return false;
}



//NC7 买卖股票的最好时机
//
void merge(int* A, int ALen, int m, int* B, int BLen, int n) {
    int* tail = A + ALen + BLen - 1;
    int* cura = A + ALen - 1;
    int* curb = B + BLen - 1;
    while (cura != A - 1 && curb != B - 1)
    {
        if (*cura > *curb)
        {
            *tail = *cura;
            tail--;
            cura--;
        }
        else
        {
            *tail = *curb;
            tail--;
            curb--;
        }
    }
    while (curb != B - 1)
    {
        *tail = *curb;
        tail--;
        curb--;
    }
}



//NC65 斐波那契数列
//
int Fibonacci(int n) {
    int i;
    int fib[40];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for (i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}



//NC101 缺失数字
//
int solve(int* a, int aLen) {
    int ret = 0;
    int i;
    for (i = 0; i < aLen; i++)
    {
        ret ^= a[i] ^ i;
    }
    ret ^= i;
    return ret;
}



//NC103 反转字符串
//
char* solve(char* str) {
    // write code here
    int len = strlen(str);
    static char res[1000] = { 0 };
    char* ans = res;
    for (int i = len - 1; i >= 0; i--)
    {
        sprintf(ans, "%c", str[i]);
        ans++;
    }
    return res;
}



//NC107 寻找峰值(最后)
//
int solve(int* a, int aLen) {
    int ret = -1;
    int cur = 1;
    int next = 2;
    int prev = 0;
    if (prev == 0 && a[cur] > a[next])
        ret = prev;
    if (aLen < 2)
        return -1;
    while (next < aLen)
    {

        if (a[prev] <a[cur] && a[cur] > a[next])
        {
            ret = cur;
        }
        prev++;
        cur++;
        next++;
    }
    if (next == aLen && a[cur] > a[prev])
    {
        ret = cur;
    }

    return ret;
}



//NC110 旋转数组
//
int* solve(int n, int m, int* a, int aLen, int* returnSize) {
    int* p = (int*)malloc(sizeof(int) * n);
    int* temp = (int*)malloc(sizeof(int) * n);
    int i = 0, j = 0;
    *returnSize = n;
    if (m > n) {
        m = m % n;
    }
    for (i = 0; i < m; i++) {
        temp[i] = a[n - m + i];
    }
    for (j = 0; j < n - m; j++) {
        p[j + m] = a[j];
    }
    for (j = 0; j < m; j++) {
        p[j] = temp[j];
    }

    return p;
}



//NC141 判断回文
//
bool judge(char* str) {
    // write code here
    int len = strlen(str);
    char* head = str;
    char* tail = str + len - 1;
    while (head < tail)
    {
        if (*head != *tail)
            return false;
        head++;
        tail--;
    }
    return true;
}



//NC696 喝酒
//
int countWine(int m, int n) {
    int x = n / m;
    int i = x / 2;
    int j = x % 2;

    int p = x / 4;
    int q = x % 4;

    int sum = x + i + p;
    while (i > 0 || p > 0)
    {
        int temp1 = i;
        int temp2 = p;
        i = (i + j + temp2) / 2;
        j = (temp1 + j + temp2) % 2;

        p = (p + q + temp1) / 4;
        q = (temp2 + q + temp1) % 4;

        sum += i + p;
    }
    return sum;

}