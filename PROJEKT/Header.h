#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <string>
using namespace std;

string wczytajDNA(string nazwaPliku);
string zamienNaMRNA(string dna);
string kodonNaAminokwas(string kodon);
void tlumacz(string mrna);

#endif
