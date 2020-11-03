#ifdef _WIN32
#include <cstdio>
#include <io.h>
#endif
#include <cstdlib>
#include <iostream>
#include <cmath>

constexpr int _O_U16TEXT = 0x20000;

/*
 * Description Oct Dec Hex HTML
 * "latin small letter s with caron" 0541 353 0x161 &scaron;
 * "latin small letter c with caron" 0415 269 0x10D &#269;
 */

int main() {
#ifdef _WIN32
  _setmode(_fileno(stdout), _O_U16TEXT);
#elif __linux__
  std::locale oldLocale;
  setlocale(LC_ALL, "en_US.UTF-8");
#endif

  double K1{};
  double K2{};

  wprintf(L"Vnesite dolžino katete a (mm): ");
  std::cin >> K1;

  wprintf(L"Vnesite dolžino katete b (mm): ");
  std::cin >> K2;

  double H = std::sqrt((K1 * K1) + (K2 * K2));

  wprintf(L"Obseg: %1.2f mm\n", K1 + K2 + H);
  wprintf(L"Ploščina: %1.2f mm\n", (K1 * K2) / 2);
  wprintf(L"Diagonala: %1.2f mm\n", H);

#ifdef __linux__
  setlocale(LC_ALL, oldLocale.name().c_str());
#endif

  return EXIT_SUCCESS;
}
