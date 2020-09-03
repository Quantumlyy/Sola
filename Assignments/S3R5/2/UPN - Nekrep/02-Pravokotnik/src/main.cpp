// 02. Vaja Nejc Drobnic - Računske operacije; Pravokotnik (2UPN02Pravokotnik)

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
	std::system("chcp 65001");
	std::system("CLS");

	double Vrednost1{};
	double Vrednost2{};

	printf("Vnesite dolžino katete a (mm): ");
	std::cin >> Vrednost1;

	printf("Vnesite dolžino katete b (mm): ");
	std::cin >> Vrednost2;

	printf("Obseg: %1.2f mm\n", (Vrednost1 * 2) + (Vrednost2 * 2));
	printf("Dolžina: %1.2f mm\n", Vrednost1 * Vrednost2);
	printf("Diagonala: %1.2f mm\n", std::sqrt((Vrednost1 * Vrednost1) + (Vrednost2 * Vrednost2)));

	return 0;
}
