#define _CRT_SECURE_NO_WARNINGS 1

//BC98
#include<stdio.h>

int main()
{
    int input, j = 0;
    int arr[51];
    int del;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &del);
    for (int i = 0; i < input; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
       
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}



//BC96
#include<stdio.h>

int choose(int x, int y)
{
    return x - y;
}

int main()
{
    int input, Case;
    int arr[50];
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    Case = choose(arr[0], arr[1]);
    if (Case > 0)
    {
        for (int i = 0; i < input - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                printf("unsorted");
                return 0;
            }

        }
        printf("sorted");
    }
    else
    {
        for (int i = 0; i < input - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                printf("unsorted");
                return 0;
            }
        }
        printf("sorted");

    }
    return 0;

}

//BC100
#include<stdio.h>

int main()
{
    int n, m, i, j;
    int arr1[5000], arr2[5000];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }
    for (i = 0, j = 0; i < n && j < m;)
    {
        if (arr1[i] <= arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i != n)
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    else if (j != m)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    return 0;
}