#define _CRT_SECURE_NO_WARNINGS 1

//206. 反转链表
//
#include<stdio.h>

struct ListNode* reverseList(struct ListNode* head) {       //10_04
    struct ListNode* pre = NULL;
    struct ListNode* cur = head;
    struct ListNode* late = NULL;
    while (cur != NULL)
    {
        late = cur->next;
        cur->next = pre;
        pre = cur;
        cur = late;
    }
    return pre;
}

struct ListNode* reverseList(struct ListNode* head) {         //10_21
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        if (next)
            next = next->next;
    }
    return prev;
}



//876. 链表的中间结点
//
struct ListNode* middleNode(struct ListNode* head) {        //10_04
    struct ListNode* half = head;
    struct ListNode* cur = head;
    while (cur != NULL && cur->next != NULL)
    {
        half = half->next;
        cur = cur->next;
        cur = cur->next;
    }
    return half;

}

struct ListNode* middleNode(struct ListNode* head) {        //10_21
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast)
    {
        fast = fast->next;
        if (!fast)
            return slow;
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}



//链表中倒数第k个结点
//
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    // write code here

    int tmp = 0;

    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;
    while (fast)
    {
        if (tmp < k)
        {
            tmp++;
            fast = fast->next;
        }
        else
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    if (tmp != k)
        return NULL;
    return slow;

}



//21. 合并两个有序链表
//
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {      //10_05
    struct ListNode* cur;
    if (!l1 && !l2)
    {
        return NULL;
    }
    struct ListNode* headnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    cur = headnode;
    while (l1 && l2)
    {
        if (l1->val <= l2->val)
        {
            cur->next = l1;
            cur = cur->next;
            l1 = l1->next;
        }
        else
        {
            cur->next = l2;
            cur = cur->next;
            l2 = l2->next;
        }
    }
    while (l1)
    {
        cur->next = l1;
        cur = cur->next;
        l1 = l1->next;
    }
    while (l2)
    {
        cur->next = l2;
        cur = cur->next;
        l2 = l2->next;
    }
    cur = headnode->next;
    free(headnode);
    headnode = NULL;
    return cur;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {      //10_21
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    if (!l1)
    {
        return l2;
    }
    if (!l2)
    {
        return l1;
    }
    if (l1->val < l2->val)
    {
        head = l1;
        l1 = l1->next;
    }
    else
    {
        head = l2;
        l2 = l2->next;
    }
    tail = head;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            tail = tail->next;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            tail = tail->next;
            l2 = l2->next;
        }
    }
    if (l1)
    {
        tail->next = l1;
    }
    if (l2)
    {
        tail->next = l2;
    }
    return head;
}

