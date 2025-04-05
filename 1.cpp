#include <iostream>
using namespace std;


void mostrar(int* p, int tam);

// intercambiar valores
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// creamos un funcion pa mezclar
void mezclar(int* p, int* q) {
    // Mientras los punteros no sean iguales (no hemos terminado de recorrer el arreglo)
    while (p != q) {
        if (*p > *q) {
            // Intercambia los elementos si el valor de *p es mayor que *q
            for (int* ini = p, *fin = q; ini != q; ini++, fin++) {
                if(*ini>*fin){
                    swap(*ini, *fin);
                }
            }
        }
        p++;  // Avanzamos el puntero p
    }
}

// mostramos los elementos del arreglo
void mostrar(int* p, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << *(p + i) << " ";  // usamos aritmetica de punteros para imprimir
    }
    cout << endl;
}

int main() {
    int a[] = {2, 4, 6, 8, 1, 3, 5, 7};  // Array original
    int tam = sizeof(a) / sizeof(a[0]);     

    cout << "Array original: ";
    mostrar(a, tam);  // Muestra el arreglo original

    mezclar(a, a + 4);   // Mezclar la primera mitad con la segunda

    cout << "Array después de mezclar ";
    mostrar(a, tam);  // Muestra el arreglo después de la operación mezclar

    return 0;
}