//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//struct game
//{
//	char output;
//	int win;
//};
//int main()
//{
//	int input;
//	int pin = 0;
//	struct game jia;
//	struct game yi;
//	int j_c = 0, j_j = 0, j_b = 0;
//	int y_c = 0, y_j = 0, y_b = 0;
//
//	jia.win = 0;
//	yi.win = 0;
//	
//	scanf("%d", &input);
//	
//	for (int i = 0; i < input; i++)
//	{
//		getchar();
//		scanf("%c %c", &jia.output, &yi.output);
//		if (jia.output == yi.output)
//		{
//			pin++;
//			continue;
//		}
//		else if (jia.output == 'C')
//		{
//			if (yi.output == 'J')
//			{
//				j_c++;
//				jia.win++;
//				continue;
//				
//			}
//			else if (yi.output == 'B')
//			{
//				y_b++;
//				yi.win++;
//				continue;
//			}
//		}
//		else if (jia.output == 'J')
//		{
//			if (yi.output == 'B')
//			{
//				j_j++;
//				jia.win++;
//				continue;
//			}
//			else if (yi.output == 'C')
//			{
//				y_c++;
//				yi.win++;
//				continue;
//			}
//		}
//		else if (jia.output == 'B')
//		{
//			if (yi.output == 'C')
//			{
//				j_b++;
//				jia.win++;
//				continue;
//			}
//			else if (yi.output == 'J')
//			{
//				y_j++;
//				yi.win++;
//				continue;
//			}
//		}
//	}
//	printf("%d %d %d\n", jia.win, pin, input - jia.win - pin);
//	printf("%d %d %d\n", yi.win, pin, input - yi.win - pin);
//	if (j_c >= j_b && j_c >= j_j)
//		printf("C ");
//	else if (j_b > j_c && j_b >= j_j)
//		printf("B ");
//	else if (j_j >= j_b && j_j >= j_c)
//		printf("J ");
//
//	if (y_c >= y_b && y_c >= y_j)
//		printf("C");
//	else if (y_b > y_c && y_b >= y_j)
//		printf("B");
//	else if (y_j >= y_b && y_j >= y_c)
//		printf("J");
//	return 0;
//}