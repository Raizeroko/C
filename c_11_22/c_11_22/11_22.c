#define _CRT_SECURE_NO_WARNINGS 1

//217. 存在重复元素
//
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int next = 1;
    int cur = 0;
    while (next < numsSize)
    {
        if (nums[next] == nums[cur])
            return true;
        cur++;
        next++;
    }
    return false;
}

//912. 排序数组
//
//1.希尔排序
void Sort(int* str, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < size - gap; i++)
		{
			int end = i;
			int tmp = str[end + gap];
			while (end >= 0)
			{
				if (tmp < str[end])
				{
					str[end + gap] = str[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			str[end + gap] = tmp;
		}
	}
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, numsSize);
	*zreturnSie = numsSize;
	return nums;
}

//2.堆排
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Adjustdown(int* str, int size, int root)
{
	int child = root * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && str[child + 1] > str[child])
		{
			child++;
		}
		if (str[child] > str[root])
		{
			Swap(&str[child], &str[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void Sort(int* str, int size)
{

	//建堆
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		Adjustdown(str, size, i);
	}
	//排序
	while (size > 1)
	{
		Swap(&str[0], &str[size - 1]);
		size--;
		Adjustdown(str, size, 0);
	}
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, numsSize);
	*zreturnSie = numsSize;
	return nums;
}

//3.快排（Hoare）必须三数取中
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int GetMidIndex(int* str, int left, int right)
{
	int mid = (left + right) / 2;
	int ret = left;
	if (str[ret] < str[mid])
	{
		if (str[ret] > str[right])
			return ret;
		else if (str[mid] < str[right])
			return mid;
		else
			return right;
	}
	else    //str[ret]>str[mid]
	{
		if (str[mid] > str[right])
			return mid;
		else if (str[right] > str[ret])
			return ret;
		else
			return right;
	}
}
int PartSort1(int* str, int left, int right)		//快排Hoare
{
	int mid = GetMidIndex(str, left, right);
	Swap(&str[left], &str[mid]);
	int key = left;
	while (left < right)
	{
		while (left < right && str[right] >= str[key])
		{
			right--;
		}
		while (left < right && str[left] <= str[key])
		{
			left++;
		}
		Swap(&str[left], &str[right]);
	}
	Swap(&str[key], &str[left]);
	return left;
}
void Sort(int* str, int left, int right)
{
	if (left >= right)
		return;
	int mid = PartSort1(str, left, right);
	Sort(str, left, mid - 1);
	Sort(str, mid + 1, right);
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, 0, numsSize - 1);
	*zreturnSie = numsSize;
	return nums;
}

//4.快排(挖坑)必须用三数取中
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int GetMidIndex(int* str, int left, int right)
{
	int mid = (left + right) / 2;
	int ret = left;
	if (str[ret] < str[mid])
	{
		if (str[ret] > str[right])
			return ret;
		else if (str[mid] < str[right])
			return mid;
		else
			return right;
	}
	else    //str[ret]>str[mid]
	{
		if (str[mid] > str[right])
			return mid;
		else if (str[right] > str[ret])
			return ret;
		else
			return right;
	}
}
int PartSort2(int* str, int left, int right)		//快排：挖坑
{
	int mid = GetMidIndex(str, left, right);
	Swap(&str[left], &str[mid]);
	int key = str[left];
	int tmp = str[left];
	while (left < right)
	{
		while (left < right && str[right] >= key)
		{
			right--;
		}
		str[left] = str[right];
		while (left < right && str[left] <= key)
		{
			left++;
		}
		str[right] = str[left];
	}
	str[left] = tmp;
	return left;

}
void Sort(int* str, int left, int right)
{
	if (left >= right)
		return;
	int mid = PartSort2(str, left, right);
	Sort(str, left, mid - 1);
	Sort(str, mid + 1, right);
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, 0, numsSize - 1);
	*zreturnSie = numsSize;
	return nums;
}

//5.快排（前后指针）必须用三数取中
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int GetMidIndex(int* str, int left, int right)
{
	int mid = (left + right) / 2;
	int ret = left;
	if (str[ret] < str[mid])
	{
		if (str[ret] > str[right])
			return ret;
		else if (str[mid] < str[right])
			return mid;
		else
			return right;
	}
	else    //str[ret]>str[mid]
	{
		if (str[mid] > str[right])
			return mid;
		else if (str[right] > str[ret])
			return ret;
		else
			return right;
	}
}
int PartSort3(int* str, int left, int right)		//快排：前后指针
{
	int mid = GetMidIndex(str, left, right);
	Swap(&str[left], &str[mid]);
	int key = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (str[cur] < str[key] && prev++ != cur)
		{
			Swap(&str[cur], &str[prev]);
		}
		cur++;
	}
	Swap(&str[prev], &str[key]);
	return prev;
}
void Sort(int* str, int left, int right)
{
	if (left >= right)
		return;
	int mid = PartSort3(str, left, right);
	Sort(str, left, mid - 1);
	Sort(str, mid + 1, right);
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, 0, numsSize - 1);
	*zreturnSie = numsSize;
	return nums;
}

//6.归并排序（递归）
void _MergeSort(int* str, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_MergeSort(str, left, mid, tmp);
	_MergeSort(str, mid + 1, right, tmp);
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	//printf("[%d %d]", begin1, end1);
	//printf("[%d %d]", begin2, end2);

	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (str[begin1] < str[begin2])
		{
			tmp[i++] = str[begin1++];
		}
		else
		{
			tmp[i++] = str[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = str[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = str[begin2++];
	}
	for (int j = left; j <= right; j++)
	{
		str[j] = tmp[j];
	}
}
void Sort(int* str, int size)
{
	int* tmp = (int*)malloc(size * sizeof(int));
	_MergeSort(str, 0, size - 1, tmp);
	free(tmp);
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, numsSize);
	*zreturnSie = numsSize;
	return nums;
}

//7.归并排序（非递归）
void _MergeSortNonR(int* str, int size, int* tmp)
{
	int gap = 1;
	while (gap < size)
	{
		for (int i = 0; i < size; i = i + 2 * gap)
		{
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + 2 * gap - 1;
			int j = i;
			if (end1 >= size)
			{
				break;
			}
			else if (end2 >= size)
			{
				end2 = size - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (str[begin1] < str[begin2])
				{
					tmp[j++] = str[begin1++];
				}
				else
				{
					tmp[j++] = str[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = str[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = str[begin2++];
			}
		}
		for (int k = 0; k < size; k++)
		{
			str[k] = tmp[k];
		}
		gap *= 2;
	}
}
void Sort(int* str, int size)
{
	int* tmp = (int*)malloc(size * sizeof(int));
	_MergeSortNonR(str, size, tmp);
	free(tmp);
}
int* sortArray(int* nums, int numsSize, int* zreturnSie) {
	Sort(nums, numsSize);
	*zreturnSie = numsSize;
	return nums;
}