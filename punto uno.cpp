#include <iostream>

void intercambiar(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main () {

    int x = 19;
    int y = 20;

    std::cout<<"antes del intercambio"<<std::endl;
    std::cout<<"x = " << x << ",y = " << y <<std::endl;

    intercambiar (&x, &y);

    std::cout<<"despues del intercambio"<<std::endl;
    std::cout<<"x = " << x << ",y = " << y <<std::endl;


    return 0;
}
