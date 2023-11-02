#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int main()
{
	char a[100];
	gets(a);
	char* p = a;
	while (*p)
	{
		if (*p == ' ')
		{
			printf("%%20");
		}
		else
		{
			printf("%c", *p);
		}
		p++;
	}
	return 0;
}