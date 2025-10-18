#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS"); //ё
	int n;
	double summa_n = 0.0;
	double znak = 1.0;
	printf("Введите число N<10\n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		double value_now = 1.0 + (double)i / 10.0;
		summa_n = summa_n + (value_now * znak);
		znak = znak * -1.0;
	}
	printf("Значение выражения для N = %d будет: %.1f \n", n, summa_n);
}