// 02. Vaja Nejc Drobnic - Računske operacije; Interaktivni Kalkulator (2UPN02InteraktivniKalkulator)

#include <cstdio>
#include <cstdlib>
#include <iostream>

constexpr unsigned int str2int(const char *str, int h = 0) {
  return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  double Vrednost1{};
  double Vrednost2{};
  std::string Operacija{};
  double Rezultat{};

  printf("Vnesite prvo število: ");
  std::cin >> Vrednost1;

  printf("Vnesite drugo število: ");
  std::cin >> Vrednost2;

  printf("Vnesite računsko operacijo (+, -, *, /): ");
  std::cin >> Operacija;

  switch (str2int(Operacija.c_str())) {
    case str2int("+"):
      Rezultat = Vrednost1 + Vrednost2;
      break;
    case str2int("-"):
      Rezultat = Vrednost1 - Vrednost2;
      break;
    case str2int("*"):
      Rezultat = Vrednost1 * Vrednost2;
      break;
    case str2int("/"):
      Rezultat = Vrednost1 / Vrednost2;
      break;
    default:
      printf("Neveljavna opracija %s", Operacija.c_str());
      exit(1);
  }

  printf("Vaš rezultat operacije %s je %1.4f", Operacija.c_str(), Rezultat);

  return EXIT_SUCCESS;
}
