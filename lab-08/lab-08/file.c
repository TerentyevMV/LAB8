#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE

char task0();
int task1();
int task1A();
double task2();

int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	//task0();
	//task1();
	//task1A();
	task2();
	return 0;
}

char task0() {

	char c; char f; int iterations;


	puts("Введите два символа и кол-во итераций: ");
	
	scanf(" %c %c %d", &c, &f, &iterations);


	for (int start = 1; start <= iterations; start++) {

		if (start <= iterations / 2) 
			printf("%c!", c);
		else 
			printf("%c!", f);
	}
	puts("+\n");

	return '0';
}

int task1() {

	int n, m; int S = 0; int k = 0;

	puts("Введите два значения: ");

	scanf(" %d %d", &m, &n);

	for (int i = m; i >= n; i--) {

		S += i;
		printf("выполнено %d раз\n", k++);
	}

	printf("результат %d\n", S);

	return 0;
}

int task1A() {
	int n;

	puts("Введите степень: ");

	scanf("%d", &n);

	printf("%6c | %6c\n", 'n', 'r');

	for (int i = 0; i <= n; i++) {
		printf("%6d | %6d\n", i, (int)pow(2, i));
	}

	return 0;
}

double task2() {
	double tab = 1;

	double minValue = 0.1;
	double maxValue = 2.2;

	puts("y = x^2 - cos^2(x + 1)");
	puts("Введите шаг табуляции. Введите 1, если выбираете шаг табуляции по умолчанию: ");

	scanf("%lf", &tab);

	printf("| %6c | %6s |\n", 'x', "f(x)");
	puts("___________________");

	for (double x = minValue; x <= maxValue; x += tab) {

		double f = pow(x, 2) - pow(cos(x + 1), 2);

		printf("| %+.3lf | %+.3lf |\n", x, f);

	}

	return 0.;
}

