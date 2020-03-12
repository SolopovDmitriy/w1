#include <iostream>
using namespace std;

const int ROWS = 10;  // Ряд add commit 1
const int COLS = 10; // Столб (элементы строки)


void fillrand(int arr[], const int n);
void fillrand(double arr[], const int n);
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);


void print(int arr[], const int n);
void print(double arr[], const int n);
void print(int arr[ROWS][COLS], const int ROWS, const int COLS);


void sort(int arr[], const int n);
void sort(double arr[], const int n);
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS);


int sum(int arr[], const int n);
double sum(double arr[], const int n);
double avg(int arr[], const int n);
double avg(double arr[], const int n);
int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
char MinValueIn(char arr[], const int n);
int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
char MaxValueIn(char arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	fillrand(arr, n);
	print(arr, n);
	sort(arr, n);
	print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << sum(arr, n) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов массива: " << avg(arr, n) << endl;
	cout << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << endl;
	cout << "\t\t\t\t\"Массив double\"" << endl;
	cout << endl;

	const int m = 8;
	double brr[m];
	fillrand(brr, m);
	print(brr, m);
	sort(brr, m);
	print(brr, m);
	cout << endl;

	cout << "Сумма элементов массива \"double\": " << sum(brr, m) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов массива \"double\": " << avg(brr, m) << endl;
	cout << endl;
	cout << "Минимальное значение в массиве \"double\": " << MinValueIn(brr, m) << endl;
	cout << endl;
	cout << "Максимальное значение в массиве \"double\": " << MaxValueIn(brr, m) << endl;
	cout << endl;
	char crr[n];
	MinValueIn(crr, n);
	MaxValueIn(crr, n);


	int A[ROWS][COLS];
	fillrand(A, ROWS, COLS);
	print(A, ROWS, COLS);
	sort(A, ROWS, COLS);
	print(A, ROWS, COLS);

}

void fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 10;
	}
}
void fillrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//arr[i] /= 10;
	}
}
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Number of iterations: " << iterations << endl;
}
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[k][l] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Number of iterations: " << iterations << endl;
}
int sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double avg(int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
char MinValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
char MaxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

