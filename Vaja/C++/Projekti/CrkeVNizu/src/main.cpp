#include <iostream>
#include <string>
#include <cstdio>
#include <map>

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  std::string input{};
  std::map<char, int> charMap{};
  std::string alphabet = " abcdefghijklmnopqrstuvwxyz";

  printf("Prosim vnesi stavek za analizo");
  std::getline(std::cin, input);

  for (auto &letter : alphabet) {
    charMap.insert(std::pair(letter, 0));
  }

  for (auto &l : input) {
    l = std::tolower(l);
    if (charMap.find(l) != charMap.end()) {
      charMap[l]++;
      continue;
    }
    charMap.insert(std::pair(l, 1));
  }

  for (auto &elem : charMap) {
    std::cout << "\"" << elem.first << "\"" << " " << "|" << " " << elem.second
        << std::endl;
  }

  printf("Stisni katerokoli tipko za nadeljevanje");
  getchar();

  return EXIT_SUCCESS;
}
