#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	const int size = 10;
	int arr[size] = { 52,82,12,28,11,44,30,61,77,100 };
	int element, j, temp;

	std::cout << "Массив до сортировки: ";
	for (element = 0; element < size; element++) 
	{
		std::cout << arr[element] << " ";
	}

	std::cout << "\nМассив после сортировки:";
	for (j = 0; j < size - 1; j++)
	{
		for (element = 0; element < size - 1; element++)
		{
			if (arr[element] < arr[element + 1])  
			// знак >(больше) числа матрицы будет выстроены в порядке возрастания
			// знак <(меньше) числа матрицы будет выстроены в порядке убывания 
			{
				temp = arr[element];
				arr[element] = arr[element + 1];
				arr[element + 1] = temp;
			}
		}
	}

	for (element = 0; element < size; element++)
	{
		std::cout << arr[element] << " ";
	}

	return EXIT_SUCCESS;
}