#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>

void GetNext(char* needle, int* Next)
{
    int NEsize = strlen(needle);
    if (NEsize >= 1)
        Next[0] = -1;
    if (NEsize >= 2)
        Next[1] = 0;


    int prev = 1;
    int cur = prev + 1;

    int k = 0;                //最新已知k值


    while (cur < NEsize)
    {
        if (k == -1 || needle[cur - 1] == needle[k])
        {
            Next[cur] = k + 1;
            k++;
            cur++;
        }
        else
        {
            k = Next[k];
        }
    }
}

int strStr(char* haystack, char* needle) {
    if (haystack == NULL || needle == NULL)
        return 0;

    int HKsize = strlen(haystack);
    int NEsize = strlen(needle);


    if ((HKsize == 0 && NEsize == 0) || (HKsize != 0 && NEsize == 0))
    {
        return 0;
    }
    if (HKsize == 0)
    {
        return -1;
    }


    int* Next = (int*)malloc(NEsize * sizeof(int));
    GetNext(needle, Next);

    int HKcur = 0;
    int NEcur = 0;
    while (HKcur < HKsize && NEcur < NEsize)
    {
        if (NEcur == -1 || haystack[HKcur] == needle[NEcur])
        {
            HKcur++;
            NEcur++;
        }
        else
        {
            NEcur = Next[NEcur];
        }
    }

    if (NEcur >= NEsize)
    {
        free(Next);
        return HKcur - NEcur;
    }
    free(Next);
    return -1;
}

//int KMP(char* arr1, char* arr2)
//{
//    int i = 0;											//不需要记录匹配的首位置，
//    int j = 0;                                          //因为kmp算法i不需要回溯
//
//    int len1 = strlen(arr1);
//    int len2 = strlen(arr2);
//
//    int* Next = (int*)malloc(len2 * sizeof(int));       //为Next数组开辟一个与子串一样长的 
//                                                        //空间
//
//    GetNext(Next, arr2);                                //借用Next函数得到Next数组的内容
//
//    if (len1 == 0 && len2 == 0 || len2 == 0) return 0;	//当arr1与arr2都为空或arr1为空时直 
//                                                        //接返回
//
//    else if (len1 == 0 || len2 > len1) return -1;		//当arr1为空或者第二个字符串比第一 
//                                                        //个字符串长
//
//    while (i < len1 && j < len2)						//当arr1和arr2都没走到尽头
//    {
//        if (arr1[i] == arr2[j])
//        {
//            i++;
//            j++;
//        }
//        else
//        {
//            j = Next[j];						        //当主串与子串不同时j回溯到 
//                                                        //Next[j]，i不用回溯
//        }
//    }
//    if (j >= len2)
//        return i - j;							        //如果子串走到尽头，代表找到了返回 
//                                                        //开始匹配时的位置
//    return -1;											//否则就是主串走到尽头，代表没找到
//}


int main()
{
    char a[] = "hello";
    char b[] = "ll";
    int ret = strStr(a, b);
    printf("%d", ret);
    return 0;
}
    