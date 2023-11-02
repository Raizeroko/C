#define _CRT_SECURE_NO_WARNINGS 1


//189. 旋转数组
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



//189.旋转数组_10_13
//
void exchange(int* left, int* right)         //交换函数
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
    exchange(nums + numsSize - k, nums + numsSize - 1); //后k个数交换
    exchange(nums, nums + numsSize - k - 1);            //前numsSize-k个数交换
    exchange(nums, nums + numsSize - 1);                //整个数组交换
}



//88. 合并两个有序数组
//
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* cur1 = nums1 + m - 1;
    int* cur2 = nums2 + n - 1;
    int* tail = nums1 + m + n - 1;
    while (cur1 != nums1 - 1 && cur2 != nums2 - 1)
        if ((*cur1) >= (*cur2))
        {
            *tail = *cur1;
            tail--;
            cur1--;
        }
        else
        {
            *tail = *cur2;
            tail--;
            cur2--;
        }
    if (cur1 == nums1 - 1)
    {
        while (cur2 != nums2 - 1)
        {
            *tail = *cur2;
            tail--;
            cur2--;
        }
    }
}


//88. 合并两个有序数组_10_13
//
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    //核心从后向前拷贝，避免数据的移动导致的时间复杂度增加
    int* cur1 = nums1 + m - 1;          //指向nums1已存数据的尾部
    int* cur2 = nums2 + n - 1;          //指向nums2的尾部
    int* tail = nums1 + m + n - 1;      //指向nums1的尾部
    while (cur1 != nums1 - 1 && cur2 != nums2 - 1)  //当cur1和cur2都没走到其数组头部
    {
        if (*cur1 > *cur2)          //当*cur1>*cur2将*cur1拷贝到nums1尾部
        {
            *tail = *cur1;
            cur1--;
            tail--;
        }
        else                        //当*cur1<*cur2将*cur2拷贝到nums1尾部
        {
            *tail = *cur2;
            cur2--;
            tail--;
        }
    }
    while (cur2 != nums2 - 1)       //当cur2没走到头，证明还没有将nums2的内容
    {                               //全拷贝到nums1中，还需要继续拷贝
        *tail = *cur2;
        cur2--;
        tail--;
    }
}



//26. 删除有序数组中的重复项_10_13
//
int removeDuplicates(int* nums, int numsSize) {
    //核心：通过双指针实现原地拷贝以及时间复杂度为O(n)
    int* dest = nums;
    int* sroc = nums;
    if (numsSize == 0)                  //如果数组为空返回0
        return 0;
    while (sroc < nums + numsSize)      //当sroc指向数组外跳出
    {
        if (*dest != *sroc)             //如果*dest与*sroc不等
        {
            dest++;                     //dest指向下一位 
            *dest = *sroc;              //sroc的内容给dest
            sroc++;                     //sroc指向下一位
        }
        else
        {
            sroc++;                     //如果*dest与*sroc相等，sroc指向下一位
        }
    }
    return dest - nums + 1;
}



//27. 移除元素
//
int removeElement(int* nums, int numsSize, int val) {
    int* cur = nums;
    int* pre = nums;
    for (int i = 0; i < numsSize; i++)
    {
        if (*cur == val)
        {
            cur++;
        }
        else
        {
            *pre = *cur;
            pre++;
            cur++;
        }
    }
    return pre - nums;
}



//27. 移除元素
//
int removeElement(int* nums, int numsSize, int val) {
    //核心：通过双指针实现原地删除
    int* dest = nums;
    int* sroc = nums;
    while (sroc < nums + numsSize)      //当sroc指向数组外跳出
    {
        if (*sroc != val)               //如果*sroc与val不等
        {
            *dest = *sroc;              //将sroc内容拷贝到dest中
            dest++;                     //dest指向下一位
            sroc++;                     //sroc指向下一位
        }
        else
        {
            sroc++;                     //如果*sroc与val相等跳过该数
        }
    }
    return dest - nums;                 //返回dest与sroc指针差
}
