#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctime>
#define size 6     // объявляем константное значение size
int main()
{
	setlocale(LC_ALL, "Rus");
	int mas[size][size],temp;
	srand(time(NULL));
	printf("Сгенерированный массив:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			mas[i][j] = rand() % 101;   // генерируем массив и выводим его, выделяя 5 знакомест под элемент
			printf("%5d",mas[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)     // сортировка массива по убыванию
		{
			for (int j = size - 1; j > k; j--)
			{ 
				if (mas[i][j] > mas[i][j - 1])
				{
					temp = mas[i][j];
					mas[i][j] = mas[i][j - 1];   // меняем местами два элемента массива с помощью переменной temp
					mas[i][j - 1] = temp;
				}
		
			}
		}
	}
	printf("Отсортированный массив:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%5d", mas[i][j]);       // вывод отсортированного массива, также выделяя 5 знакомест под элемент
		}
		printf("\n");
	}
	return 0;
}