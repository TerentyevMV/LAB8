#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE

double task();


int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	task();

	return 0;
}

double task() {

	int n; double accum = 0.;

	puts("1^1 + 2^2 + 3^3 + ... + n^n");
	puts("Введите n: ");

	scanf(" %d", &n);

	for (int i = 1; i <= n; i++) {

		accum += pow(i, i);
	}

	printf("Результат: %.0lf", accum);

	return 0.;
}

