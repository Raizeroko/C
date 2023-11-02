#define _CRT_SECURE_NO_WARNINGS 1

//709. 转换成小写字母
//
char* toLowerCase(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] |= 32;
    }
    return s;
}

//724. 寻找数组的中心下标(错）
//
int pivotIndex(int* nums, int numsSize) {
    int mid = numsSize / 2;
    int prev = mid;

    while (mid >= 0 && mid <= numsSize - 1)
    {
        int left = 0;
        int right = numsSize - 1;
        int suml = 0;
        int sumr = 0;

        while (left < mid)
        {
            suml += nums[left];
            left++;
        }
        while (right > mid)
        {
            sumr += nums[right];
            right--;
        }
        printf("%d %d ", suml, sumr);
        if (suml == sumr)
        {
            return mid;
        }
        suml = abs(suml);
        sumr = abs(sumr);
        if (suml < sumr)
        {
            mid++;
            if (prev == mid)
            {
                return -1;
            }
            else
            {
                prev = mid - 1;
            }
        }
        else if (suml > sumr)
        {
            mid--;
            //printf("%d", prev);
            if (prev == mid)
            {
                return -1;
            }
            else
            {
                prev = mid + 1;
            }
        }
    }
    return -1;
}

//724. 寻找数组的中心下标
//
int pivotIndex(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }

    for (int i = 0; i < numsSize; i++)
    {
        int mid = 0;
        int j = 0;
        for (j = 0; j < i; j++)
        {
            mid += nums[j];
        }
        printf("%d", mid);
        if (mid * 2 + nums[j] == sum)
        {
            return j;
        }
    }
    return -1;
}


