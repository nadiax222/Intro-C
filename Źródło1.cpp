#include <iostream>
#include <fstream>
#include <string>
#include "funkcje.h"

using namespace std;

string wczytajDNA(string nazwaPliku) {
	ifstream plik(nazwaPliku);

	if (!plik.is_open()) {
		cout << "Nie można otworzyć pliku: " << endl;
		return;
	}
	string dna;
	plik >> dna;
	plik.close();

	return dna;
}

string zamienNaMRNA(string dna) {
	string mrna = "";

	for (int i=0; i < dna.length(); i++) {
		if (dna[i] == 'A') mrna += 'U'; 
		else if (dna[i] == 'T') mrna += 'A';
		else if (dna[i] == 'C') mrna += 'G'; 
		else if (dna[i] == 'G') mrna += 'C';
	}
	return mrna;
}

string kodonNaAminokwas(string kodon) {
	if (kodon == "AUG") return "Metionina";
	else if (kodon == "UUU" || kodon == "UUC") return "Fenyloalanina";
	else if (kodon == "UUA" || kodon == "UUG") return "Leucyna";
	else if (kodon == "UCU" || kodon == "UCC" || kodon == "UCA" || kodon == "UCG") return "Seryna";
	else if (kodon == "UAU" || kodon == "UAC") return "Tyrozyna";
	else if (kodon == "UGU" || kodon == "UGC") return "Cysteina";
	else if (kodon == "UGG") return "Tryptofan";
	else if (kodon == "UAA" || kodon == "UAG" || kodon == "UGA") return "STOP";
	else return "";
}