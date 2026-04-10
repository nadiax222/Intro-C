// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // 1] Wczytywanie plikow tekstowych
    std::ifstream plik_txt("C:/Users/nadcic1.AMUAD/source/repos/Intro-C/Cpp_Nauka/C++_Zadania/plik.txt"); // podaj sciezke

    // Sprawdz czy plik sie otworzyl
    if (!plik_txt.is_open()) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }
    // Wyciaganie danych
    std::string linia_txt; // tworzymy obiekt do przechowywania wynikow linii

    while (std::getline(plik_txt, linia_txt)) {   // getline: czytanie, zapisywanie, warunki
        std::cout << linia_txt << std::endl;
    }

    plik_txt.close(); // zamykamy otwarty plik

    std::cout << linia_txt << std::endl;
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
