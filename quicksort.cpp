#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void imprimirArray(int arr[], int larguito) {

    for (int i = 0; i < larguito; i++) cout << arr[i] << " ";

}

void intercambio(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;

}

void quicksort(int arr[], int cotaInf, int cotaSup) {

   int izq = cotaInf;
   int der = cotaSup;
   int medio = cotaInf + (cotaSup - cotaInf) / 2;
   int pivote = arr[medio];

   do {

        while(arr[izq] < pivote && izq < cotaSup) izq++;

        while(arr[der] > pivote && der > cotaInf) der--;

        if (izq <= der) {

            intercambio(arr[izq], arr[der]);
            izq++;
            der--;

        }

   } while (izq <= der);

   if (cotaInf < der) {

        quicksort(arr, cotaInf, der);

    }

    if (cotaSup > izq) {

        quicksort(arr, izq, cotaSup);

    }

}


int main() {

    int largo;

    cout << "Ingrese el largo del array: ";
    cin >> largo;

    int arrai[largo];
    int inicio = 0;
    int medio = largo/2;

    srand(time(0));

    for(int i = 0; i < largo; i++) {

        arrai[i] = rand() % 100;

    }

    cout << "Asi se ve el array ahora: " << endl;
    imprimirArray(arrai, largo);

    quicksort(arrai, inicio, largo-1);

    cout << endl << endl << "Asi se ve el array tras usar el metodo de ordenamiento Quicksort: " << endl;
    imprimirArray(arrai, largo);

    return 0;
}
