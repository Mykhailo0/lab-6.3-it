#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type>
Type SumT(Type* a, Type size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)
			S += a[i];
	return S;
}
template <typename Type>
void CreateT(Type* a, Type size, Type Low, Type High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
template <typename Type>
void PrintT(Type* a, Type size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)
			S += a[i];
	return S;
}

void Create(int* a, int size, int Low, int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* p = new int[n];
	int Low = 1;
	int High = 20;
	Create(p, n, Low, High);
	cout << "a[n] =";
	Print(p, n);
	cout << "Sum = " << Sum(p, n) << endl;
	delete[] p;
	int* k = new int[n];
	CreateT(k, n, Low, High);
	cout << "a[n] =";
	PrintT(k, n);
	cout << "Sum = " << SumT(k, n) << endl;
	delete[] k;
	return 0;
}