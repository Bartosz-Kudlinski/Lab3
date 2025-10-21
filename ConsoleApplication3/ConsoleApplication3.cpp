#include <iostream>
using namespace std;

int main()
{
	//Zadanie 1
	/*
	int a, b;
	cout << "Wprowadz zmienne a i b: " << endl;
	cin >> a >> b;

	if (a == b) {
		cout << "Zmienne sa sobie rowne" << endl;
	}
	else if (a != b) {
		if (a < b) {
			cout << "Zmienna b jest wieksza od zmiennej a" << endl;
		}
		else {
			cout << "Zmienna a jest wieksza od zmiennej b" << endl;
		}
	}


	//Zadanie 2
	int a, b;
	cout << "Wprowadz zmienne a i b: " << endl;
	cin >> a >> b;

	if (a == b) {
		cout << "Zmienne sa sobie rowne" << endl;
	}
	else {
		if (a != b) {
			if (a < b) {
				cout << "Zmienna b jest wieksza od zmiennej a" << endl;
			}
			else {
				cout << "Zmienna a jest wieksza od zmiennej b" << endl;
			}
		}


	}

	//Zadanie 3
	double r;
	cout << "wprowadz wspolczynnik r: ";
	cin >> r;
	
	if (0.7 <= r <= 1) {
		cout << "Bardzo silna korelacja dodatnia";
	}
	else {
		if (r >= 0.5) {
			cout << "Silna korelacja dodatnia";
		}
		if (r >= 0.3) {
			cout << "Umiarkowana korelacja dodatnia";
		}
		if (r >= 0.2) {
			cout << "Słaba korelacja dodatnia";
		}
		if (r >= 0) {
			cout << "Brak korelacji";
		}
	}

	//Zadanie 4
	float a, b;
	cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
	cin >> a >> b;
	char znak;
	cout << "Podaj znak dzialania: ";
	cin >> znak;
	float wynik;

	switch (znak) {
		case '+':
			wynik = a + b;
			cout << "Wynik dodawania wynosi: " << wynik << endl;
			break;
		case '-':
			wynik = a - b;
			cout << "Wynik odejmowania wynosi: " << wynik << endl;
			break;
		case '*':
			wynik = a * b;
			cout << "Wynik mnozenia wynosi: " << wynik << endl;
			break;
		case '/':
			if (b == 0) {
				cout << "Nie mozna dzielic przez 0";
				break;
			}
			else {
				wynik = a / b;
				cout << "Wynik dzielenia wynosi: " << wynik << endl;
				break;
			}
	}
	
	//Zadanie 5
	int i = 0;
	while (true) {
		i++;
		cout << i;
	}
	*/
	//Zadanie 6
	float a, b;
	cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
	cin >> a >> b;
	char znak;
	cout << "Podaj znak dzialania: ";
	cin >> znak;
	float wynik;
	bool zakonczenie;

	switch (znak) {
	case '+':
		wynik = a + b;
		cout << "Wynik dodawania wynosi: " << wynik << endl;
		break;
	case '-':
		wynik = a - b;
		cout << "Wynik odejmowania wynosi: " << wynik << endl;
		break;
	case '*':
		wynik = a * b;
		cout << "Wynik mnozenia wynosi: " << wynik << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "Nie mozna dzielic przez 0";
			break;
		}
		else {
			wynik = a / b;
			cout << "Wynik dzielenia wynosi: " << wynik << endl;
			break;
		}
	}
	
}


