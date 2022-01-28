#include <iostream>
using namespace std;

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

void detectar_multiplo_3(int numeros[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        if(numeros[i] % 3 == 0){
            cout << numeros[i] << endl;
        }
    }
}


int main(){
    string nombre, comida, respuesta;
    string pulpos[] = {"Paul", "Pulpin", "Fluppy", "Poppy", "Octapulus"}, faltas[5];
    int crustaceos[] = {23, 74, 92, 64, 27, 13, 84, 73};
    int numero;

    nombre = "Joël Arnaud Carreras";
    comida = "crustaceo";

    cout << endl << nombre << endl << endl;

    cout << "*TODAS LAS RESPUESTAS SON EN MINUSCULA Y EN SINGULAR*" << endl << endl;

    while(respuesta != comida){
        cout << "Pulpo: Tengo hambre!!" << endl;
        cout << "Yo: Pues toma "; cin >> respuesta;
        cout << endl;
    }

    cout << "Escribe un número en decimal: "; cin >> numero;
    cout << numero << " en octal es " << decimal_a_octal(numero) << endl << endl;

    pasar_lista(pulpos, 5, faltas);

    cout << endl << "Resultado de pasar lista a los pulpos. " << endl << endl;
    imprimir_array(faltas, 5);

    cout << endl;

    detectar_multiplo_3(crustaceos, 8);


    cout << endl;
    return 0;
}