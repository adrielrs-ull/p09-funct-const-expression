#include <iostream>
#include <vector>
#include <cmath>

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 15 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa me imprimirá la distancia entre el vector1 y vector2
  * @bug There are no known bugs
  * 
  */


/**
 * @brief Esta función calculará la distancia entre los dos vectores utilizando
 * la fórmula dada
 * @param Toma como parámetros dos vectores pasados por referencia
 * @return Devuelve en caso de que el tamaño de los vectores sean iguales la
 * distancia tipo double, si no, devuelve "-1.0"
 */


double Distancia(const std::vector<int>& vector1, const std::vector<int>& vector2) {
  if (vector1.size() == vector2.size()) {
    double distancia, suma{0};
    for (int i{0}; i < vector1.size(); i++) {
      suma += std::pow((vector1[i] - vector2[i]), 2);
    }
    distancia = std::sqrt(suma);
    return distancia;
  }
  return -1.0;
}


int main() {
  std::vector<int> vector1 = {0, 1};
  std::vector<int>  vector2 = {1, 0};
  int numero1, numero2;
  std::cout << Distancia(vector1, vector2) << std::endl;
  return 0;
}
