#define _CRT_SECURE_NO_WARNINGS 1

//BC31 发布消息
//
//#include<stdio.h>
//
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}



//BC32 输出学生信息
//
//#include<stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//    return 0;
//}



//BC33 计算平均成绩
//
//#include<stdio.h>
//
//int main()
//{
//    int stu[5];
//    float avg = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &stu[i]);
//        avg = avg + stu[i];
//    }
//    avg /= 5;
//    printf("%.1f", avg);
//    return 0;
//}



//BC34 进制A+B
//
//#include<stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%x%o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}



//BC35 判断字母
//
//#include<stdio.h>
//
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}



//BC36 健康评估
//
//#include<stdio.h>
//
//int main()
//{
//    float a, b, m;
//    scanf("%f%f", &a, &b);
//    m = a / (b * b);
//    if (m >= 18.5 && m <= 23.9)
//        printf("Normal\n");
//    else
//        printf("Abnormal\n");
//    return 0;
//}



//BC37
//
//#include<stdio.h>
//
//int main()
//{
//    float price;
//    int month, day;
//    int i;
//    scanf("%f%d%d%d", &price, &month, &day, &i);
//    if (month == day && month == 11)
//    {
//        price = price * 0.7 - 50*i;
//    }
//    else if (month == day && month == 12 )
//    {
//        price = price * 0.8 - 50*i;
//    }
//    if (price < 0)
//        printf("0.00");
//    else
//    printf("%.2f", price);
//    return 0;
//}



//BC38 变种水仙花
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int x = 0;
//    for (int i = 10000; i < 100000; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j < 5; j++)
//        {
//			x = (int)pow(10, j);
//            sum = sum + (i / x) * (i % x);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//BC38测试
// 
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 655;
//	int sum = 0;
//	int x;
//	for (int j = 1; j < 3; j++)
//	{
//		x = (int)pow(10, j);
//		sum = sum + (i / x) * (i % x);
//	}
//	if (sum == i)
//		printf("%d ", i);
//	return 0;
//}



//BC39 争夺前五名
//
//#include<stdio.h>
//
//int cmp(const void* a, const void* b)
//{
//	return *(int*)b - *(int*)a;
//}
//
//int main()
//{
//	int input;
//	int grade[100];
//	scanf("%d", &input);
//	for (int i = 0; i < input; i++)
//	{
//		scanf("%d", &grade[i]);
//	}
//	qsort(grade, input, sizeof(int), cmp);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", grade[i]);
//	}
//	return 0;
//}



//BC40 竞选社长
//
//#include<stdio.h>
//
//int main()
//{
//	int ac=0, bc=0;
//	char input = 0;
//	while (input != '0' && input != '\n')
//	{
//		scanf("%c", &input);
//		if (input == 'A')
//			ac++;
//		else if (input == 'B')
//			bc++;
//	}
//	if (ac > bc)
//		printf("A");
//	else if (bc > ac)
//		printf("B");
//	else
//		printf("E");
//
//	return 0;
//}



//BC41 你是天才吗？
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input >= 140)
//			printf("Genius");
//	}
//	return 0;
//}



//BC42 完美成绩
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input >= 90 && input <= 100)
//			printf("Perfect");
//	}
//	return 0;
//}



//BC43 及格分数
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}



//BC44 判断整数奇偶性
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}



//BC45 最高分数
//
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c;
//    int max;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        max = a;
//        if (b > max)
//        {
//            max = b;
//        }
//        if (c > max)
//        {
//            max = c;
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}



//BC46 判断是元音还是辅音
//
//#include<stdio.h>
//
//int main()
//{
//    char input;
//    while (scanf("%c", &input) != EOF)
//    {
//        getchar();
//        switch (input)
//        {
//        case 'A':
//            printf("Vowel\n");
//            break;
//        case 'E':
//            printf("Vowel\n");
//            break;
//        case 'I':
//            printf("Vowel\n");
//            break;
//        case 'O':
//            printf("Vowel\n");
//            break;
//        case 'U':
//            printf("Vowel\n");
//            break;
//        case 'a':
//            printf("Vowel\n");
//            break;
//        case 'e':
//            printf("Vowel\n");
//            break;
//        case 'i':
//            printf("Vowel\n");
//            break;
//        case 'o':
//            printf("Vowel\n");
//            break;
//        case 'u':
//            printf("Vowel\n");
//            break;
//        default:
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}



//BC46 判断元音还是辅音
//
//#include<stdio.h>
//
//int main()
//{
//    char input;
//    while (scanf("%c", &input) != EOF)
//    {
//        getchar();
//        if (input == 'a' || input == 'A' ||
//            input == 'e' || input == 'E' ||
//            input == 'i' || input == 'I' ||
//            input == 'o' || input == 'O' ||
//            input == 'u' || input == 'U')
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}



//BC47 判断是不是字母
//
//#include<stdio.h>
//
//int main()
//{
//    char input;
//    while (scanf("%c", &input) != EOF)
//    {
//        getchar();
//        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
//        {
//            printf("%c is an alphabet\n", input);
//        }
//        else
//        {
//            printf("%c is not an alphabet\n", input);
//        }
//    }
//    return 0;
//}



//BC48 字母大小写转换
//
//#include<stdio.h>
//
//int main()
//{
//	char input;
//	while (scanf("%c", &input) != EOF)
//	{
//		getchar();
//		if (input >= 'a' && input <= 'z')
//		{
//			printf("%c\n", input - 32);
//		}
//		else if (input >= 'A' && input <= 'Z')
//		{
//			printf("%c\n", input + 32);
//		}
//	}
//	return 0;
//}



//BC49 判断两个数的大小关系
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d=%d\n", a, b);
//	}
//	return 0;
//}



//BC50 计算单位阶跃函数
//
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input > 0)
//			printf("%d\n", 1);
//		else if (input == 0)
//			printf("%.1f\n", 0.5);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}





