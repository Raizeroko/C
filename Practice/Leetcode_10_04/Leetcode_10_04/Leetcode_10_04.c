#define _CRT_SECURE_NO_WARNINGS 1

//27.移除元素
//
//#include<stdio.h>
//
//int removeElement(int* nums, int numsSize, int val) {
//    int* cur = nums;
//    int* pre = nums;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (*cur == val)
//        {
//            cur++;
//        }
//        else
//        {
//            *pre = *cur;
//            pre++;
//            cur++;
//        }
//    }
//    return pre-nums;
//}
//
//int main()
//{
//    int nums[] = { 3,2,2,3 };
//    int sz = sizeof(nums) / sizeof (nums[0]);
//    sz = removeElement(nums, sz, 3);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d", nums);
//    }
//    return 0;
//}



//88.合并两个有序数组
//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int* cur1 = nums1 + m - 1;
//    int* cur2 = nums2 + n - 1;
//    int* tail = nums1 + m + n - 1;
//    while (cur1 != nums1 - 1 && cur2 != nums2 - 1)
//        if ((*cur1) >= (*cur2))
//        {
//            *tail = *cur1;
//            tail--;
//            cur1--;
//        }
//        else
//        {
//            *tail = *cur2;
//            tail--;
//            cur2--;
//        }
//    if (cur1 == nums1 - 1)
//    {
//        while (cur2 != nums2 - 1)
//        {
//            *tail = *cur2;
//            tail--;
//            cur2--;
//        }
//    }
//
//}
//
//int main()
//{
//    int nums1[6] = {4,5,6,0,0,0};
//    int nums2[3] = {1,2,3};
//    int m = 3;
//    int n = 3;
//    int nums1Size = 3;
//    int nums2Size = 3;
//    merge(nums1, nums1Size, m, nums2, nums2Size, n);
//    return 0;
//}



//面试题17.04.消失的数字
//
int missingNumber(int* nums, int numsSize) {
    int ans = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        ans = ans ^ i ^ nums[i];
    }
    ans ^= i;
    return ans;
}

int main()
{
    int nums[] = { 3,0,1 };
    missingNumber(nums, 3);
    return 0;
}



//189.旋转数组
//
void leftremove(int* left, int* right)
{
    int tmp;
    while (left < right)
    {
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    leftremove(nums, nums + numsSize - k - 1);
    leftremove(nums + numsSize - k, nums + numsSize - 1);
    leftremove(nums, nums + numsSize - 1);
}



//206.反转链表
//
#include<stdio.h>

//*
// * Definition for singly-linked list.
struct ListNode {
     int val;
     struct ListNode *next;
};
 
struct ListNode* reverseList(struct ListNode* head) {

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



//876.链表的中间结点
//
#include<stdio.h>
//*
// * Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 


struct ListNode* middleNode(struct ListNode* head) {
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