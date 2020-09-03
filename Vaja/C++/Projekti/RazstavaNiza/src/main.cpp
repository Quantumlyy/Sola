#include <iostream>
#include <string>

int main() {
  std::system("chcp 65001");
  std::system("CLS");

  std::string input;

  printf("Prosim vnesi niz za analizo\n");
  std::getline(std::cin, input);

  printf("Dolzina niza je: %llu\n", input.length());
  printf("Prva crka niza je: \"%.*s\"\n", 1, input.c_str());
  printf("Zadnja crka niza je: \"%s\"\n",
         &(input.c_str()[strlen(input.c_str()) - 1]));

  printf("Tiskam crke iz niza: \"%s\"\n\n", input.c_str());

  for (char &l : input) {
    printf("%c\n", l);
  }

  return EXIT_SUCCESS;
}
