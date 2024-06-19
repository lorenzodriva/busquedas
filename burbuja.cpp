#include <iostream>

using namespace std;

// Función que implementa el algoritmo de ordenamiento por burbuja
void ordenamientoBurbuja(int tablaNumeros[], int largoDelArray) {

    // Primer bucle for para recorrer todo el array
    for(int i = 0; i < largoDelArray; i++) {

        // Segundo bucle for para realizar comparaciones y posibles intercambios
        for (int j = 0; j < largoDelArray - 1; j++) {

            // Si el elemento actual es mayor que el siguiente, se intercambian
            if (tablaNumeros[j] > tablaNumeros[j + 1]) {

                // Variable temporal para realizar el intercambio
                int datoTemporal = tablaNumeros[j];
                tablaNumeros[j] = tablaNumeros[j + 1];
                tablaNumeros[j + 1] = datoTemporal;
            }
        }
    }
}

int main () {

    // Se declara un array de enteros con valores desordenados
    int tablaNumeros[] = {8, 32, 14, 16, 88, 90, 5};

    // Se calcula el tamaño del array dividiendo el tamaño total del array entre el tamaño de un elemento
    int largoArray = sizeof(tablaNumeros)/sizeof(*tablaNumeros); // El asterisco indica que se obtiene el tamaño de un elemento

    // Se imprime el array desordenado
    cout << "El array desordenado es: ";
    for (int i = 0; i < largoArray; i++) {
        cout << tablaNumeros[i] << " ";
    }

    cout << endl << endl;

    // Se llama a la función de ordenamiento por ordenamientoBurbuja
    ordenamientoBurbuja(tablaNumeros, largoArray);

    // Se imprime el array ordenado
    cout << "El array ordenado es: ";
    for (int i = 0; i < largoArray; i++) {
        cout << tablaNumeros[i] << " ";
    }

    return 0; // El programa termina correctamente
}
