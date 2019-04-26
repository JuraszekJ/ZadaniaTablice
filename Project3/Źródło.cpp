#include <iostream>
using namespace std;
#define N 7
#define A 8
int a[N];
int b[A] = { 1,9,0,2,2,0,0,1 };
void Wpisz()
{
	{
		cout << "Witamy w programie do wpisywania oraz wczytywania  danych do tablicy" << endl;
		cout << "Prosze wpisz do tablicy siedem liczb i kazda potwierdz za pomoca przycisku enter" << endl;
	}
	for (int i = 0; i < N; i++)
	{
		cout << "Liczba" << i + 1 << endl;
		cin >> a[i];
	}
}
void Wczytaj()
{
	cout << "Wpisales takie liczby: " << endl;
	{
		for (int i = 0; i < N; i++)
		{
			cout << "Liczba" << i + 1 << endl;
			cout << a[i] << endl;
		}
	}
	cout << "Wiesz ze tworca tego programu urodzil sie w: " << endl;
	{
		for (int i = 0; i < A; i++)
			cout << b[i];
		cout << endl;
	}
}
int main()
{
	Wpisz();
	Wczytaj();
	system("pause");
}