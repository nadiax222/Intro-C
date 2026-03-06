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

    for (char nucleotide : dna) {
        if (nucleotide == 'A') countA++;
        else if (nucleotide == 'T') countT++;
        else if (nucleotide == 'G') countG++;
        else if (nucleotide == 'C') countC++;
    }
    std::cout << "Count of A: " << countA << std::endl;
    std::cout << "Count of T: " << countT << std::endl;
    std::cout << "Count of G: " << countG << std::endl;
    std::cout << "Count of C: " << countC << std::endl;
    return 0;
}

