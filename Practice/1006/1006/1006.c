#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int main()
{
	int input;
	int arr[3];
	int i;
	int j;
	scanf("%d", &input);
	for (i = 0; i < 3; i++)
	{
		arr[i] = input % 10;
		input = input / 10;
	}
	for (i; i > 0; i--)
	{
		if (i == 2)
		{
			for (j = 0; j < arr[i]; j++)
			{
				printf("B");

			}
		}
		else if (i == 1)
		{
			for (j = 0; j < arr[i]; j++)
			{
				printf("S");
			}
		}
	}
	for (i = 0; i < arr[0]; i++)
	{
		printf("%d", i + 1);
	}
	return 0;
}