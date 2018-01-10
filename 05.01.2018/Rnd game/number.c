#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randoms()
{
	srand(time(NULL));
	int rnd = 1 + rand() % (10 - 1);
	return rnd;
}

void game(int rnd, int n)
{
	if (rnd > n)
	{
		printf("Рандомное %d больше чем ваше %d \n", rnd, n);
	} else if (rnd < n){
		printf("Рандомное %d меньше чем ваше %d \n", rnd, n);
	} else {
		printf("Рандомное %d равно вашему %d \n", rnd, n);
	}
}

int scannumber()
{
	int n;
	printf("Введите число от 1 до 10: \n");
	scanf("%d", &n);
	if (n >= 1 && n <= 10)
	{
		return n;
	} else {
		return scannumber();
	}
}

int main()
{
	int n;
	int rnd = randoms();
	n = scannumber();
	game(rnd,n);
	return 0;
}