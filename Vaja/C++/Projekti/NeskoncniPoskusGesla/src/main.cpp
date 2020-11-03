#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <random>

int main() {
  std::string password{};

  std::ifstream passFileRead("geslo.txt");
  if (passFileRead.is_open()) {
    std::getline(passFileRead, password);
    passFileRead.close();
  } else
    password = "admin123";

  std::string input{};
  int tries = 0;

  while (true) {
    if (tries >= 3) {
      std::ofstream passFileWrite("geslo.txt");
      if (passFileWrite.is_open()) {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_real_distribution<double> dist(1, 256);

        password = std::to_string((int)dist(mt));

        passFileWrite << password;
        passFileWrite.close();
        printf("Geslo se je spremenilo!\n");
      }

      break;
    }

    printf("Vnesi geslo ");
    std::getline(std::cin, input);

    if (input != password) {
      printf("Geslo NI pravilno\n");
      tries++;
      continue;
    }

    printf("Geslo JE pravilno\n");
    break;
  }

  printf("Pritisni katerokoli tipko za nadeljevanje");
  getchar();

  return EXIT_SUCCESS;
}
