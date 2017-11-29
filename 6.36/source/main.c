#include <stdio.h>
#include <stdlib.h>
#define size 5

void stringReverse(int b[],int i,int j);
void printArray(int b[]);

int main(void)
{
	int n;
	int a[size];

	printf("請輸入%d個數字:\n",size);
	for (n = 0; n < size; n++)
	{
		printf("%d.",n+1);
		scanf_s("%d", &a[n]);
	}
	printArray(a);
	stringReverse(a,0,size-1);
	puts("");
	printArray(a);

	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(int b[],int i,int j)
{
	int c;
	c = b[i]; b[i] = b[j]; b[j] = c;
	i++;
	j--;
	if (i != j)
		stringReverse(b,i,j);
}

void printArray(int b[])
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%5d", b[i]);
	}
}