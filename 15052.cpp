//zad.5
//#include <iostream>
//using namespace std;
//int main() {
//	{
//		char name[100];
//		cout << "Podaj imię bez spacji i z małych liter:";
//		cin >> name;
//		char maxlitera = name[0];
//
//		for (int i = 1; name[i] != '\0'; i++) {
//			if (name[i] > maxlitera) {
//				maxlitera = name[i];
//			}
//		}
//		cout << "najpozniejsza litera w alfabecie to:"
//			<< maxlitera << endl;
//		return 0;
//
//	}
//}
//
//
//zad.6
#include <iostream>
using namespace std;

int suma(int tablica[], int rozmiar)
{
	int suma = 0;
	for (int i = 0; i < rozmiar; i++) {
		suma += tablica[i];
	}
	return suma;
}
int main()
{
	int liczby[] = { 1, 2, 3, 4, 5 };
	int wynik = suma(liczby, 5);
	cout << "Suma elementów tablicy wynosi: " << wynik << endl;
	return 0;
}