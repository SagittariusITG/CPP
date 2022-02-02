#include <iostream>
using namespace std;

int insertar_nums(int array[], int &contador){
    int respuesta;
    contador = 0;

    do{
        cout << "Inserta un número: "; cin >> respuesta;
        array[contador] = respuesta;
        contador++;
    }while(respuesta != -1);
    return contador;
}

int num_max_array(int array[], int &contador){
    int mayor;
    for(int i = 0; i < contador; i++){
        if(array[i] > mayor){
            mayor = array[i];
        }
    }
    return mayor;
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

float num_avg_array(int array[], int contador){
    int avg;
    avg = 0;
    for(int i = 0; i < contador; i++){
        avg += array[i];
    }
    avg = avg / contador;
    return avg;
}

long sacar_potencia(long exponente, long base){
    long resultado, suma;
    suma = 1;
    resultado = 1;
    while(exponente > 0){
        resultado = resultado * base;
        suma += resultado;
        exponente--;
    }
    return suma;
}

int imprimir_nums(){
    for(int i = 100; i >= 0; i--){
        if(i % 10 == 0){
            cout << endl;
        }
        cout << i << "\t";
    }
}

void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int array[100], contador, max, min;
    float avg;
    long exponente, resultado, base;

    exponente = 6;
    base = 2;

    contador = 0;
    
    // Llamada función para insertar números en array
    insertar_nums(array, contador);

    cout << endl << "La array contiene estos números: "; imprimirArray(array, contador - 1);

    cout << endl << endl;

    // Llamada función para sacar número mayor de array
    max = num_max_array(array, contador);

    cout << "El número máximo es " << max << endl;

    // Llamada función para sacar número menor de array
    min = num_min_array(array, contador - 1);

    cout << "El número minimo es " << min << endl;

    // Llamada función para sacar media de un array
    avg = num_avg_array(array, contador - 1);

    cout << "El número promedio es " << avg << endl;


    cout << endl << endl;

    // Llamada de función para sumar la potencia
    resultado = sacar_potencia(exponente, base);

    cout << "La suma de los exponentes con base " << base << " y exponente " << exponente << " es = " << resultado << endl << endl;

    // Llamada función para imprimir números
    imprimir_nums();
    cout << endl << endl;


    return 0;
}