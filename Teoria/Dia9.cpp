#include <iostream>
using namespace std;

void imprimir_array_int(int array[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << array[i] << " ";
    }
}

int num_min_array(int array[], int contador){
    int menor;
    for(int i = 0; i < contador; i++){
        if(array[i] < menor){
            menor = array[i];
        }
    }
    return menor;
}

int sumador_resto(int comida[], int tamanio){
    int sobras, sumatorio;
    sobras = 0;
    sumatorio = 0;
    for(int i = 0; i < tamanio; i++){
        sobras = comida[i] % 3;
        comida[i] -= sobras;
        sumatorio += sobras;
    }
    return sumatorio;
}

void sumar_resto_numero_min(int array[], int tamanio, int &min, int &resto){
    for(int i = 0; i < tamanio; i++){
        if(min == array[i]){
            array[i] += resto;
        }
    }
}

int main(){

    // Declaración de variables
    int crustaceo[] = {23, 74, 92, 64, 27, 13, 84, 73}, asd, min, sol;

    cout << "El array es: ";
    imprimir_array_int(crustaceo, 8);

    cout << endl;

    asd = sumador_resto(crustaceo, 8);
    cout << "Total de resto: " << asd;
    // imprimir_array_int(crustaceo, 8);

    cout << endl;

    min = num_min_array(crustaceo, 8);
    cout << "Número más pequeño: " << min;

    cout << endl;

    sumar_resto_numero_min(crustaceo, 8, min, asd);
    cout << "El array queda así: ";
    imprimir_array_int(crustaceo, 8);


    cout << endl;
    return 0;
}