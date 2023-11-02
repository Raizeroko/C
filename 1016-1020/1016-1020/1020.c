#define _CRT_SECURE_NO_WARNINGS 1

struct mooncake
{
	int stock;
	float price;

};

int main()
{
	int kind,need;
	scanf("%d %d", &kind, &need);
	struct mooncake num[1000] = {0};
	for (int i = 0; i < kind; i++)
	{
		scanf("%d", &num[i].stock);
	}
	for (int i = 0; i < kind; i++)
	{
		scanf("%d", &num[i].price);
		num[i].price /= num[i].stock;
	}
	
	

	return 0;
}