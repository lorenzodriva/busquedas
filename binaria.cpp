#include <iostream>

using namespace std;  // Espacio de nombres est�ndar de C++ para evitar el prefijo std::

// Funci�n recursiva para realizar la b�squeda binaria
int busquedaBinariaRecursiva(int arr[], int cota_inf, int cota_sup, int x) {
    // Verifica si la cota inferior es menor o igual a la cota superior
    if (cota_inf <= cota_sup) {
        // Calcula el �ndice medio del subarreglo actual
        int medio = cota_inf + (cota_sup - cota_inf) / 2;

        // Comprueba si el elemento en el medio es igual a x
        if (arr[medio] == x)
            return medio;  // Retorna el �ndice medio si el elemento es igual a x

        // Si x es menor que el elemento en el medio, busca en el subarreglo izquierdo
        if (arr[medio] > x)
            return busquedaBinariaRecursiva(arr, cota_inf, medio - 1, x);

        // Si x es mayor que el elemento en el medio, busca en el subarreglo derecho
        return busquedaBinariaRecursiva(arr, medio + 1, cota_sup, x);
    }

    // Si cota_inf > cota_sup, significa que el elemento no est� presente en el arreglo
    return -1;
}

int main() {
    int n;
    cout << "Ingrese el n�mero de elementos en el arreglo: ";
    cin >> n;  // Lee el n�mero de elementos del usuario

    // Define el arreglo con el tama�o dado por el usuario
    int arr[n];

    cout << "Ingrese los elementos del arreglo en orden ascendente: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Lee cada elemento del arreglo desde la entrada est�ndar
    }

    int x;

    cout << "Ingrese el elemento a buscar: ";
    cin >> x;  // Lee el elemento que se desea buscar

    // Llama a la funci�n de b�squeda binaria recursiva para encontrar x en arr
    int resultado = busquedaBinariaRecursiva(arr, 0, n - 1, x);

    // Si se encontr� el elemento, muestra su �ndice
    if (resultado != -1) {
        cout << "El elemento est� presente en el �ndice " << resultado;
    } else {
        // Si no se encontr� el elemento, muestra un mensaje indicando que no est� presente
        cout << "El elemento no est� presente en el arreglo";
    }

    return 0;  // Retorna 0 para indicar que el programa finaliz� correctamente
}
