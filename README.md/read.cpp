#include <iostream>

int add(int *x, int y) {
    int suma = 0;
    for (int i = 0; i < y; i++) {
        suma += *(x + i);
    }
    return suma;
}

int main () {
    int n;

    std::cout << "Ingrese el tamaño:\n";
    std::cin >> n;

    int *arre = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> *(arre + i);
    }

    int resultado = add(arre, n);
    
    std::cout << "La suma es: " << resultado << std::endl;

    delete[] arre;
    return 0;
}
