#include <stdio.h>
int count(int n, int a)
{
	if (a > n/2)
	return 0;
	return 1 + count(n, a + 1);
}
int main (void)
{
	int N;
	printf ("Введите натуральное число N: ");
	scanf ("%d", &N);
	if (N < 1)
	{
		printf ("Ошибка: N должно быть >= 1\n");
		return 0;
	}
	printf ("Ответ: %d\n", count(N, 1));
	return 0;
}
