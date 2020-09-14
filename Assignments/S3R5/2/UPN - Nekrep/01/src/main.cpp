// 01. Vaja Nejc Drobnic - Prvi Program (2UPN01) - To je komentar

#include <cstdio>
#include <cstdlib>

int main() {
#ifdef _WIN32
  std::system("chcp 65001");
  std::system("CLS");
#endif //!_WIN32

  // Tu vstavi poimenovane podatke
  printf("Ime in Priimek\n");
  printf("Naslov\n");
  printf("Postna stevilka in Mesto\n");

  return EXIT_SUCCESS;
}
