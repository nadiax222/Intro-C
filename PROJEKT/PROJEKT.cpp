//PROJEKT:
//- Kod poprawnie wczytuje sekwencje nukleotydów z zaprezentowanego pliku txt.
//- Kod zamienia DNA na mRNA.
//- Kod rozpoznaje sekwencje START.
//- Kod poprawnie zamienia sekwencje nukleotydów między miejscem START a STOP na odpowiednie aminokwasy.
//- Analiza sekwencji kończy się na sekwencji STOP.
//- Projekt po zatrzymaniu podaje całą listę wykrytych aminokwasów wraz z ich ilością.
//Do tego :
//-Student rozumie swój własny kod i jest w stanie go przedstawić prowadzącemu.
//- Projekt znajduje się na Githubie studenta.
//- Projekt wykorzystuje pliki typu.h i.c do deklarowania stałych i funkcji wykorzystywanych w projekcie.

#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	string dna = wczytajDNA("DNA_przyklad.txt");

	if (dna == "") {
		cout << "Nie można wczytać sekwencji DNA z pliku." << endl;
		return 1;
	}

	string mrna = zamienNaMRNA(dna);

	cout << "Sekwencja mRNA: " << mrna << endl;
	cout << "Sekwencja DNA: " << dna << endl;

	tlumacz(mrna);

	return 0;

}




