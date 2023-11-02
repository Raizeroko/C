#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

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
				a[end + gap] = tmp;
			}
		}
	}
	
}




//≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	assert(a);

	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				a[end + 1] = tmp;
				break;
			}
		}
		if(end<0)
			a[end + 1] = tmp;
	}
}

int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(a) / sizeof(a[0]);
	//InsertSort(a, sz);
	ShellSort(a, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
