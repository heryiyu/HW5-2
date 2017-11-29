#include <stdio.h>
#include <stdlib.h>
#define size 10

void getnumber(int b[]);
void printarray(int b[]);
int recursiveMaximum(int b[], int i, int max);
int main(void)
{
	int m;
	int a[size];

	getnumber(a);
	puts("");
	printarray(a);
	m=recursiveMaximum(a,0,0);
	printf("\n\nThe maximum of array is %3d\n", m);

	printf("\n");
	system("pause");
	return 0;
}

void getnumber(int b[])
{
	printf("請輸入%d個數字:\n", size);
	for (int n = 0; n < size; n++)
	{
		printf("%d.", n + 1);
		scanf_s("%d", &b[n]);
	}
}

void printarray(int b[])
{
	int i;
	for (i = 0; i < size; i++)
		printf("%5d", b[i]);
}

int recursiveMaximum(int b[], int i, int max)
{
	if (i != size)
	{
		if (max < b[i])
			max = b[i];
		i++;
		recursiveMaximum(b, i, max);
	}
	else
		return max;
}