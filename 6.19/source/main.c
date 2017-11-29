#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void count(int b[]);

int main(void)
{
	int sum[11] = { 0 };
	int a,d=0;
	float k;

	srand(time(NULL));
	count(sum);

	printf("點\t");
	for (a = 0; a < 11; a++)
	{
		printf(" %8d", a+2);
	}
	printf("\n");

	printf("次\t");
	for (a = 0; a < 11; a++)
	{
		printf(" %8d", sum[a]);
	}
	printf("\n");

	printf("機率\t");
	for (a = 0; a < 11; a++)
	{
		k = (float)sum[a] / 36000;
		printf("    %.3f",k);
		d += sum[a];
	}

	printf("\n\n總共%d次\n\n", d);

	system("pause");
	return 0;
}

void count(int b[])
{
	int z,i=36000;
	int point1, point2;
	do
	{
		point1 = 1+rand() % 6;
		point2 = 1+rand() % 6;
		z = (point1 + point2);
		++b[z-2];
		i--;
	} while (i != 0);
}