#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

#include "Utils.h"

int main() {
	std::ofstream passFile;
	std::string password = "admin ";
	std::string input;
	int tries = 0;

	passFile.open("geslo.txt");

	while (true) {
		if (tries >= 3) {
			password = std::to_string(std::rand());
			passFile << password;
			passFile.close();
			Utils::cPrint("Geslo se je spremenilo!");
			break;
		}

		Utils::cPrint("Vnesi geslo");
		std::getline(std::cin, input);
		
		if (input != password) {
			Utils::cPrint("Geslo NI pravilno");
			tries++;
			continue;
		}
		Utils::cPrint("Geslo JE pravilno");
		break;
	}

	Utils::cPrint("Pritisni katerokoli tipko za nadeljevanje");
	std::getchar();

	return EXIT_SUCCESS;
}
