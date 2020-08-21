#include<stdio.h>
int main()
{
	int a[100][100], b[100][100], x, i, j, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

