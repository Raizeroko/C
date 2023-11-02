#define _CRT_SECURE_NO_WARNINGS 1

//33. 搜索旋转排序数组
//
int search(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
            return i;
    }
    return -1;
}

//1290. 二进制链表转整数
//
int getDecimalValue(struct ListNode* head) {
    struct ListNode* cur = head;
    int len = 0;
    while (cur != NULL)
    {
        len++;
        cur = cur->next;
    }
    cur = head;
    int ret = 0;
    while (cur != NULL)
    {
        ret += ((cur->val) * pow(2, len - 1));
        len--;
        cur = cur->next;
    }
    return ret;
}
