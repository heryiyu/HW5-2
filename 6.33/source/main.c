#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

size_t binarysearch(const int b[], int key, size_t low,size_t high);
void printheader(void);
void printrow(const int b[], size_t low, size_t high);

int main(void)
{
	int a[SIZE];
	size_t i;
	int key;
	size_t result;

	for (i = 0; i < SIZE; i++)
		a[i] = 2 * i;

	printf("%s", "Enter a number between 0 and 28:");
	scanf_s("%d", &key);

	printheader();

	result = binarysearch(a, key, 0, SIZE-1);

	if (result != -1)
		printf("\n%d found in array element %d\n", key, result);
	else
		printf("\n%d not found\n", key);

	printf("\n");
	system("pause");
	return 0;
}

size_t binarysearch(const int b[], int key, size_t low, size_t high)
{
	int middle;

	printrow(b, low, high);
	middle = (low + high) / 2;

	if (key == b[middle])
	{
		printrow(b, middle, middle);
		return middle;
	}
	else if (key < b[middle])
		high = middle - 1;
	else if (key > b[middle])
		low = middle + 1;
	
	if (low <= high)
	binarysearch(b, key, low,high);

	else
	return -1;
}

void printheader(void)
{
	unsigned int i;
	puts("\nSubscripts");
	for (i = 0; i < SIZE; i++)
		printf("%3u", i);

	puts("");
	for (i = 1; i <= 4 * SIZE; i++)
		printf("%s", "-");

	puts("");
}

void printrow(const int b[], size_t low, size_t high)
{
	size_t i;
	for (i = 0; i < SIZE; i++)
	{
		if (i<low || i>high)
			printf("%s", "   ");
		else
			printf("%3d", b[i]);
	}
	puts("");
}