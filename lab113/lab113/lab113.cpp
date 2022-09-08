// lab113.cpp: определ€ет точку входа дл€ консольного приложени€.
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>//директива препроцесора
#include <conio.h> //директива препроцесора
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
    setlocale(LC_ALL, "Rus");
	int i, n, *a;
    printf("¬ведите число количества значений в массиве: ");
	printf("\n");
	scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
		a[i] = rand()%100;
		printf("%d", a[i]);
		printf("\n");
    }
	free(a);
}

