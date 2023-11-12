#include <iostream>
#include <cmath>

const double EPSILON = 1e-4;

/**
 * @brief La función calcula aproximadamente la raiz cuadrada de un número
 * @param Toma como parámetro una variable double
 * @return Devuelve el valor aproximado
 */

double approximateRoot(double number) {
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

int main() {
    double numero;
    std::cout << "Ingrese un número real mayor que cero: ";
    std::cin >> numero;

    double resultado = approximateRoot(numero);
    std::cout << "La raíz cuadrada aproximada es: " << resultado << std::endl;

    return 0;
}

