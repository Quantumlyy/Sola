// 02. Vaja Nejc Drobnic - Računske operacije; Sestevalnik (2UPN02Sestevalnik)

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  double Vrednost1{};
  double Vrednost2{};
  double Rezultat{};

  printf("Vnesi prvo število: ");
  std::cin >> Vrednost1;

  printf("Vnesi drugo število: ");
  std::cin >> Vrednost2;

  Rezultat = Vrednost1 + Vrednost2;
  printf("Vaš rezultat je: %1.2f\n", Rezultat);

  return EXIT_SUCCESS;
}
