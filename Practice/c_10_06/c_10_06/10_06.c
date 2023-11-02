#define _CRT_SECURE_NO_WARNINGS 1


//写出 C 语言程序，实现计算自然数从 1 到 100 之和。
//
//#include<stdio.h>
//
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//在一个二维数组中，每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个函数，
//输入这样的一个二维数组和一个整数，判断数组中是否含有该整数
//时间复杂度：O(row+col)
//
//#include<stdio.h>
//
//#define ROW 4
//#define COL 4
//
//
//int main()
//{
//	int input;
//	int curr = 0, curl=COL-1;
//	int arr[ROW][COL] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	scanf("%d", &input);
//	while (curr < ROW && curl >= 0)
//	{
//		if (input > arr[curr][curl])
//		{
//			curr++;
//		}
//		else if (input < arr[curr][curl])
//		{
//			curl--;
//		}
//		else
//		{
//			printf("找到\n");
//			return 0;
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}



//有 1000 瓶药物，但是其中有一瓶是有毒的，小白鼠吃了一个星期以后就会死掉！
//请问，在一个星期内找出有毒的药物，最少需要多少只小白鼠？
//
#include<stdio.h>

int main()
{
	int mouseNumber = 0;
	int poison = 1000;
	while (poison)
	{
		poison /= 2;
		mouseNumber++;
		//用十只老鼠的死亡或存活表示二进制，死亡代表1，没死代表零，
		// 每只老鼠只喝本位的毒药，，最后组成的二进制就是那瓶毒药
	}
	printf("在一个星期内找出有毒的药物，最少需要%d只小白鼠", mouseNumber);
	return 0;
}