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


