#include <iostream>
#include <string>
#include <list>
#include <cstdio>
#include <cstdlib>

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  std::string input{};
  std::string numbers = "1234567890";
  std::list<char> orderNormal{};
  std::list<char> orderBack{};

  printf("Vnesi stevilo\n");
  std::getline(std::cin, input);

  for (auto &cha : input) {
    if (numbers.find(cha) == std::string::npos) {
      printf("Vnos vsebuje nekaj kaj ni stevilka\n\n");
      printf("Pritisni katerokoli tipko za nadeljevanje\n");
      std::getchar();
      std::exit(1);
    }
    orderNormal.push_back(cha);
    orderBack.push_front(cha);
  }

  printf("Pravi red\n");
  for (auto &ele : orderNormal)
    std::cout << ele;
  std::cout << std::endl;

  printf("Obrnjen red\n");
  for (auto &ele : orderBack)
    std::cout << ele;
  std::cout << std::endl;

  printf("Pritisni katerokoli tipko za nadeljevanje\n");
  std::getchar();

  return EXIT_SUCCESS;
}
