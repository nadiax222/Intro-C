//ex.1
#include <iostream> 
int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}

//ex.2
#include <iostream> 
#include <string>
int main() {
    int a = 7;
    float b = 7.5;
    char letter = 'A';
}

//ex.3
#include <iostream> 
#include <string>
int main() {
    int a = 3;
    int b = 11;
    int sum = a + b;
    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
    return 0;
}

//ex.4
#include <iostream> 
#include <string>
int main() {
    float x = 12;
    float y = 7;
    float division = x / y;
    std::cout << "Result of division: " << division << std::endl;
    float x = division;
    std::cout << "Value of x after assignment: " << x << std::endl;
    return 0;
}

//ex. 5
#include <iostream> 
#include <string>
int main() {
    char name[] = "Nadia";
    char surname[] = "Cichocka";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    return 0;
}

//PETLE 
//ex.1
#include <iostream>
#include <string>
int main() {
    std::string dna = "ATGCGATATCGGATCGA";
    int countA = 0;
    int countT = 0;
    int countG = 0;
    int countC = 0;

    for(int i = 0; i < dna.length(); i++) { //++i zwieksza o 1 implementacje 
        char nucleotide = dna[i];
        if (nucleotide == 'A') {
            countA++;
        } else if (nucleotide == 'T') {
            countT++;
        } else if (nucleotide == 'G') {
            countG++;
        } else if (nucleotide == 'C') {
            countC++;
        }
    }
    std::cout << "Count of A: " << countA << std::endl;
    std::cout << "Count of T: " << countT << std::endl;
    std::cout << "Count of G: " << countG << std::endl;
    std::cout << "Count of C: " << countC << std::endl;
    return 0;
}
//ex.2
#include <iostream>
#include <string>
int main() {
    std::string example = "dates are really great";
    int i = 0;
    while (i < example.length() && example[i] != 'g') {
        std::cout << example[i] << std::endl;
        i++;
    }
    return 0;
}

//ex.3
#include <iostream>
#include <string>
int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;

    int i = 0;
    int length = 0;

    do {
        length++;
        i++;
    } while (i < text.length());

    std::cout << "Length of the string: " << length << std::endl;
    return 0;
}

//13.03.2026

//ex.4
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int g = 0;
    int c = 0;
    float s = 0;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == 'G') g++;
        else if (input[i] == 'C') c++;
        ++s;
    }
    cout << "Liczba G: " << g << endl;
    cout << "Liczba C: " << c << endl;
    cout << "Zawartosc GC w sekwencji: " << (g + c) / s * 100 << "%" << endl;
    return 0;
}

//FUNKCJE
//ex.1
#include <iostream>
#include <string>
using namespace std;
int main() {
    char input;
    cout << "Enter a letter: " << endl;
    cin >> input;
    for (char input = 'A'; input <= 'Z'; input) {
        input++;
    }
    cout << ++input << endl; 
    return 0;
}

//ex.2
#include <iostream>
#include <string>
using namespace std;

string love() {
    return "I love c++ !";
} 
int main() {
    string lol = love();
    cout << lol << endl;
    return 0;
}

//ex.3
#include <iostream>
#include <string>
using namespace std;
int multiply(int a, int b) {
    return a * b;
}
int main() {
    cout << "Give me 2 numbers (separately)…: ";
    int x, y; 
    cin >> x >> y; 
    cout << "The product of " << x << "*" << y << " is...: " << multiply(x,y) << endl;
    return 0;
}

// ex.4
#include <iostream>
using namespace std;

bool jestPodzielnaPrzez4(int a) {
    return (a % 4 == 0);
}

int main() {
    int a;
    cout << "Give me a number: ";
    cin >> a;

    if (jestPodzielnaPrzez4(a)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}

// ex.5
#include <iostream>
#include <string>
using namespace std;   
int main(){
    string text;
    cout << "Enter your name and last name: " << endl;
    cin >> text;
    int pos = text.find('_');
    cout << "your initials are: " << text[0] << "." << text[pos + 1] << "." << endl; 
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>


// WCZYTYWANIE DANYCH Z PLIKU

int main()
{          
    // 1] Wczytywanie plikow tekstowych
    std::ifstream plik_txt("C:/Users/nadcic1/Desktop/plik.txt"); // podaj sciezke
    
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



    // 2] Wczytywanie plikow csv
    std::ifstream plik_csv("C:/Users/nadcic1/Desktop/plik.csv");

    // Sprawdz czy plik sie otworzyl
    if (!plik_csv.is_open()) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }

    // Wyciaganie danych
    std::string linia_csv; // tworzymy obiekt do przechowywania wynikow linii
    std::string kolumna1;  // tworzymy obiekt do przechowywania calosci
    
    while (std::getline(plik_csv, linia_csv)) { // while dziala tak dlugo jak getline zwraca TRUE
        kolumna1 += linia_csv + "\n";  // doklejaj od razu
    }

    plik_csv.close(); // zamykamy otwarty plik

    std::cout << kolumna1[1] << std::endl;
    std::cout << kolumna1 << std::endl;

    return 0;
}

