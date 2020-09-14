// 03. Vaja Nejc Drobnic - Kocka2Meta (2UPN03Kocka2Meta)

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  std::srand(time(nullptr));

  printf("Kocka 1: %i\n", 1 + rand() % 6);
  printf("Kocka 2: %i\n", 1 + rand() % 6);

  return 0;
}
