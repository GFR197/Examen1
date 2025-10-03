#include <iostream>

int main(){
    // Arreglo con los números del 1 al 10
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int contador_pares = 0;
    int contador_impares = 0;

    std::cout << "Numeros pares encontrados en el arreglo:" << std::endl;
    
    // Usamos un bucle for each para recorrer el arreglo
    for (int x : numeros) {
        if (x % 2 == 0) {
            ++contador_pares;
            std::cout << x << " ";
        } else {
            // Si no es par, es impar
            ++contador_impares;
        }
    }
    
    std::cout << "\nTotal de pares: " << contador_pares << std::endl;

    // Imprimimos los números impares y su total
    std::cout << "\nNumeros impares encontrados en el arreglo:" << std::endl;
    for (int x : numeros) {
        if (x % 2 != 0) {
            std::cout << x << " ";
        }
    }
    std::cout << "\nTotal de impares: " << contador_impares << std::endl;
    return 0;
}
