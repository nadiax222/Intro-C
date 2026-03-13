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


