#include <iostream>
#include <vector>

/**
 * @brief La función Formula realiza la formula requerida
 * @param Toma como parámetros el número y los parámetros introducidos en la
 * termianl
 * @return Devuelve el resultado de la fórmula
 */


int Formula(const int argc, char *argv[]) {
  int resultado{0};
  for (int i{1}; i < argc - 1; i++) {
    if (i == argc - 2) {
      resultado += std::atoi(argv[argc - 2]);
      return resultado;
    } else if (i == 1) {
      resultado += std::atoi(argv[1]) * std::atoi(argv[argc - 1]);
    } else {      
      resultado += std::atoi(argv[i]);
      resultado *= std::atoi(argv[argc - 1]);
   }
  }
  return resultado;
}

int main(int argc, char* argv[]) {
  std::cout << Formula(argc, argv) << std::endl;
 return 0;
}
