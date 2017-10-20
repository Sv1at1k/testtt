// ~~4-лаба студента IoT Яциника Святослава(IR-11)~~

#include "stdafx.h"
#include <iostream>
#include <math.h>




using namespace std;
void Input(int** mas, int size);
void Output(int** mas, int size);
void Sort(int** mas, int size);
void function(int** mas, int size, double d);
int main()
{
	const int size = 5;
	int** mas = new int*[size];    
	for (int i = 0;i < size;i++)
	{
		mas[i] = new int[size];
	
	}
	int i =0, j=0 , current, previous;
	double sum = 0, d = 1;
	
	
	cout << "                                                      OKEY,LETS GO! \n";

	
	cout << "-We need numbers..\n";

	
	Input(mas, size);
	system("cls");
	
	cout << "Here is the matrix\n";
    Output( mas,size);
	

	cout << "We are sorting it out...\n";
    Sort(mas, size);
	cout << "________________________________________________________________________________________________________________________";


    	cout << "Here is a sorted matrix\n";
     Output(mas,size);
	  
	
	  
	  
	  function(mas, size, d);
	
	}  








void Input(int** mas, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			cout << "Enter a [" << i+1 << "]" << "[" << j+1 << "]"<< ":";
			cin >> mas[i][j];

		}
	}
}
	void Output(int** mas, int size)
	{
		for (int i = 0;i < size;++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << mas[i][j] << " ";

			}
			cout << "\t" << "\n";
		}
		cout << "________________________________________________________________________________________________________________________";
		cout << "\n";
	}
void Sort(int** mas, int size)
{
	for (int i = 0;i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			int current = j;
			int  previous = mas[i][j];
			for (int h = j + 1; h < size; ++h)
			{
				if (mas[i][h] > previous)
				{
					current = h;
					previous = mas[i][h];
				}


			}
			mas[i][current] = mas[i][j];
			mas[i][j] = previous;
		}


	}



}
void function(int** mas, int size, double d)
{
	for (int j = 0;j <size - 1;++j)
	{
		double sum = 0;
		for (int i = 0; i < size - j - 1;++i)
		{
			sum += mas[i][j];
		}
		cout << "f from column " << j + 1 << " " << "=" << " ";
		cout << sum / (4- j) << "\n";
		d = d*(sum / (4 - j));
	}
	cout << "________________________________________________________________________________________________________________________";

	cout << "\n Product all  f " << " = ";
	cout << d << "\n";
}













