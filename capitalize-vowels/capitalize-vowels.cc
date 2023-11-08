/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 8 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa cambia las vocales a mayúsculas y las consonantes a minúsculas
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <string>

/**
 * @brief La función CheckCorrectParameters comprueba que el número de parámetros es el correcto
 * @param Toma como parámetros el número de parámetros introducidos
 * @return Devuelve true si el número es correcto y si no false
 */

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}

/**
 * @brief La función VowelMin comprueba que el caracter sea una letra minúscula y devuelve true
 * @param Toma como parámetro un caracter de una cadena
 * @return Devuelve true si es minúscula y si no un false
 */

bool VowelMin(char letra) {
  switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    return true;
  }
  return false;
}

/**
 * @brief La función VowelMax comprueba que el caracter sea una letra mayúscula y devuelve true
 * @param Toma como parámetro un caracter de una cadena
 * @return Devuelve true si es mayúscula y si no un false
 */

bool VowelMax(char letra) {
  switch (letra) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    return true;
  }
  return false;
}

/**
 * @brief La función ChangeLetter cambia el caracter dependiendo de si es una letra y si esta es vocal o no
 * @param Toma como parámetros una cadena string introducida
 * @return Devuelve la cadena transformada
 */

std::string ChangeLetter(std::string cadena) {
  for (char& caracter : cadena) {
    if (VowelMin(caracter)) {
      caracter -= 32;
    } else if (!VowelMin(caracter) && !VowelMax(caracter)&& caracter >= 65 && caracter <= 90) {
      caracter += 32;
    } 
  }
  return cadena;
}

/**
 * @brief La función main tomará las funciones previas y cogerá argv[1] como la
 * cadena a estudiar y se asignará a una cadena "cadena" que será la introducida
 * en la función ChangeLetter
 * @param Toma como parámetros el nº de parámetros y un puntero hacia los
 * parámetros
 * @return Devuelve la cadena resultante
 */

int main(int argc, char* argv[]) {
  if (!CheckCorrectParameters(argc, argv, 2)) {
    std::cout << "Wrong input" << std::endl;
  } else {
    std::string cadena = argv[1];
    std::cout << ChangeLetter(cadena) << std::endl;
  }
  return 0;
}
