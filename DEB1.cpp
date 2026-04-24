
#include <iostream>

int main() {
	double l1, l2;
	int n;

	std::cin >> l1;
	std::cin >> l2;

	std::cin >> n;
    // Wczytanie i przetwarzanie w pętli dopóki dostępne są dane wejściowe
	for (int i = 1; i < n;) {
		double wynik1 = l1 * 2.0;
		double wynik2 = l2 * 3.0;

		std::cout << "Pierwsza * 2 = " << wynik1 << std::endl;
		std::cout << "Druga * 3  = " << wynik2 << std::endl;

		std::cout << "iteracja nr: " << i << std::endl;

		++i;
		}	


	return 0;
}


