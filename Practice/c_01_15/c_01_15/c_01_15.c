#define _CRT_SECURE_NO_WARNINGS 1

//OR135 单词缩写
#include<stdio.h>
#include<string.h>

//void AbbWords(char* word)
//{
//    int len = strlen(word);
//    int abblen = len - 2;
//    char ret[10] = { 0 };
//    if (len < 10)
//    {
//        strcpy(ret, word);
//    }
//    else if (abblen < 10)
//    {
//        int i = 0;
//        ret[0] = word[0];
//        i++;
//        ret[i] = (abblen) % 10 + '0';
//        i++;
//        ret[i] = word[len - 1];
//    }
//    else
//    {
//        int i = 0;
//        ret[0] = word[0];
//        i++;
//        ret[i] = (abblen) / 10 % 10 + '0';
//        i++;
//        ret[i] = (abblen) % 10 + '0';
//        i++;
//        ret[i] = word[len - 1];
//    }
//    printf("%s\n", ret);
//}
//
//
//int main()
//{
//    char word[100];
//    int n;
//    scanf("%d", &n);
//    while (n)
//    {
//        scanf("%s", &word);
//        AbbWords(word);
//        n--;
//    }
//    return 0;
//}

//面试题 01.03. URL化
char* replaceSpaces(char* S, int length) {
    int space = 0;
    for (int i = 0; i < length; i++)
    {
        if (S[i] == ' ')
        {
            space++;
        }
    }
    //printf("%d", space);

    int sorc = length - 1;
    int dest = length + 2 * space;
    S[dest--] = '\0';
    printf("%d", dest);
    while (space > 0)
    {
        if (S[sorc] == ' ')
        {
            S[dest--] = '0';
            S[dest--] = '2';
            S[dest--] = '%';
            sorc--;
            space--;
        }
        if (sorc >= 0 && S[sorc] != ' ')
            S[dest--] = S[sorc--];
        //printf("%s\n", S);
    }
    return S;
}

int main()
{
    char S[19] = "     ";
    int len = 5;
    replaceSpaces(S, len);
    return 0;
}