#define _CRT_SECURE_NO_WARNINGS 1


//21.合并两个有序链表
//
#include<stdio.h>

//*
// * Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
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



//141.环形链表
//
#include<stdio.h>
#include<stdbool.h>

//*
// * Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    if (!head)
    {
        return false;
    }
    while (fast)
    {
        fast = fast->next;
        if (!fast)
        {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}



//142.环形链表II
//
#include<stdio.h>

//*
// * Definition for singly-linked list.
 struct ListNode {
    int val;
    struct ListNode *next;
 };
 

struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    if (!head)
    {
        return NULL;
    }

    while (fast)
    {
        fast = fast->next;
        if (!fast)
            return NULL;
        fast = fast->next;
        slow = slow->next;
        if (fast == slow)
        {
            fast = head;
            while (fast != slow)
            {
                fast = fast->next;
                slow = slow->next;

            }
            return fast;
        }
    }
    return NULL;
}
//