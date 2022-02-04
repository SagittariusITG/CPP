#include <iostream>
#include <cstdlib>
using namespace std;

void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}

void insert_nums(int array[], int size){
    int n;
    n = 0;
    for(int i = 0; i < size; i++){
        cout << "Escribe un numero: "; cin >> n;
        array[i] = n;
    }
}

void copy_array(int array[], int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = array[i];
    }
}

void mayor_que(int array[], int size){
    int contador, new_arr[10];
    contador = 0;
    for(int i = 0; i < size; i++){
        if(array[i] >= 5){
            new_arr[contador] = array[i];
            contador++;
        }
    }
    imprimirArray(new_arr, contador);
}

void insert_0_and_1_vec(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        array[i] = 0;
    }
    array[size] = 1;
}

void decrement_in_5(int array[], int position){
    do{
        cout << "¡Di un número del 1 al 10! "; cin >> position;
        if(array[position] < 5){
            array[position] = 0;
        }else{
            array[position] - 5;
        }
        imprimirArray(array, 10);
    }while(array[position] == 0);
}

void find_true(int array[]){
    int resp, contador;
    resp = 0;
    contador = 0;
    do{
        cout << "Encuentra el 1: "; cin >> resp;
        if(array[contador] == resp){
            cout << "Has acertado!" << endl;
        }else{
            cout << "Prueba otra vez!" << endl;
        contador++;
        }
    }while(array[contador] == resp or contador == 5);
}

void insert_random_nums(int array[], int size){
    int n;
    for(int i = 0; i < size; i++){
        n = rand() % 100;
        array[i] = n;
    }
}

int main(){
    string mi_nombre;
    int size, respuesta;
    int greater_than[10], empty_vec[10], copy_greater_than[10], rand_array[10];

    size = 10;

    // Ejercicio 1
    mi_nombre = "Joël Arnaud Carreras";
    cout << mi_nombre << endl << endl;

    // Ejercicio 2
    insert_nums(greater_than, size);
    copy_array(greater_than, copy_greater_than, size);
    cout << endl << "Los números mayores de 5 son: ";
    mayor_que(greater_than, size);
    cout << endl;

    // Ejercicio 2.1 (3 en readme)
    cout << endl;
    insert_0_and_1_vec(empty_vec, size);
    imprimirArray(empty_vec, size);
    cout << endl << endl;

    // EJercicio 3 / 3.1 (4 | 5 en readme)
    respuesta = 0;
    decrement_in_5(copy_greater_than, respuesta);
    cout << endl << endl;

    // Ejercicio 3.2
    find_true(empty_vec);

    // Ejercicio 4 (7 en readme)
    // Explicación en el README

    insert_random_nums(rand_array, 10);
    imprimirArray(rand_array, 10);

    cout << endl;

    return 0;
}