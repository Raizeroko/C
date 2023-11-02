#define _CRT_SECURE_NO_WARNINGS 1

//704. ¶þ·Ö²éÕÒ
//
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid = (left + right) / 2;
    while (mid <= right && mid >= left)
    {
        printf("%d %d %d ", left, mid, right);
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    return -1;
}