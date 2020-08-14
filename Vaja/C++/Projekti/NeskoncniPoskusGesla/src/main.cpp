#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

int main() {
    std::system("chcp 65001");
    std::system("CLS");

	std::string password{};

    std::ifstream passFileRead ("geslo.txt");
    if (passFileRead.is_open()) {
        std::getline(passFileRead, password);
        passFileRead.close();
    } else password = "admin123";

	std::string input{};
	int tries = 0;

	while (true) {
		if (tries >= 3) {

            std::ofstream passFileWrite ("geslo.txt");
            if (passFileWrite.is_open()) {
                password = std::to_string(std::rand());
                passFileWrite << password;
                passFileWrite.close();
                printf("Geslo se je spremenilo!");
            }

			break;
		}

		printf("Vnesi geslo");
		std::getline(std::cin, input);
		
		if (input != password) {
			printf("Geslo NI pravilno");
			tries++;
			continue;
		}

		printf("Geslo JE pravilno");
		break;
	}

	printf("Pritisni katerokoli tipko za nadeljevanje");
	getchar();

	return EXIT_SUCCESS;
}
