#define _CRT_SECURE_NO_WARNINGS 1

//1171. 从链表中删去总和值为零的连续节点
//
struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode nhead;
    nhead.next = head;
    struct ListNode* cur;
    struct ListNode* tail;
    //nhead->next = head;
    int flag = 0;
    //struct ListNode* ret1;
    for (cur = head; cur != NULL; )
    {
        int sum = 0;
        for (tail = cur; tail != NULL; tail = tail->next)
        {
            sum += tail->val;
            if (sum == 0)
            {
                break;
            }
        }
        if (sum == 0)
        {
            //删除[head,tail]区间的结点
            //1.将区间左闭右开[head,tail)
            tail = tail->next;
            //2.找要删除结点的前一结点
            struct ListNode* tmp = &nhead;
            while (tmp->next != cur)
            {
                tmp = tmp->next;
            }
            //3.删除结点
            while (cur != tail)
            {
                tmp->next = cur->next;
                //free(cur);
                cur = tmp->next;
            }
            //break;
            flag = 1;
        }
        if (flag == 1)
        {
            flag = 0;
        }
        else
        {
            cur = cur->next;
        }
    }
    return nhead.next;
}

//NC21 链表内指定区间反转
//
struct ListNode* ReverseList(struct ListNode* Rhead, struct ListNode* Rtail)
{
    struct ListNode* Rprev = NULL;
    struct ListNode* Rnext = NULL;
    while (Rhead != Rtail)
    {
        Rnext = Rhead->next;
        Rhead->next = Rprev;
        Rprev = Rhead;
        Rhead = Rnext;
    }
    Rhead->next = Rprev;
    return Rhead;
}


struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* next;
    struct ListNode* Rhead = head;
    struct ListNode* Rtail = head;
    int flag = 0;
    if (m == 1)
    {
        flag = 1;
    }
    prev->next = head;
    if (m == n)
    {
        return head;
    }
    while (m != 1)
    {
        Rhead = Rhead->next;
        m--;
    }
    while (n != 1)
    {
        Rtail = Rtail->next;
        n--;
    }
    while (prev->next != Rhead)
    {
        prev = prev->next;
    }
    next = Rtail->next;
    //反转链表
    struct ListNode* tmp = ReverseList(Rhead, Rtail);
    //链接前面
    prev->next = tmp;
    //链接后面
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = next;
    if (flag == 1)
    {
        return prev->next;
    }
    return head;
}

