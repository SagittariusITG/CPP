#include <iostream>
using namespace std;

void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}

void delete_array(int array[], int tamanio){
    for(int i = 1; i < 5; ++i){
        array[i] = array[i + 1];
    }
}

void lista_al_reves(int array[], int tamanio){
    for(int i = tamanio - 1; i > 0 - 1; i--){
        cout << array[i] << " ";
    }
}

void copy_array(int array[], int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = array[i];
    }
}

void order_array(int array[], int ordered[], int size){
    int min;
    min = array[0];
    for(int i = 0; i < size + 1; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
}

// void non_rep_nums(int array[], int reps[], int size){
//     for(int i = 0; i < size; i++){
//         if(array[i] == array[i]){
//             cout << reps[i] << " no " << array[i];
//             reps[i] = array[i];
//         }
//     }
// }

int main(){
    string nombre;
    int rands[5]= {7,3,6,8,2}, copia_array[4], ordered[4], reps[4];
    int cantidad;

    // Ejercicio 1
    nombre = "Joël Arnaud Carreras";
    cout << nombre;
    cout << endl << endl;

    // Ejercicio 2
    cout << "Los números random son: ";
    imprimirArray(rands, 5);
    cout << endl << endl;

    // Ejercicio 3
    rands[2] = rands[2]*2;
    cout << "El doble del tercer número es: ";
    imprimirArray(rands, 5);
    cout << endl << endl;

    // Ejercicio 4
    cantidad = 4;
    delete_array(rands, 5);
    cout << "Eliminando el segundo número: ";
    imprimirArray(rands, cantidad);
    cout << endl << endl;

    // Ejercicio 5
    cout << "El array al reves es: ";
    lista_al_reves(rands, cantidad);
    cout << endl << endl;

    // Ejercicio 6
    copy_array(rands, copia_array, cantidad);
    cout << "La copia de los numeros random es: ";
    imprimirArray(copia_array, cantidad);
    cout << endl << endl;

    // Ejercicio 7
    copy_array(copia_array, ordered, cantidad);
    order_array(rands, ordered, cantidad);
    cout << "Los números ordenados son: ";
    imprimirArray(ordered, cantidad);
    cout << endl << endl;

    // Ejercicio 8
    // copy_array(rands, reps, cantidad);
    // non_rep_nums(copia_array, reps, cantidad);
    // cout << "La lista sin los repetidos es: ";
    // imprimirArray(reps, cantidad);

    cout << endl;
    return 0;
}