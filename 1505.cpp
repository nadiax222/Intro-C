//Zadanie 3. Stwórz tablicę która będzie przyjmować Twoje imię i nazwisko(małe litery, bez
//	spacji).Następnie znajdź sposób na znalezienie najpóźniej leżącej litery w alfabecie w
//	twoim imieniu i nazwisku.

#include <iostream>
using namespace std;
int main
{
	char name[100];
	cout << "Podaj imię bez spacji i z małych liter:";
	cin >> name
	char maxlitera = name[0];

	for (int i = 1; dane[i] != '\0'; i++) {
		if (dane[i] > maxlitera) {
			maxlitera = name[i];
		}
	}
	cout << "najpozniejsza litera w alfabecie to:"
		<< maxlitera << endl;
	return 0;

}