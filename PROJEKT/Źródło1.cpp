#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;

string wczytajDNA(string nazwaPliku) {
    ifstream plik(nazwaPliku);

    if (!plik.is_open()) {
        cout << "Nie można otworzyć pliku." << endl;
        return "";
    }

    string dna;
    plik >> dna;
    plik.close();

    return dna;
}

string zamienNaMRNA(string dna) {
    string mrna = "";

    for (size_t i = 0; i < dna.length(); i++) {
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

    else if (kodon == "UUA" || kodon == "UUG" ||
        kodon == "CUU" || kodon == "CUC" ||
        kodon == "CUA" || kodon == "CUG") return "Leucyna";

    else if (kodon == "AUU" || kodon == "AUC" || kodon == "AUA") return "Izoleucyna";

    else if (kodon == "GUU" || kodon == "GUC" ||
        kodon == "GUA" || kodon == "GUG") return "Walina";

    else if (kodon == "UCU" || kodon == "UCC" ||
        kodon == "UCA" || kodon == "UCG" ||
        kodon == "AGU" || kodon == "AGC") return "Seryna";

    else if (kodon == "CCU" || kodon == "CCC" ||
        kodon == "CCA" || kodon == "CCG") return "Prolina";

    else if (kodon == "ACU" || kodon == "ACC" ||
        kodon == "ACA" || kodon == "ACG") return "Treonina";

    else if (kodon == "GCU" || kodon == "GCC" ||
        kodon == "GCA" || kodon == "GCG") return "Alanina";

    else if (kodon == "UAU" || kodon == "UAC") return "Tyrozyna";

    else if (kodon == "CAU" || kodon == "CAC") return "Histydyna";

    else if (kodon == "CAA" || kodon == "CAG") return "Glutamina";

    else if (kodon == "AAU" || kodon == "AAC") return "Asparagina";

    else if (kodon == "AAA" || kodon == "AAG") return "Lizyna";

    else if (kodon == "GAU" || kodon == "GAC") return "Kwas asparaginowy";

    else if (kodon == "GAA" || kodon == "GAG") return "Kwas glutaminowy";

    else if (kodon == "UGU" || kodon == "UGC") return "Cysteina";

    else if (kodon == "UGG") return "Tryptofan";

    else if (kodon == "CGU" || kodon == "CGC" ||
        kodon == "CGA" || kodon == "CGG" ||
        kodon == "AGA" || kodon == "AGG") return "Arginina";

    else if (kodon == "GGU" || kodon == "GGC" ||
        kodon == "GGA" || kodon == "GGG") return "Glicyna";

    else if (kodon == "UAA" || kodon == "UAG" || kodon == "UGA") return "STOP";

    else return "Nieznany";
}

void tlumacz(string mrna) {
    string nazwyAA[20] = {
        "Metionina",
        "Fenyloalanina",
        "Leucyna",
        "Izoleucyna",
        "Walina",
        "Seryna",
        "Prolina",
        "Treonina",
        "Alanina",
        "Tyrozyna",
        "Histydyna",
        "Glutamina",
        "Asparagina",
        "Lizyna",
        "Kwas asparaginowy",
        "Kwas glutaminowy",
        "Cysteina",
        "Tryptofan",
        "Arginina",
        "Glicyna"
    };

    int licznikAA[20] = { 0 };
    int dlugoscSekwencji[100] = { 0 };

    int liczbaSekwencji = 0;
    int lacznaLiczbaAA = 0;

    cout << endl;
    cout << "Tlumaczenie sekwencji:" << endl;

    if (mrna.length() < 3) {
        cout << "Sekwencja zbyt krotka do translacji." << endl;
        return;
    }

    for (size_t i = 0; i + 3 <= mrna.length(); i++) {
        string kodon = mrna.substr(i, 3);

        if (kodon == "AUG") {
            liczbaSekwencji++;

            cout << endl;
            cout << "Sekwencja aminokwasowa nr " << liczbaSekwencji << endl;
            cout << "START: pozycja " << i + 1 << " w mRNA" << endl;

            int liczbaAAwSekwencji = 0;
            bool znalezionoStop = false;

            for (size_t j = i; j + 3 <= mrna.length(); j += 3) {
                string kodonAA = mrna.substr(j, 3);
                string aminokwas = kodonNaAminokwas(kodonAA);

                if (aminokwas == "STOP") {
                    cout << "STOP: pozycja " << j + 1 << " w mRNA" << endl;

                    dlugoscSekwencji[liczbaSekwencji - 1] = liczbaAAwSekwencji;

                    cout << "Dlugosc tej sekwencji: "
                        << liczbaAAwSekwencji << " aminokwasow" << endl;

                    znalezionoStop = true;

                    // Po znalezieniu STOP nie konczymy programu.
                    // Przesuwamy zewnetrzna petle za STOP i szukamy kolejnego START.
                    i = j + 2;
                    break;
                }

                cout << kodonAA << " -> " << aminokwas << endl;

                liczbaAAwSekwencji++;
                lacznaLiczbaAA++;

                for (int k = 0; k < 20; k++) {
                    if (aminokwas == nazwyAA[k]) {
                        licznikAA[k]++;
                    }
                }
            }

            if (!znalezionoStop) {
                cout << "Nie znaleziono STOP po tym START." << endl;
                dlugoscSekwencji[liczbaSekwencji - 1] = liczbaAAwSekwencji;
            }
        }
    }

    cout << endl;
    cout << "podsumowanie" << endl;

    if (liczbaSekwencji == 0) {
        cout << "Nie znaleziono zadnej sekwencji START." << endl;
        return;
    }

    cout << "Liczba wykrytych sekwencji aminokwasowych: "
        << liczbaSekwencji << endl;

    for (int i = 0; i < liczbaSekwencji; i++) {
        cout << "Dlugosc sekwencji nr " << i + 1
            << ": " << dlugoscSekwencji[i]
            << " aminokwasow" << endl;
    }

    cout << "Laczna liczba aminokwasow: "
        << lacznaLiczbaAA << endl;

    cout << endl;
    cout << "Czestosc wystepowania aminokwasow:" << endl;

    for (int i = 0; i < 20; i++) {
        if (licznikAA[i] > 0) {
            double procent = 0;

            if (lacznaLiczbaAA > 0) {
                procent = (double)licznikAA[i] / lacznaLiczbaAA * 100;
            }

            cout << nazwyAA[i] << ": "
                << licznikAA[i] << " razy, "
                << procent << "%" << endl;
        }
    }
}