#include <iostream>

int main() {
    // Declaramos e inicializamos la matriz.
    // Definimos tamano de matriz
    const int FILAS = 3;
    const int COLUMNAS = 3;

    // Asignamos valores fijos a la matriz.
    int matriz[FILAS][COLUMNAS] = {
        {10, 20, 30}, // Fila 0
        { 4,  5,  6}, // Fila 1
        { 7,  8,  9}  // Fila 2
    };
    
    // Impresión de la Matriz
    std::cout << "Matriz original:" << std::endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Cálculo y Suma de Columnas
    std::cout << "\nSuma de cada columna:" << std::endl;
    // primer ciclorecorre las columnas de izquierda a derecha.
    for (int j = 0; j < COLUMNAS; ++j) {
        int suma_columna = 0; 
        //Recorre de arriba abajo
        for (int i = 0; i < FILAS; ++i) {
            
            suma_columna += matriz[i][j];
        }
       
        std::cout << "Suma de la columna " << j + 1 << ": " << suma_columna << std::endl;
    }

    return 0;
}
