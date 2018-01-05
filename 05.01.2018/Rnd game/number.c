#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;

	srand(time(NULL));
    int rnd = 1 + rand() % (100 - 1);
	printf("Введите число: \n");
	scanf("%d", &n);
	if (rnd > n)
	{
		printf("Рандомное %d больше чем ваше %d \n", rnd, n);
	} else {
		printf("Рандомное %d меньше чем ваше %d \n", rnd, n);
	}
	return 0;
}