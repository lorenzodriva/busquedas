#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int largo;

    printf("Ingrese el largo del array: ");
    scanf("%d", &largo);

    int arrai[largo];
    int swich = 1;

    for (int i = 0; i < largo; i++) {

        int numeraso;

        printf("Ingrese el numero para insertar en el indice %d: ", i);
        scanf("%d", &numeraso);

        arrai[i] = numeraso;

    }

    printf("\nAsi se ve el array ahora:\n\n");

    for (int i = 0; i < largo; i++) {

        printf("%d ", arrai[i]);

    }

    printf("\n\nAhora vamos a ordenar el array...\n");

    do {
        swich = 0;

        for (int i = 0; i < largo - 1; i++) {

            if (arrai[i] > arrai[i + 1]) {

                int temp = arrai[i];
                arrai[i] = arrai[i + 1];
                arrai[i + 1] = temp;
                swich = 1;

            }

        }

    } while (swich);

    printf("\nEl array que has construido, ahora ordenado, queda asi:\n\n");

    for (int i = 0; i < largo; i++) {

        printf("%d ", arrai[i]);

    }

    getch();

    return 0;
}
