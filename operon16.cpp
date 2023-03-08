// operon16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <fstream>
using namespace std;

ifstream plik("liczby16.txt");
ifstream plik2("liczby16.txt");

bool Dzielniki(int a, int b)
{
	if (a < 2 || b < 2) return false;
	for (int i = 2; i <= (a / 2); i++)
	{
		if (a % i == 0 && b % i == 0) return false;
	}
	return true;
}

int Jeden()
{
	int liczba;
	int liczba2 = 0;
	int ile = 0;
	for (int i = 0; i < 500; i++)
	{
		plik >> liczba;
		for (int i = 0; i < 500; i++)
		{
			plik2 >> liczba2;
			if (liczba != liczba2)
			{
				if (Dzielniki(liczba, liczba2)) ile++;
			}
		}
		plik2.close();
		plik2.open("liczby16.txt");
	}
	plik.close();
	plik.open("liczby16.txt");
	return ile;
}

bool ileDziel(int n)
{
	int ile = 2;
	if (n < 2) return false;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0) ile++;
	}
	if (ile == 9) return true;
	else return false;
}

void Dwa()
{
	int liczba;
	int ile = 0;
	for (int i = 0; i < 500; i++)
	{
		plik >> liczba;
		if (ileDziel(liczba)) cout << liczba << endl;
	}
}

int main()
{
	cout << "16.1: " << Jeden()/2 << endl;
	cout << "16.2: " << endl;
	Dwa();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
