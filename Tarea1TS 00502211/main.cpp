#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void){
    Matrix matriz;
    Matrix inversa;
    zeroes(matriz,3);

    matriz.at(0).at(0) = 2;
    matriz.at(0).at(1) = 2;
    matriz.at(0).at(2) = 3;
    matriz.at(1).at(0) = 4;
    matriz.at(1).at(1) = 5;
    matriz.at(1).at(2) = 6;
    matriz.at(2).at(0) = 7;
    matriz.at(2).at(1) = 8;
    matriz.at(2).at(2) = 9;

    cout << "Matriz original";
    cout << endl;
    showMatrix(matriz);
    cout << endl;
    cout << "Matriz inversa";
    cout << endl;
    inversaM(matriz,inversa);

    showMatrix(inversa);


    return 0;
}
