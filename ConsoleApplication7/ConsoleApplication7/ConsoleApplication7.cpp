// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//zad1
		
	//char zdanie[] = { "lot" };// inicjalizacja lancuch znakow
		//
		//char zdanie[] = { 'l', 'o', 't' };// inicjalizacja zbiorcza
		
		//zad2

		//int liczby[100];
		//char znaki[100];
		//cout << "podaj liczby: ";
		//cin >> liczby;
		//cin >> znaki;

		//zad3
		
		/*char tab[] = "wiosna";
		cout << "rozmiar tablicy: " << size(tab);*/

	//	//zad4 
	
	////inicjalizacja
	//cout << "inicjalizacja" << endl;
	//string tekst("ania ma kota");
	//string tekst_drugi(tekst);
	//cout << tekst << endl << tekst_drugi;
	//cin.get();
	
	////przechowywanie danych
	//cout << "przechowywanie danych" << endl;
	//string tekst3 = " tekst";
	//cout << tekst3 << endl;
	
	////kopiowanie
	//cout << "kopiowanie" << endl;
	//string tekst4 ( "Ania ma kota");
	//char tab[10];

	//int liczba_znakow = tekst4.copy(tab, 4, 7);

	//tab[liczba_znakow] = 0; 
	//cout << tab;
	//cin.get();
	
	////laczenie
	//cout << "laczenie " << endl;
	//string tekst5, tekst6, teksty_polaczone;
	//cout << "Podaj tekst: ";
	//getline(cin, tekst5);
	//cout << "Podaj drugi tekst: ";
	//getline(cin, tekst6);
	//teksty_polaczone = tekst5 + tekst6;
	//cout << "Polaczony tekst to: " << teksty_polaczone << endl;
	
	////dlugosc tekstu
	//cout << "dlugosc tekstu" << endl;
	//string tekst7("ania ma kota");
	//int liczba_znakow= tekst7.length();
	//cout << "ilosc znakow " << tekst7.length() << "znakow ";

	//zad5
	
	/*int ocena, umiejetnosci=0;
	string nazwa_ulicy, numer_domu, staz, adres;

	cout << "podaj nazwe ulicy na ktorej mieszkasz: ";

	getline(cin, nazwa_ulicy);
	

	cout << "podaj nr domu:  ";
	cin >> numer_domu;


	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
	cin >> umiejetnosci;
	
	
	while (umiejetnosci < 2 || umiejetnosci > 5)
	{
		cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
		cin >> umiejetnosci;
	}
	
	
	umiejetnosci = umiejetnosci - 1;

	
	
	cout << "Twoj staz programistyczny : ";
	cin >> staz;
	cout << endl;


	cout << "adres : " << nazwa_ulicy << numer_domu << " " << endl;
	cout << "ocena :" << umiejetnosci << " " << endl;
	cout << "twoj staz programistyczny: " << staz << " dni " << endl;
*/

	//zad6
	/*string tekst;
	cout << "Wprowadz tekst: ";
	getline(cin, tekst);

	string spolgloski = "bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";
	int  n_spolgloski = 0;

	for (int i = 0; i < tekst.length(); i++) 
	{

		for (int j = 0; j < spolgloski.length(); j++) 
		{
			if (tekst[i] == spolgloski[j]) 
				n_spolgloski++;
		}
	}
	string samogloski = "aeiouyAEIOUY";
	int n_samogloski = 0;
	for (int i = 0; i < tekst.length(); i++)
	{
		for (int j = 0; j < samogloski.length(); j++)
		{
			if (tekst[i] == samogloski[j]) 
				n_samogloski++;
		}
	}

	cout << "Dlugosc calego tekstu to: " << tekst.length() << endl;

	cout << "Spolgloski (suma): " << n_spolgloski << endl;
	cout << "samogloski (suma): " << n_samogloski << endl;*/


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