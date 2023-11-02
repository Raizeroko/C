#define _CRT_SECURE_NO_WARNINGS 1

//138. 复制带随机指针的链表
//
struct Node* copyRandomList(struct Node* head) {        //error1:10_26
    struct Node* cur = head;
    if (head == NULL)
        return NULL;
    while (cur)          //在每个原结点后面插入一个复制结点，复制结点的random为NULL
    {
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->val = cur->val;
        NewNode->next = cur->next;
        NewNode->random = NULL;
        cur->next = NewNode;
        cur = NewNode->next;
    }
    struct Node* OrgHead = head;
    struct Node* Orgtail = head;
    while (Orgtail)
    {
        struct Node* CopyTail = Orgtail->next;
        if (Orgtail->random == NULL)
        {
            CopyTail->random = NULL;
        }
        else
        {
            struct Node* CopyRandom = Orgtail->random;
            CopyTail->random = CopyRandom->next;
        }
        Orgtail = CopyTail->next;
        CopyTail = Orgtail->next;
    }
    struct Node* Copyhead = OrgCur->next;
    struct Node* OrgCur = OrgHead;
    while (OrgCur)
    {
        struct Node* CopyCur = OrgCur->next;
        struct Node* OrgNext = CopyCur->next;
        CopyCur->next = OrgNext->next;
        OrgCur->next = OrgNext;
        OrgCur = OrgNext;
    }
    return CopyHead;
}

struct Node* copyRandomList(struct Node* head) {    //error2:10_26
    if (head == NULL)
        return NULL;
    struct Node* headcur = head;
    while (headcur)
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = headcur->next;
        headcur->next = newnode;
        newnode->random = NULL;
        headcur = newnode->next;
    }
    headcur = head;
    struct Node* copycur = headcur->next;
    while (headcur)
    {
        struct Node* copyrandom = headcur->random;
        if (copyrandom == NULL)
        {
            copycur->random = copyrandom;
        }
        else
        {
            copyrandom = copyrandom->next;
            copycur->random = copyrandom;
        }

    }
    return NULL;
}



struct Node* copyRandomList(struct Node* head) {            //PASS:10_27
    if (head == NULL)
        return NULL;
    struct Node* sorcur = head;
    while (sorcur)
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->random = NULL;
        newnode->val = sorcur->val;

        newnode->next = sorcur->next;
        sorcur->next = newnode;
        sorcur = newnode->next;
    }
    sorcur = head;
    while (sorcur)
    {
        struct Node* copycur = sorcur->next;
        if (sorcur->random == NULL)
        {
            copycur->random = NULL;
        }
        else
        {
            copycur->random = sorcur->random->next;
        }
        sorcur = copycur->next;
    }
    sorcur = head;
    struct Node* copytail = sorcur->next;
    struct Node* copyhead = sorcur->next;
    while (sorcur)
    {
        sorcur->next = copytail->next;
        sorcur = sorcur->next;
        if (sorcur == NULL)
        {
            copytail->next = NULL;
        }
        else
        {
            copytail->next = sorcur->next;
            copytail = copytail->next;
        }
    }
    return copyhead;
}

