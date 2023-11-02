#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

void my_strtok(char* arr, const char* sep)
{
	char* str = NULL;
	str = strtok(arr, sep);
	if (str != NULL)
	{
		str = strtok(str, sep);
		my_strtok(str,sep);
	}
	else printf("%s ", str);
}
int main()
{
	/*int len = 0;
	int i;
	char tmp[80];
	char arr[80];
	gets(arr);
	len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		arr[i];
	}*/


	const char* sep = " ";
	char arr[80] = {0};
	gets(arr);
	my_strtok(arr, sep);

}