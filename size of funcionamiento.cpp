#include <iostream>
using namespace std;

int main(){
    int tabla[] = {1,2,3,4,5};
    cout << sizeof(tabla) << endl; // calcula o suma el total de bytes que ocupa el array en memoria
    cout << sizeof(*tabla) << endl; // calcula el valor en bytes de un elementod e la tabla (el primero)
    cout << sizeof(tabla)/sizeof(*tabla); // calcula cuantos elementos existen en el array
    return 0;
}
