#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char* s) {
    int len = strlen(s);
    int len2 = len;
    char* cpy = (char*)malloc(sizeof(char) * len);
    for (int i = 0, j =0; i < len; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            cpy[i] = (char)toupper((int)s[i]);
            j++;
        }
        else
        {
            len2--;
        }
    }
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        if (cpy[left] != cpy[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
	char a[] = "A man, a plan, a canal : Panama";
    isPalindrome(a);
	return 0;
}