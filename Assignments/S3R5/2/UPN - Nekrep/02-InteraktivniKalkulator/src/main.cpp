// 02. Vaja Nejc Drobnic - Računske operacije; Interaktivni Kalkulator (2UPN02InteraktivniKalkulator)

#include <io.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>

#define _O_U16TEXT 0x20000

/*
 * Description Oct Dec Hex HTML
 * "latin small letter s with caron" 0541 353 0x161 &scaron;
 * "latin small letter c with caron" 0415 269 0x10D &#269;
 */

char Operacija;

inline double checkOperation(double Vrednost1, double Vrednost2) {
  double Rezultat{};

  wprintf(L"Vnesite ra\415unsko operacijo (+, -, *, /): ");
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
  _setmode(_fileno(stdout), _O_U16TEXT);

  double Vrednost1{};
  double Vrednost2{};

  wprintf(L"Vnesite prvo \541tevilo: ");
  std::cin >> Vrednost1;

  wprintf(L"Vnesite drugo \541tevilo: ");
  std::cin >> Vrednost2;

  double Rezultat = checkOperation(Vrednost1, Vrednost2);

  wprintf(L"\nVa\541 rezultat operacije je %1.4f (%1.4f %c %1.4f)",
		Rezultat, Vrednost1, Operacija, Vrednost2);

  return EXIT_SUCCESS;
}
