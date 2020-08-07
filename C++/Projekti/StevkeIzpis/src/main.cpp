#include <iostream>
#include <string>
#include <list>
#include <cstdio>
#include <cstdlib>

#include "Utils.h"

int main() {
	std::string input{};
	std::string numbers = "1234567890";
	std::list<char> orderNormal{};
	std::list<char> orderBack{};

	Utils::cPrint("Vnesi stevilo");
	std::getline(std::cin, input);

	for (auto &cha : input) {
		if (numbers.find(cha) == std::string::npos) {
			Utils::cPrint("Vnos vsebuje nekaj kaj ni stevilka");
			Utils::cPrint();
			Utils::cPrint("Pritisni katerokoli tipko za nadeljevanje");
			std::getchar();
			std::exit(1);
		}
		orderNormal.push_back(cha);
		orderBack.push_front(cha);
	}

	Utils::cPrint("Pravi red");
	for (auto &ele : orderNormal) std::cout << ele;
	std::cout << std::endl;

	Utils::cPrint("Obrnjen red");
	for (auto &ele : orderBack) std::cout << ele;
	std::cout << std::endl;

	Utils::cPrint("Pritisni katerokoli tipko za nadeljevanje");
	std::getchar();

	return EXIT_SUCCESS;
}
