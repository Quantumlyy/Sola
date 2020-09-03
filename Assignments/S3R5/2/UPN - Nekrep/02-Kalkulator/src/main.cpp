// 02. Vaja Nejc Drobnic - Računske operacije; Kalkulator (2UPN02Kalkulator)

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
  std::system("chcp 65001");
  std::system("CLS");

  double Vrednost1{};
  double Vrednost2{};

  printf("Vnesite prvo število:\n");
  std::cin >> Vrednost1;

  printf("Vnesite drugo število:\n");
  std::cin >> Vrednost2;

  printf("Seštevek števil: %1.2f\n", Vrednost1 + Vrednost2);
  printf("Razlike števil: %1.2f\n", Vrednost1 - Vrednost2);
  printf("Zmnožek števil: %1.2f\n", Vrednost1 * Vrednost2);
  printf("Količnik števil: %1.2f\n", Vrednost1 / Vrednost2);

  return 0;
}
