#include <iostream>
#include <string>
#include <cstdio>

#include "Utils.h"

int main() {

	std::system("chcp 65001");
	std::system("CLS");

	std::string alphabet = "abcdefghijklmnopqrstuvwxyz ";
	std::string input;
	std::string setMoveFactor;
	std::string output;

	Utils::cPrint("Prosim vnesi stavek za sifriranje");
	std::getline(std::cin, input);

	Utils::cPrint("Prosim vnesi stevilo za premik");
	std::getline(std::cin, setMoveFactor);

	for (auto ch : input) {
		std::size_t found = alphabet.find(ch);
		int moveFactor = std::stoi(setMoveFactor);

		while ((found + moveFactor) >= alphabet.length())
			moveFactor -= alphabet.length();

		output +=  alphabet.at(moveFactor + found);
	}

	Utils::cPrint(output);

	Utils::cPrint("Pritisni katerokoli tipko za nadeljevanje");
	std::getchar();

	return EXIT_SUCCESS;
}
