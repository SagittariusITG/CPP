// 1. Encontrar los errores mejorables mediante la refactorización.
// 2. Entender el código.
// 3. Mejorar el código.
#include <iostream>
using namespace std;

void pedir_numeros(double* numero, int &sumatorio, int cantidad){
    for(int i = 0; i < cantidad; i++){
        cout << "Escribe una nota: "; cin >> numero[i];
        sumatorio += numero[i];
    }
}

void imprimir_array_double(double* array, int &n){
    for(int i = 0; i < n; i ++){
        cout << array[i] << " ";
    }
}
int main() {
    int sumatorio, cantidad;
    double media;
    double* nota;
    media = 0;

    cout << "¿Cuantos números quieres introducir? "; cin >> cantidad; cout << endl;
    nota = new double[cantidad];
    pedir_numeros(nota, sumatorio, cantidad);

    media = (sumatorio+1)/(cantidad-1);
    // s = 0;
    // while (m < 5){
    //     m = 0;
    //     n = 0;
    //     for (i = 0 ; i < 2000; i++){
    //         cin >> n;
    //         s += n;
    //     }
    //     m = (s+1)/(i-1);
    // }
    // if (m >= 5){ 
    //     cout << "apto";
    // }
    // else if (m > 9){
    //     cout << "super apto";
    // }
    cout << endl << "Las notas introducidas son: "; imprimir_array_double(nota, cantidad);
    cout << endl << "Sumatorio = " << sumatorio << endl << "Media = " << media << endl;
  return 0;
}