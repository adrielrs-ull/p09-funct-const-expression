/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 8 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa calcula el producto escalar de dos vectores del mismo tamaño
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <vector>
#include <cstdlib>

/**
 * @brief VectoresIguales verifica que los vectores sean del mismo tamaño
 * @param Toma como parametros el número de parámetros introducidos por terminal
 * @return Devuelve un valor booleano dependiendo si son o no iguales los vectores
 */


bool VectoresIguales(const int argc) {
  if ((argc - 1) % 2 == 0) {
    return true;
  }
return false;
}

/**
 * @brief ProductoEscalar calcula el producto escalar de los vectores introducidos
 * @param Los parametros usados
 * @return Devuelve el resultado del producto escalar
 */

int ProductoEscalar(const int argc, char *argv[]) {
  std::vector<int> vector1;
  for (int i{1}; i <= (argc - 1) / 2; i++) {
    vector1.emplace_back(std::atoi(argv[i]));
  }
  std::vector<int> vector2;
  for (int i{argc - 1}; i > (argc - 1) / 2; i--) {
    vector2.emplace_back(std::atoi(argv[i]));
  }


  int producto{0};
  int size = vector1.size();
  for (int i{0}; i <= size - 1; i++) {
      producto += (vector1[i] * vector2[i]);
    }
    return producto;
}

int main(int argc, char* argv[]) {
  if (!VectoresIguales(argc)) {
    std::cout << "Los vectores no son del mismo tamaño" << std::endl;
  } else {
   std::cout << ProductoEscalar(argc, argv) << std::endl;  
  } 
  return 0;
}
