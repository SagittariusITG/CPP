// 1. Encontrar los errores mejorables mediante la refactorización.
// 2. Entender el código.
// 3. Mejorar el código.
#include <iostream>
using namespace std;

void pedir_numeros(double* numero, double &sumatorio, int cantidad){
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

void aprobado(double media, int cantidad){
    if(media >= 5){
        cout << "apto";
    }
    else if(media > 9){
        cout << "super apto";
    }
    else{
        cout << "No apto";
    }
}

int main() {
    int cantidad;
    double sumatorio, media;
    double* nota;
    media = 0;

    cout << "¿Cuantos números quieres introducir? "; cin >> cantidad; cout << endl;
    nota = new double[cantidad];
    pedir_numeros(nota, sumatorio, cantidad);

    media = sumatorio / cantidad;

    cout << endl << "Las notas introducidas son: "; imprimir_array_double(nota, cantidad);
    cout << endl << endl << "Sumatorio = " << sumatorio << endl << "Media = " << media << endl << endl;

    aprobado(media, cantidad);
    cout << endl;
  return 0;
}