#include <iostream>
#include <vector>

bool VectorChange(std::vector<double>& vector, double min, double max) {
  double mayor{0};
  for (int j{0}; j < vector.size(); j++) {
    if (vector[j] > mayor) {
      mayor = vector[j];
    }
  }
  double menor = vector[0];
  for (int t{0}; t < vector.size(); t++) {
    if (vector[t] < menor) {
      menor = vector[t];
    }
  }
  if (menor == mayor) {
    return false;
  } else {
    for (int i{0}; i < vector.size(); i++) {
      vector[i] = min + (max - min) * (i - menor) / (mayor - menor);
    }
    return true;
  }
}

int main() {
  std::vector<double> vector = {1, 2, 3};
  double max{5};
  double min{4};
  if (VectorChange(vector, min, max)) {
    for (int i{0}; i < vector.size(); i++) {
      std::cout << vector[i] << std::endl;
    }
  }
  return 0;
}
