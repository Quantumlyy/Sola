// 02. Vaja Nejc Drobnic - Pretvorba; Celsius To Kelvin (2UPN02CelsiusKelvin)

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
  std::system("chcp 65001");
  std::system("CLS");

  static double KelvinBaseline = 273.15;
  double CelsiusIn{};

  printf("Vnesite temperaturo Celsius: ");
  std::cin >> CelsiusIn;

  printf("Temperatura v Kelvinu: %1.4fK\n", KelvinBaseline + CelsiusIn);

  return EXIT_SUCCESS;
}
