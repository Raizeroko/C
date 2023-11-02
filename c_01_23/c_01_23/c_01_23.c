#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//面试题 02.05. 链表求和(错）
//
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int i = 0;
    unsigned long long num1 = 0;
    unsigned long long num2 = 0;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    struct ListNode* prev = head;
    while (l1 != NULL)
    {
        num1 += ((l1->val) * (unsigned long long)pow(10, i));
        l1 = l1->next;
        i++;
    }
    i = 0;
    while (l2 != NULL)
    {
        num2 += ((l2->val) * (unsigned long long)pow(10, i));
        l2 = l2->next;
        i++;
    }
    unsigned long long sum = num1 + num2;
    printf("%d %d %d", num1, num2, sum);
    if (num1 == 0 && num2 == 0)
    {
        head->val = 0;
        return head;
    }
    while (sum)
    {
        //printf("%d ", sum);
        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp->next = NULL;
        tmp->val = sum % 10;
        sum /= 10;
        prev->next = tmp;
        prev = prev->next;
        //printf("%d ", prev->val);
    }
    //printf("%d", head->next->val);
    struct ListNode* ret = head->next;
    free(head);
    return ret;
}

int main()
{
	printf("%lld", (unsigned long long)pow(10,11));
	return 0;
}

//面试题 02.05. 链表求和（对）
//
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int carry = 0;
    int a, b;
    struct ListNode head;
    struct ListNode* pre = &head;
    struct ListNode* newNode = NULL;
    while (l1 != NULL || l2 != NULL || carry == 1)
    {
        if (l1 != NULL)
        {
            carry += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            carry += l2->val;
            l2 = l2->next;
        }
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = carry % 10;
        newNode->next = NULL;
        pre->next = newNode;
        pre = newNode;
        carry /= 10;
    }
    return head.next;
}

//1614. 括号的最大嵌套深度
//
int maxDepth(char* s) {
    int max = 0;
    int tmp = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            tmp++;
            max = max > tmp ? max : tmp;
        }
        if (s[i] == ')')
        {
            tmp--;
        }
    }
    return max;
}
