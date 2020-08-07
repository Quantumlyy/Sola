#include <iostream>
#include <string>

#include "Utils.h"

int main() {
	std::string input{};

	Utils::cPrint("Prosim vnesi niz za analizo");

	std::getline(std::cin, input);

	Utils::cPrint(&"Dolzina niza je: " [ static_cast<char>(input.length()) ]);
	Utils::cPrint(std::string("Prva crka niza je: \"") + input.at(1) + "\"");
	Utils::cPrint(std::string("Zadnja crka niza je: \"") + input.at(input.length() - 1) + "\"");

	Utils::cPrint("Tiskam crke iz niza: \"" + input + "\"");

	for (char &l : input) {
        Utils::cPrint(l);
    }

	return EXIT_SUCCESS;
}
