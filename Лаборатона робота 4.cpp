#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#define ArraySize 5
using namespace std;


class Array {
private:

	int** Arr = new int*[ArraySize];

public:
	void  InputArray(int** Arr);
	void  OutputArray(int** Arr);
	void BubbleSortLinesDecr(int** Arr);
	void SumGeometricLinesOverMain(int** Arr, double SumAllGeom);

};

int main()
{
	setlocale(LC_ALL, "Ukr");
	int** Arr = new int*[ArraySize];
	for (int i = 0; i < ArraySize; i++)
	{
		Arr[i] = new int[ArraySize];
	}

	cout << "                                                ДАВАЙ ПРОСТО ЗРОБИМО ЦЕ\n";

	Array A;
	cout << "Введiть циферки\n";
	A.InputArray(Arr);
	system("cls");
	cout << "А ось i массив\n";
	A.OutputArray(Arr);
	cout << "__________________________________________________________________________________________________________________\n";
	cout << "Сортуємо...\n";
	cout << "__________________________________________________________________________________________________________________\n";
	A.BubbleSortLinesDecr(Arr);
	cout << "Готово\n";
	A.OutputArray(Arr);
	cout << "__________________________________________________________________________________________________________________\n";
	A.SumGeometricLinesOverMain(Arr, 0);
	cout << "__________________________________________________________________________________________________________________\n";

}
void Array :: InputArray(int** Arr)
{
	for (int i = 0; i < ArraySize; ++i)
	{
		for (int j = 0; j < ArraySize; ++j)
		{
			cout << "Введiть [" << i + 1 << "]" << "[" << j + 1 << "]:";
			cin >> Arr[i][j];
		}
		
	}
}
void Array :: OutputArray(int** Arr)
{
	for (int i = 0; i < ArraySize; ++i)
	{
		for (int j = 0; j < ArraySize; ++j)
		{
			cout << Arr[i][j] << " ";
		}   cout << "\n";
	}


}
void Array:: BubbleSortLinesDecr(int** Arr)
{
	int trash, step;
	for (step = 0; step < ArraySize; ++step)
	{
		for (int i = 0; i < ArraySize; ++i)
		{
			for (int j = 0; j < (ArraySize - 1); ++j)
			{
				if (Arr[i][j] <Arr[i][j + 1])
				{
					trash = Arr[i][j];
					Arr[i][j] = Arr[i][j + 1];
					Arr[i][j + 1] = trash;
				}
			}

		}
	}
}
void Array::SumGeometricLinesOverMain(int** Arr, double SumAllGeom)
{
	SumAllGeom = 0;
	for (int i = 0; i < ArraySize - 1; i++)

	{
		double	product = 1, CountOfNumbers, MiddleGeometric;
		int j = 1;
		for (j = j + i; j < ArraySize; j++)
		{
			product *= Arr[i][j];
			CountOfNumbers = ArraySize - i - 1;


		}
		MiddleGeometric = pow(product, 1 / CountOfNumbers);
		cout << "Cереднє геометричне в рядку " << i + 1 << " = " << MiddleGeometric << "\n";
		SumAllGeom += MiddleGeometric;

	}


	cout << "__________________________________________________________________________________________________________________\n";
	cout << "Сума всiх геометричних = " << SumAllGeom << "\n";
}

