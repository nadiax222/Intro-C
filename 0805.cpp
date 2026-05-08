// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

//zad.3 08.05
#include <iostream>
int main()
{
    int a = 10;
    int b = 20;

    int* wskaznik = &a;

    std::cout << "Adres zmiennej a: " << &a << std::endl;
    std::cout << "Adres zmiennej b: " << &b << std::endl;
    std::cout << "Wartosc wskaznika: " << wskaznik << std::endl;

    int* wskaznik_nowy = nullptr;

    std::cout << "Nowy wskaznik: "
        << wskaznik_nowy << std::endl;

    wskaznik_nowy = &b;

    std::cout << "wskaznik_nowy: "
        << wskaznik_nowy << std::endl;

    std::cout << "Wartosc pod wskaznikiem: "
        << *wskaznik_nowy << std::endl;

    return 0;
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
