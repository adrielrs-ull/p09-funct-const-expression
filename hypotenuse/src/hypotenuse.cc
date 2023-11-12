#include <iostream>
#include <cmath>

/**
 * @brief Esta función calcula de forma aproximada la raiz cuadrada de un número 
 * @param Toma como parámetro una variable double
 * @return Devuelvo el valor aproximado
 */

double approximateRoot(double number) {
    const double EPSILON = 1e-4;
    double root = 1.0;
    double delta = 1.0;

    while (std::abs(root * root - number) > EPSILON) {
        if (delta > 0) {
            while (root * root < number) {
                root += delta;
            }
        } else {
            while (root * root > number) {
                root += delta;
            }
        }

        delta *= -0.5;
    }

    return root;
}

int main(int argc, char* argv[]) {
  double numero = pow(std::atoi(argv[1]), 2) * pow(std::atoi(argv[argc - 1]), 2);
  std::cout << approximateRoot(numero) << std::endl;
}
