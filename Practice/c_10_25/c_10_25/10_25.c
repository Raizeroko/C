#define _CRT_SECURE_NO_WARNINGS 1

//CM11 链表分割
//

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        ListNode* pHeadSmall = (ListNode*)malloc(sizeof(ListNode));
        ListNode* pHeadBig = (ListNode*)malloc(sizeof(ListNode));

        ListNode* cur = pHead;

        pHeadSmall->next = NULL;
        pHeadBig->next = NULL;

        ListNode* small = pHeadSmall;
        ListNode* big = pHeadBig;

        while (cur)
        {
            if (cur->val < x)
            {
                small->next = cur;
                small = small->next;
            }
            else
            {
                big->next = cur;
                big = big->next;
            }
            cur = cur->next;
        }
        small->next = pHeadBig->next;
        big->next = NULL;
        ListNode* ret = pHeadSmall->next;
        free(pHeadBig);
        free(pHeadSmall);
        return ret;
    }
};



//OR36 链表的回文结构
//
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverse(ListNode* list)
{
    ListNode* prev = NULL;
    ListNode* cur = list;
    ListNode* next = NULL;
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        // write code here
        ListNode* fast = A;
        ListNode* slow = A;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next;
            fast = fast->next;
        }
        ListNode* mid = slow;
        ListNode* cur1 = reverse(mid);
        ListNode* cur2 = A;
        while (cur2 && cur1)
        {
            if (cur1->val != cur2->val)
                return false;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return true;
    }
};



//160. 相交链表
//
struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* curA = headA;
    struct ListNode* curB = headB;
    int lenA = 0;
    int lenB = 0;
    while (curA->next)
    {
        lenA++;
        curA = curA->next;
    }
    while (curB->next)
    {
        lenB++;
        curB = curB->next;
    }
    if (curA != curB)
    {
        return NULL;
    }
    struct ListNode* LongList = headA;
    struct ListNode* ShortList = headB;
    if (lenA < lenB)
    {
        LongList = headB;
        ShortList = headA;
    }
    int gap = abs(lenA - lenB);
    while (gap--)
    {
        LongList = LongList->next;
    }

    while (LongList)
    {
        if (LongList == ShortList)
        {
            return LongList;
        }
        LongList = LongList->next;
        ShortList = ShortList->next;
    }
    return NULL;

}



//141. 环形链表
//
bool hasCycle(struct ListNode* head) {          //10_25
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

struct ListNode {
    int val;
    struct ListNode *next;
};
 
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {

        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;

    }
    return false;
}



//142. 环形链表 II
//
struct ListNode* detectCycle(struct ListNode* head) {       //10_05
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

struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            struct ListNode* meet = fast;
            while (meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    }
    return NULL;
}
