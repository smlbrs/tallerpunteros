#include <iostream>

int duplicar(int x) {
    return x * 2;
}

int triplicar(int x) {
    return x * 3;
}

void A(int *arr, int n, int (*f)(int)){
    for(int i = 0; i < n; i++)
        *(arr + i) = f(*(arr + i));
}

int main () {
    int n;
    std::cout<<"Ingresa el tamano: ";
    std::cin>>n;

    if (n <= 0) {
        std::cout<< "Tamaño inválido\n";
        return 0;
    }

    int *arre = new int[n];

    std::cout<<"Ingresa los valores:\n";
    for (int i = 0; i < n; i++) {
        std::cin>> *(arre + i);
    }

    A(arre, n, duplicar);

    std::cout<<"Duplicados:\n";
    for (int i = 0; i < n; i++) {
        std::cout<< *(arre + i) << " ";
    }

    std::cout<<"\n";

    A(arre, n, triplicar);

    std::cout<<"Triplicados:\n";
    for (int i = 0; i < n; i++) {
        std::cout<<*(arre + i) << " ";
    }

    delete[] arre;
    return 0;
}
