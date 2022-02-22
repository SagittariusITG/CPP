#include <iostream>
using namespace std;

void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}

void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}

void imprimir_array_puntero_reverso(int* array, int size){
    for(int i = size - 1; i > 0 - 1; i--){
        cout << array[i] << " ";
    }
}

void imprimir_array_puntero(int* array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

void random_numbers(int array[], int size){
    for(int i = 0; i< size; i++){
        array[i] = rand() % 10;
    }
}

void double_position(int array[], int size, int position){
    for(int i = 0; i < size; i++){
        if(i == position){
            array[i] *= 2;
        }
    }
}

void delete_number_array(int array[], int size, int position){
    for(int i = (position - 1); i < size; i++){
        array[i] = array[i + 1];
    }
}

int main(){
    int rands[5];
    int* copied_rands;
    int size, size_4, position_3, position_4;

    size = 5;
    position_3 = 3;
    position_4 = 1;
    size_4 = 4;

    copied_rands = new int[size_4];
    copied_rands = rands;

    // Ejercicio 1
    joel_arnaud();
    cout << endl << endl;

    // Ejercicio 2
    random_numbers(rands, size);
    cout << "Los números random son: ";
    imprimirArray(rands, size);
    cout << endl << endl;

    // Ejercicio 3
    // cout << "Escribe la posición del número que quieras su doble: ";
    // cin >> position_3;
    double_position(rands, size, position_3 - 1);
    cout << "Doble del tercer número: ";
    imprimirArray(rands, size);
    cout << endl << endl;

    // Ejercicio 4
    // cout << "Escribe la posición del número que quieras borrar: ";
    // cin >> position_4;
    delete_number_array(rands, size_4, position_4);
    cout << "Número posición " << position_4 + 1 << " eliminado: ";
    imprimirArray(rands, size_4);
    cout << endl << endl;

    // Ejercicio 5
    cout << "Imprimir array al reves: ";
    imprimir_array_puntero_reverso(copied_rands, size_4);
    cout << endl << endl;

    // Ejercicio 6
    cout << "La copia del array es: ";
    imprimir_array_puntero(copied_rands, size_4);
    cout << endl << endl;

    // Ejercicio 7

    cout << endl;
    return 0;
}