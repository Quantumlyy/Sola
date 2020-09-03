#include <iostream>
#include <string>
#include <cstdio>

int main() {
  std::system("chcp 65001");
  std::system("CLS");

  std::string alphabet = "abcdefghijklmnopqrstuvwxyz ";
  std::string input{};
  std::string setMoveFactor{};
  const char *output{};

  printf("Prosim vnesi stavek za sifriranje");
  std::getline(std::cin, input);

  printf("Prosim vnesi stevilo za premik");
  std::getline(std::cin, setMoveFactor);

  for (auto &ch : input) {
    std::size_t found = alphabet.find(ch);
    int moveFactor = std::stoi(setMoveFactor);

    while ((found + moveFactor) >= alphabet.length())
      moveFactor -= alphabet.length();

    output += alphabet.at(moveFactor + found);
  }

  printf("%s", output);

  printf("Pritisni katerokoli tipko za nadeljevanje");
  getchar();

  return EXIT_SUCCESS;
}
