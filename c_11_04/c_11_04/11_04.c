#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void StrPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end+1] = tmp;
	}

}
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void SelectSort(int* a, int n)
{
	int min = 0;
	int max = n-1;
	int left = 0;
	int right = n-1;
	while (left < right)
	{
		for (int i = left; i <= right; i++)
		{
			if (a[i] > a[max])
			{
				max = i;
			}
			if (a[i] < a[min])
			{
				min = i;
			}
		}
		Swap(&a[left], &a[min]);
		if (max == left)
		{
			Swap(&a[right], &a[min]);
		}
		else
		{
			Swap(&a[right], &a[max]);
		}
		left++;
		right--;
	}
}

void AdjustDown(int* a, int parent, int size)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (a[child + 1] > a[child] && child+1<size)
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void BuildHeap(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
}
void HeapSort(int* a, int n)
{
	//ÅÅÉýÐò£¬½¨´ó¶Ñ
	//½¨¶Ñ
	BuildHeap(a, n);
	int end = n - 1;
	while (end >= 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a,0, end);
		end--;
	}
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				Swap(&a[j - 1], &a[j]);
			}
		}
	}
}

void HoareSort(int* a, int begin,int end)
{
	if (begin > end)
	{
		return;
	}
	int left = begin;
	int right = end;
	int keyi = begin;
	while (left < right)
	{
		while (left<right && a[right] >= a[keyi])
		{
			right--;
		}
		while (left<right && a[left] <= a[keyi])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);

	HoareSort(a,begin, left-1);
	HoareSort(a, left + 1, end);
}

void DigHoleSort(int* a, int begin, int end)
{
	if (begin > end)
	{
		return;
	}
	int left = begin;
	int right = end;
	int key = a[begin];
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[left] = a[right];
	
		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = key;
	DigHoleSort(a, begin, left - 1);
	DigHoleSort(a, left + 1, end);
}

int main()
{
	//int a[] = { 8,8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8,-8 };
	int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	int sz = sizeof(a) / sizeof(a[0]);
	//InsertSort(a, sz);
	//ShellSort(a, sz);
	//SelectSort(a, sz);
	//HeapSort(a, sz);
	//BubbleSort(a, sz);
	//HoareSort(a,0, sz-1);
	DigHoleSort(a, 0, sz - 1);
	StrPrint(a,sz);
	return 0;
}