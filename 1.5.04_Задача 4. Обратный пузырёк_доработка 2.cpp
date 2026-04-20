#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	const int size = 10;
	int arr[size] = { 2,6,8,4,1,9,10,7,5,3 };
	int element, j, temp;

	std::cout << "Массив до сортировки: ";
	for (element = 0; element < size; element++)
	{
		std::cout << arr[element] << " ";
	}

	std::cout << "\nМассив после сортировки:";
	for (j = 0; j < size - 1; j++)
	{
		for (element = 0 ; element < size - 1; element++)
		{
			if (arr[element + 1] < arr[element])
			{
				temp = arr[element+1];
				arr[element+1] = arr[element];
				arr[element] = temp;
			}
		}
	}

	for (element = 0; element < size; element++)
	{
		std::cout << arr[element] << " ";
	}

	return EXIT_SUCCESS;
}