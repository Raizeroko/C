#define _CRT_SECURE_NO_WARNINGS 1

//day02
#include<stdio.h>
#include<string.h>
//void fun(char** s)
//{
//	int i;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s", s[i]);
//	}
//}
//
//int main()
//{
//	char* s[6] = { "abcd","efgh","ijkl","mnop","qrst","uvwx" };
//	fun(s);
//	return 0;
//}

int FirstNotRepeatingChar(char* str) {
        int tmp1[26] = { 0 };
        int tmp2[26] = { 0 };
        int len = strlen(str);
    
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                tmp1[str[i] - 'a']++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                tmp2[str[i] - 'A']++;
        }
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z' && tmp1[str[i] - 'a'] == 1)
                return i;
            if (str[i] >= 'A' && str[i] <= 'Z' && tmp1[str[i] - 'A'] == 1)
                return i;
        }
        return -1;
    }

//int FirstNotRepeatingChar(char* str) {
//    int tmp1[26] = { 0 };
//    int tmp2[26] = { 0 };
//    size_t len = strlen(str);
//
//    for (int i = 0; i < len; i++)
//    {
//        if (str[i] >= 'a' && str[i] <= 'z')
//            tmp1[str[i] - 'a']++;
//        else
//            tmp2[str[i] - 'A']++;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        if (tmp1[str[i] - 'a'] == 1 || tmp2[str[i] - 'A'] == 1)
//        {
//            return i;
//        }
//    }
//    return -1;
//}

int main()
{
    char str[] = "lRYdsgSqrlOakFmgyrlOXPqMAdOImyuUvINIWjKlctBYahuImDGXEMIBLvpIlLezXeOMzIVeqnYvH";
    int ret = FirstNotRepeatingChar(str);
    printf("%d", ret);
	return 0;
}

