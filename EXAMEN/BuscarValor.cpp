#include <iostream>

int main() {
    //Declaramos matriz tridimensional

    const int CAPAS = 3;
    const int FILAS = 3;
    const int COLUMNAS = 3;

    // Asignamos valores fijos a la matriz 
    int matriz3D[CAPAS][FILAS][COLUMNAS] = {
        {   // Capa 0
            { 1,  2,  3},
            { 4,  5,  6},
            { 7,  8,  9}
        },
        {   // Capa 1
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {   // Capa 2
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    //  Búsqueda del Valor
    int valor_a_buscar;
    std::cout << "Introduce el valor que deseas buscar en la matriz: ";
    std::cin >> valor_a_buscar;

    // Bandera para saber si encontramos el valor
    bool encontrado = false;

    std::cout << "\nBuscando el valor " << valor_a_buscar << " en la matriz 3x3x3..." << std::endl;

    // Recorremos toda la matriz con 3 bucles para revisar cada posición.
    for (int i = 0; i < CAPAS; ++i) {       // Bucle para las capas
        for (int j = 0; j < FILAS; ++j) {   // Bucle para las filas
            for (int k = 0; k < COLUMNAS; ++k) { // Bucle para las columnas
                
                // Comparamos el elemento actual de la matriz con el valor que buscamos.
                if (matriz3D[i][j][k] == valor_a_buscar) {
                    std::cout << "Valor encontrado en la posicion: ";
                    std::cout << "Ubicacion: [Capa " << i << "][Fila " << j << "][Columna " << k << "]" << std::endl;
                    encontrado = true; 
                }
            }
        }
    }

    
    
    
    if (!encontrado) {
        std::cout << "El valor " << valor_a_buscar << " no se encuentra en la matriz." << std::endl;
    }

    return 0;
}
