#include <iostream>

int E (int *arr, int n) {
    if (n <= 0) {
        std::cout << "Error: arreglo vacío\n";
        return 0;
    }

    int mayor = *arr; // primer elemento

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > mayor) {
            mayor = *(arr + i);
        }
    }

    return mayor;
}

int main() {
    int n;
    std::cout << "Ingrese el tamaño: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "No hay elementos\n";
        return 0;
    }

    int *arre = new int[n];

    std::cout << "Ingrese los valores:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> *(arre + i);
    }

    int mayor = E(arre, n);

    std::cout << "El mayor es: " << mayor <<std::endl;

    delete[] arre;
    return 0;
}
