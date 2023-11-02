#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void right_move(int *ps, int m, int n)
{
	int left = 0;
	int right = m - n - 1;
	int tmp = 0;
	int i = 0;
	for(i = 0 ;	left < right;left++,right--)
	{
		tmp = *(ps + left);
		*(ps + left) = *(ps + right);
		*(ps + right) = tmp;
	}
	left = m - n;
	right = m - 1;
	for (i = 0; left < right; left++, right--)
	{
		tmp = *(ps + left);
		*(ps + left) = *(ps + right);
		*(ps + right) = tmp;
	}
	left = 0;
	right = m - 1;
	for (i = 0; left < right; left++, right--)
	{
		tmp = *(ps + left);
		*(ps + left) = *(ps + right);
		*(ps + right) = tmp;
	}
}

int main()
{
	int m;
	int n;
	int i;
	int arr[100];
	
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (m < n)
		n = n % m;
	right_move(arr,m,n);
	printf("%d", arr[0]);

	for (i = 0; i < m-1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}