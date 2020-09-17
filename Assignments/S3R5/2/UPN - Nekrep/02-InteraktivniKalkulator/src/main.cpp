// 02. Vaja Nejc Drobnic - Računske operacije; Interaktivni Kalkulator (2UPN02InteraktivniKalkulator)

#include <cstdio>
#include <cstdlib>
#include <iostream>

inline char Operacija;

double checkOperation(double Vrednost1, double Vrednost2) {
  double Rezultat{};

  printf("Vnesite računsko operacijo (+, -, *, /): ");
  std::cin >> Operacija;

  switch (Operacija) {
    case '+':
      Rezultat = Vrednost1 + Vrednost2;
      break;
    case '-':
      Rezultat = Vrednost1 - Vrednost2;
      break;
    case '*':
      Rezultat = Vrednost1 * Vrednost2;
      break;
    case '/':
      Rezultat = Vrednost1 / Vrednost2;
      break;
    default:
      std::cin.ignore(INT_MAX, '\n');
      printf("Neveljavna operacija %c\nProgram vas bo znova prosil za operacijo\n\n", Operacija);
      Rezultat = checkOperation(Vrednost1, Vrednost2);
  }

  return Rezultat;
}

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  double Vrednost1{};
  double Vrednost2{};

  printf("Vnesite prvo število: ");
  std::cin >> Vrednost1;

  printf("Vnesite drugo število: ");
  std::cin >> Vrednost2;

  double Rezultat = checkOperation(Vrednost1, Vrednost2);

  printf("\nVaš rezultat operacije je %1.4f (%1.4f %c %1.4f)",
		Rezultat, Vrednost1, Operacija, Vrednost2);

  return EXIT_SUCCESS;
}
