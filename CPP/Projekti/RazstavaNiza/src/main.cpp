#include <iostream>
#include <string>

#include "Utils.h"

int main() {
	std::string input = "";

	Utils::cPrint("Prosim vnesi niz za analizo");

	std::getline(std::cin, input);

	Utils::cPrint("Tiskam crke iz niza: \"" + input + "\"");
	for (std::string::size_type l = 0; l < input.length(); l++)
		Utils::cPrint(input[l]);

	return EXIT_SUCCESS;
}
