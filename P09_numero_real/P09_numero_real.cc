#include <iostream>
#include <string>

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 15 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief Este programa verificará que la cadena itroducida sea un número
  * decimal y real, y devolverá por pantalla el resultado, es decir si es real
  * devolverá verdadero y si no falso
  * @bug There are no known bugs
  * 
  */

/**
 * @brief Esta es la función principal del programa que tomará la referencia de
 * una cadena y verificará que todos sus caracteres cumplen las condiciones para
 * que la cadena sea un número real
 * @param Toma como parámetros la cadena introducida
 * @return Devuelve verdadero si es número real y falso si no lo es
 */


bool NumeroReal(const std::string& cadena) {
  int contador1{0}, contador2{0};
  for (char caracter : cadena) {
    if (caracter == '-') {
      contador1++;
    } else if (caracter == '.') {
      contador2++;
    }
  }
  if (contador1 > 1 || contador2 > 1) {
    return false;
  }
  int verificacion{0};
  for (char caracter : cadena) {
    if (verificacion >= 1 && caracter == '-') {
      return false;
    } else if ((caracter >= '0' && caracter <= '9') || caracter == '-' || caracter == '.') {
      verificacion++;
    }
  }
  if (verificacion == cadena.length()) {
    return true;
  }
  return false;
}

int main() {
  std::string cadena;
  std::cin >> cadena;
  std::cout << NumeroReal(cadena) << std::endl;
  return 0;
}
