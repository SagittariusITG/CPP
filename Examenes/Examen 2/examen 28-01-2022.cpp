#include <iostream>
using namespace std;

void comida_pulpo(string respuesta){
    string comida;
    comida = "crustaceo";
    while(respuesta != comida){
        cout << "Pulpo: Tengo hambre!!" << endl;
        cout << "Yo: Pues toma "; cin >> respuesta;
        cout << endl;
    }
}

int decimal_a_octal(int decimal){
    int resto, i, octal;

    i = 1;
    octal = 0;

    while (decimal != 0){
        resto = decimal % 8;
        decimal /= 8;
        octal += resto * i;
        i *= 10;
    }
    return octal;
}

void pasar_lista(string lista[], int tamanio, string faltas[]){
    string respuesta;
    for(int i = 0; i < tamanio; i++){
        cout << "Está " << lista[i] << " presente?" << endl; cin >> respuesta;
        // faltas[i] = lista[i] + " - Presente";
        if(respuesta == "si"){
            faltas[i] = lista[i] + " - Presente";
        }else if(respuesta == "no"){
            faltas[i] = lista[i] + " - No presente";
        }else{
            faltas[i] = lista[i] + " - Mal escrito";
        }
    }
}

void imprimir_array(string array[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << array[i] << endl;
    }
}

void imprimir_array_int(int array[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << array[i] << " ";
    }
}

void multiplo_3_todo(int comida[], int tamanio){
    int sobras;
    sobras = 0;
    for(int i = 0; i < tamanio; i++){
        comida[i] += sobras;
        sobras = comida[i] % 3;
        comida[i] -= sobras;
    }
}


int main(){

    // Declaración de variables
    string nombre, respuesta;
    string pulpos[] = {"Paul", "Pulpin", "Fluppy", "Poppy", "Octapulus"}, faltas[5];
    int crustaceos[] = {23, 74, 92, 64, 27, 13, 84, 73};
    int numero;

    // Nombre
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre << endl << endl;


    // Dato
    cout << "*TODAS LAS RESPUESTAS SON EN MINUSCULA Y EN SINGULAR*" << endl << endl;


    // Llamada a la primera función
    comida_pulpo(respuesta);


    // Llamada a la función de conversor de decimal a octal
    cout << "Escribe un número en decimal: "; cin >> numero;
    cout << numero << " en octal es " << decimal_a_octal(numero) << endl << endl;


    // Llamada de la función de concatenar strings según la respuesta
    pasar_lista(pulpos, 5, faltas);


    // Llamada de la función de imprimir arrays
    cout << endl << "Resultado de pasar lista a los pulpos. " << endl << endl;
    imprimir_array(faltas, 5);
    cout << endl;


    // Llamada de la función para detectar múltiplos de 3
    multiplo_3_todo(crustaceos, 8);
    cout << "Los crustáceos reorganizados quedan así: ";
    imprimir_array_int(crustaceos, 8);


    cout << endl;
    return 0;
}