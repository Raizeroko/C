#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct stu
{
	char num[9];
	int dep;
	int caip;
	int sort;
};

int cmp(const void* a, const void* b)
{
	struct stu a1 = *(struct stu*)a;
	struct stu b1 = *(struct stu*)b;
	if (a1.sort != b1.sort) return a1.sort - b1.sort;//先对考生的等级进行排序
	else if ((a1.dep + a1.caip) != (b1.dep + b1.caip)) return (b1.dep + b1.caip) - (a1.dep + a1.caip);//按总分排序
	else if (a1.dep != b1.dep) return b1.dep - a1.dep;//如果总分也相同就按德分进行排序
	else return b1.num - a1.num;//最后按照名字排序

}

int main()
{
	int stus;
	int low;
	int high;
	scanf("%d%d%d", &stus, &low, &high);
	struct stu* student = (struct stu*)calloc(stus ,sizeof(struct stu));
	for (int i = 0; i < stus; i++)
	{
		scanf("%s%d%d", &student[i].num, &student[i].dep, &student[i].caip);
		if (student[i].dep >= high && student[i].caip >= high)
		{
			student[i].sort = 1;
		}
		else if (student[i].dep >= high && student[i].caip < high)
		{
			student[i].sort = 2;
		}
		else if (student[i].dep < high && student[i].caip < high && student[i].dep >  student[i].caip)
		{
			student[i].sort = 3;
		}
		else
		{
			student[i].sort = 4;
		}
		if (student[i].dep < low || student[i].caip < low)
		{
			stus--;
			i--;
		}
	}
	printf("%d\n", stus);
	qsort(student, stus, sizeof(struct stu), cmp);
	for (int i = 0; i < stus; i++)
	{
		printf("%08s %d %d\n", student[i].num, student[i].dep, student[i].caip);
	}
	free(student);
	student = NULL;
}