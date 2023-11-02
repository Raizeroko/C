#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int i = 2;
	if (x < 2)
		return 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	//int input;
	//int a=0;
	//scanf("%d", &input);
	//a = is_prime(input);
	//if (a==1)
	//{
	//	printf("sushu");
	//}
	//else
	//{
	//	printf("bushisushu");
	//}
	 
	int input;
	int a=0;
	int i;
	int s=2;
	int count = 0;
	scanf("%d", &input);
	for (i = 3; i <= input; i++)
	{
		a = is_prime(i);
		if (a == 1)
		{
			if (i - s == 2)
			{
				count++;
			}
			s = i;
		}
	}
	printf("%d", count);

	return 0;
}
//