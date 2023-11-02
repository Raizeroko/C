#define _CRT_SECURE_NO_WARNINGS 1


//203. 移除链表元素
//
#include<stdio.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
 };
 
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    while (cur)
    {
        if (cur->val == val)    //当为需要删除的值    
        {
            if (cur == head)    //头删
            {
                head = head->next;
                free(cur);
                cur = head;
            }           
            else                //中间删
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else                    //不为需要删除的值
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}



//14. 最长公共前缀
//
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
    {
        return "";
    }
    char* str = (char*)calloc(128, sizeof(char));
    for (int i = 0, j; i < strlen(*strs); i++)
    {
        for (j = 0; j < strsSize - 1; j++)
        {
            if (strs[j][i] != strs[j + 1][i])
            {
                return str;
            }
        }
        str[i] = strs[j][i];
    }
    return str;
}