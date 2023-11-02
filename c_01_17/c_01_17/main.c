#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char arr[2][4];
//	strcpy(arr[0], "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//
struct st {
	struct st* next;
	struct st* prev;
	//char c[0];
}st;

int main()
{

	printf("%d", sizeof(struct st));
	return 0;
}

//enum weekday
//{
//	sun,
//	mon = 3,
//	tue,
//	wed
//};
//
//int main()
//{
//	enum weekday workday;
//	workday = wed;
//	printf("%d", wed);
//	return 0;
//}

//
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char arr[2][4];
//	strcpy(arr[0], "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//
//struct st {
//	int* a;
//	int b;
//	char c;
//};
//
//int main()
//{
//
//	printf("%d", sizeof(struct st));
//	return 0;
//}

//enum weekday
//{
//	sun,
//	mon = 3,
//	tue,
//	wed
//};
//
//int main()
//{
//	enum weekday workday;
//	workday = wed;
//	printf("%d", wed);
//	return 0;
//}

//
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char arr[2][4];
//	strcpy(arr[0], "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//
//struct st {
//	int* a;
//	int b;
//	char c;
//};
//
//int main()
//{
//
//	printf("%d", sizeof(struct st));
//	return 0;
//}

//enum weekday
//{
//	sun,
//	mon = 3,
//	tue,
//	wed
//};
//
//int main()
//{
//	enum weekday workday;
//	workday = wed;
//	printf("%d", wed);
//	return 0;
//}

//
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char arr[2][4];
//	strcpy(arr[0], "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//
//struct st {
//	int* a;
//	int b;
//	char c;
//};
//
//int main()
//{
//
//	printf("%d", sizeof(struct st));
//	return 0;
//}

//enum weekday
//{
//	sun,
//	mon = 3,
//	tue,
//	wed
//};
//
//int main()
//{
//	enum weekday workday;
//	workday = wed;
//	printf("%d", wed);
//	return 0;
//}

//面试题 01.06. 字符串压缩
//char* compressString(char* S) {
//    int Ssize = strlen(S), index = 0, cout = 0;
//    char* arr = (char*)malloc(sizeof(char) * (Ssize + 1));
//    for (int i = 0; i < Ssize; ++i)
//    {
//        ++cout;
//        if (i + 1 == Ssize || S[i] != S[i + 1])
//        {
//            if (index + 2 > Ssize - 1)
//            {
//                return S;
//            }
//            else
//            {
//                arr[index++] = S[i];
//                int num = (int)log10(cout), num1 = num;
//                while (cout)
//                {
//                    arr[index + num] = cout % 10 + '0';
//                    cout /= 10;
//                    --num;
//                }
//                index += num1 + 1;
//            }
//        }
//    }
//    arr[index] = '\0';
//    return arr;
//}
//
//int main()
//{
//    char S[] = "ccc";
//    printf("%s", compressString(S));
//    return 0;
//}
//
//
////面试题 05.07. 配对交换
// 
//int exchangeBits(int num) {
//    return ((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1);
//}


//面试题 08.05. 递归乘法
//
int multiply(int A, int B) {
	if (B == 0)
		return 0;
	return A + multiply(A, B - 1);
}

//HJ55 挑7
//
#include<stdio.h>

int main()
{
    int input = 0;
    while (scanf("%d", &input) != EOF)
    {
        int ret = 0;

        for (int i = 1; i <= input; i++)
        {
            int tmp = i;
            //7的倍数
            if (tmp % 7 == 0)
            {
                //printf("%d ", tmp);
                ret++;
                continue;
            }
            //包含7
            while (tmp)
            {
                if (tmp % 10 == 7)
                {
                    ret++;
                    break;
                }
                tmp /= 10;
            }
        }
        printf("%d\n", ret);

    }
    return 0;
}
