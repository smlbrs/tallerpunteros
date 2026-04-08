#include <iostream>

int add (int *x, int y) {
    int add = 0;
    for (int i = 0; i < add; i++) {
        add += *x + i;
}
    return add;
}

int main () {
    int a;

    std::cout<<"ingrese el tamaño: \n";
    std::cin>>a;

    int *arre = new int [n];

    for (int i = 0; i < n; i++) {
        cin>>*arre + i;
    }

    int resultado = add(arre, n);
    
    std::cout<<"la suma es: "<<resultado<<std::endl;

    delete[n] arre;
    return 0;

}
